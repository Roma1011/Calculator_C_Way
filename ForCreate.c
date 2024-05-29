#include <windows.h>
#include "GlobalVR.c"
#define UNICODE
#define WM_PARENTNOTIFY 0x0210
HBITMAP LodImg[20];
void CreateFunc(HWND hWnd)
{
char PicDta[20]="1234567890F";
int SizDta[20]={45,45,35,35,35,35,30,30,10,30,30};
int IdDta[25]={CE,DEL,EQUAL,PLUS,MINUS,DIVIDE,MULTIPLE,FACTRORIAL,DOT,POW,ONF};
int i;
hEditWindow=CreateWindowExA(WS_EX_RIGHT|WS_EX_RIGHTSCROLLBAR,"edit","",WS_VISIBLE|WS_CHILDWINDOW|ES_READONLY|ES_MULTILINE,1,-1,rect.right,130,hWnd,(HMENU)121,GetModuleHandle(NULL),NULL);
//----------------------------------------------------------------------------------------------------------------------------------
NumButton1=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,1,317,60,60,hWnd,(HMENU)NUM_ONE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton2=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,67,317,60,60,hWnd,(HMENU)NUM_TWO,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton3=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,133,317,60,60,hWnd,(HMENU)NUM_THREE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton4=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,1,378,60,60,hWnd,(HMENU)NUM_FOUR,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton5=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,67,378,60,60,hWnd,(HMENU)NUM_FIVE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton6=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,133,378,60,60,hWnd,(HMENU)NUM_SIX,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton7=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,1,439,60,60,hWnd,(HMENU)NUM_SEVEN,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton8=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,67,439,60,60,hWnd,(HMENU)NUM_EIGHT,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton9=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,133,439,60,60,hWnd,(HMENU)NUM_NINE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
NumButton0=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_PUSHBUTTON|BS_OWNERDRAW,1,500,60,40,hWnd,(HMENU)NUM_ZIRO,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
//--------------------------------------------------------------------------------------------------------------------------------
DivButton=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,199,256,60,60,hWnd,(HMENU)DIVIDE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
MulButton=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,199,317,60,60,hWnd,(HMENU)MULTIPLE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
MinusButton=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,199,378,60,60,hWnd,(HMENU)MINUS,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
PlusButton=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,199,439,60,60,hWnd,(HMENU)PLUS,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
Equals=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|/*BS_PUSHBUTTON|BS_OWNERDRAW/*/BS_BITMAP,133,256,60,60,hWnd,(HMENU)EQUAL,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
CEButton=CreateWindow("button","CE",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,1,256,60,60,hWnd,(HMENU)CE,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
Factor=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,199,500,60,40,hWnd,(HMENU)FACTRORIAL,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
DelButton=CreateWindow("button","",WS_VISIBLE|WS_CHILDWINDOW|BS_BITMAP,67,256,60,60,hWnd,(HMENU)DEL,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
Dot=CreateWindow("button","",WS_VISIBLE|WS_CHILD|BS_BITMAP,67,500,60,40,hWnd,(HMENU)DOT,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
Pow=CreateWindow("button","",WS_VISIBLE|WS_CHILD|BS_BITMAP,133,500,60,40,hWnd,(HMENU)POW,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
//----------------------------------------------------number other mode---------------------------------------------------------------
Binary=CreateWindowExA(WS_EX_RIGHT,"edit","",WS_VISIBLE|WS_CHILDWINDOW|ES_READONLY|ES_MULTILINE,0,130,rect.right,30,hWnd,(HMENU)BIN,GetModuleHandle(NULL),NULL);
Septenary=CreateWindowExA(WS_EX_RIGHT,"static","",WS_VISIBLE|WS_CHILDWINDOW,0,161,rect.right,30,hWnd,(HMENU)SEPT,GetModuleHandle(NULL),NULL);
Octal=CreateWindowExA(WS_EX_RIGHT,"static","",WS_VISIBLE|WS_CHILDWINDOW,0,192,rect.right,30,hWnd,(HMENU)OCT,GetModuleHandle(NULL),NULL);
Hexadecimal=CreateWindowExA(WS_EX_RIGHT,"static","",WS_VISIBLE|WS_CHILDWINDOW,37,223,rect.right-37,30,hWnd,(HMENU)HEX,GetModuleHandle(NULL),NULL);
ONOF=CreateWindow("button","",WS_VISIBLE|WS_CHILD|BS_BITMAP,0,222,30,32,hWnd,(HMENU)ONF,(HINSTANCE)GetWindowLong(hWnd,GWL_HINSTANCE),NULL);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<11;i++)
	{
	char Reservoir[10]="";
		memcpy(Reservoir,PicDta+i,1);
		strcat(Reservoir,".bmp");
		LodImg[i]=(HBITMAP)LoadImage(NULL,Reservoir,IMAGE_BITMAP,SizDta[i],SizDta[i],LR_LOADFROMFILE);
		SendDlgItemMessage(hWnd,IdDta[i],BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)LodImg[i]);
	}
ShowScrollBar(hEditWindow,SB_VERT,FALSE);
}
//SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_MAXIMIZEBOX); 