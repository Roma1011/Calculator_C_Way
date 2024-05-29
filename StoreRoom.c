#define IDC_HAND  MAKEINTRESOURCE(32649)
LRESULT CALLBACK WndProc(HWND hWnd,UINT Message,WPARAM wParam,LPARAM lParam)
{
int X[26]={0,1,2,3,4,5,6,7,8,9,11,16,22,77,88,121,90,91,92,93,94,95,96,97,99};
int counterx=0;
int i;
GetClientRect(hWnd,&rect);
	if(strlen(NumLine)>=114)
		ShowScrollBar(hEditWindow,SB_VERT,TRUE);
	else
		ShowScrollBar(hEditWindow,SB_VERT,FALSE);
	switch(Message)
	{
		case WM_CREATE:
		{
		font[0]=CreateFont(20,10,0,0,FW_BOLD,0,0,0,0,0,0,0,0,"Times New Roman");
		font[1]=CreateFont(18,10,0,0,FW_ULTRABOLD,0,0,0,0,0,0,0,0,"Helvetica");
		CreateFunc(hWnd);
		sndPlaySound("ClickS.wav",SND_ASYNC);
		SendDlgItemMessage(hWnd,121,WM_SETFONT,(UINT)font[0],0);
			for(counterx;counterx<25;counterx++)
			{
				if(X[counterx]!=121)
					SendDlgItemMessage(hWnd,X[counterx],WM_SETFONT,(UINT)font[1],0);
				else
					continue;
			}
		return 0;
		}
		break;
//---------------------------------
		case WM_COMMAND:
		ArithmeticalOP(wParam,hWnd,lParam,Message);
		break;
//----------------------------------------
		case WM_KEYDOWN:
		keyBordNum(wParam,hWnd);
		break;
//----------------------------------
		case WM_CTLCOLORSTATIC:
		{
			for(i=11;i<16;i++)
			{
				if((HWND)lParam==GetDlgItem(hWnd,X[i]))
				{
				SetBkMode((HDC)wParam,TRANSPARENT);
				SetTextColor((HDC)wParam, RGB(255, 255, 255));
				return (LRESULT)((HBRUSH)GetStockObject(BLACK_PEN));
				}
			}
		}
		break;
//--------------------------------------
		case WM_CTLCOLORBTN:
		{
		}
		break;
//--------------------------------------
		case WM_DRAWITEM:
		{
		DrawItemBtn(lParam);
	//	InvalidateRect(hWnd,0,0);
		//UpdateWindow(hWnd);
		//return TRUE;
		}
		break;
		case WM_VSCROLL:
		//InvalidateRect(hEditWindow,0,0);
		break;
//--------------------------------------------
		case WM_CTLCOLORDLG:
			return (INT_PTR)GetStockObject(GRAY_BRUSH);
		break;
//-----------------------------------
		case WM_SETICON:
		break;
//-----------------------------------
		case WM_CLOSE:
		DeleteObject((HBRUSH)GetClassLong(hEditWindow,GCL_HBRBACKGROUND));
		DeleteObject((HBRUSH)GetClassLong(Hexadecimal,GCL_HBRBACKGROUND));
		DestroyWindow(hWnd);
		//return TRUE;
		break;
//----------------------------------
		case WM_DESTROY:
		PostQuitMessage(0);
		break;
//----------------------------------
		default:
			return DefWindowProc(hWnd,Message,wParam,lParam);
	}
return 0;
}
void AddWindow(HWND hWnd)
{
//HMENU hMenuBar;
//HMENU hMenu;
HMENU sMenu;
//-------------------------
//sMenu=CreateMenu();
//hMenuBar=CreateMenu();
sMenu=CreateMenu();
//---------------------------------
AppendMenuW(sMenu,MF_STRING,NULL,L"Open");
}
/*
LRESULT CALLBACK hEditWindow(HWND hWnd,UINT Message,WPARAM wParam,LPARAM lParam)
{
return DefWindowProc(hWnd,Message,wParam,lParam);
}
*/
/*
LRESULT CALLBACK ChildWind(HWND hWnd,UINT Message,WPARAM wParam,LPARAM lParam)
{
static HWND hChildWindow;
	switch(Message)
	{
			case WM_CREATE:
			hChildWindow=CreateWindow("CLASS","WIND"
			,WS_CHILDWINDOW|WS_VISIBLE,
			10,10,100,100
			,hWnd
			,NULL
			,GetModuleHandle(NULL)
			,NULL);
		return 0;
		break;
		default:
			return DefWindowProc(hWnd,Message,wParam,lParam);
	}
return 0;
}
*/
/*
int procesForpn(MSG msg)
{
static int x=200,y=200;
static PAINTSTRUCT ps={0};
static HDC hdc_mem=0;
static HBITMAP Hbmp=0;
hdc_mem=CreateCompatibleDC(GetDC(msg.hwnd));
Hbmp=LoadImage(0,"C:\\Users\\Student\\Desktop\\new.bmp",IMAGE_BITMAP,200,200,LR_LOADFROMFILE);
	switch(msg.message)
	{
		/*
		case WM_LBUTTONDOWN:
			if(msg.hwnd==hwnd)
		break;
		*/
/*
		case WM_CREATE:
		break;

		case WM_KEYDOWN:
			if(msg.lParam==VK_RIGHT)
				x+=10;
			else if(msg.lParam==VK_LEFT)
				x-=10;
		break;
		case WM_PAINT:
		{
		BeginPaint(msg.hwnd,&ps);
		SelectObject(hdc_mem,Hbmp);
		BitBlt(ps.hdc,x,y,100,100,hdc_mem,0,0,SRCAND);
		InvalidateRect(msg.hwnd,0,0);
		}
		break;
		default:
		{
 		printf("\nHWND=%u, Message=%u, Params:%u %id"
			,msg.hwnd
			,msg.message
			,msg.lParam
			,msg.wParam
			);
		}
	}
return 0;
};
*/
