#include <windows.h>
void WindClasRegistr(HWND hWnd,HINSTANCE hInstance)
{
//hwndMainWind=(HBITMAP)LoadImage(NULL,"2.bmp",IMAGE_BITMAP,100,100,LR_LOADFROMFILE);
				//SendMessage(hwndMainWind,BM_SETIMAGE ,IMAGE_BITMAP,(LPARAM)hwndMainWind);
WNDCLASS wc={0};
WNDCLASS wc2={0};
wc.hbrBackground=CreateSolidBrush(RGB(0,0,0));
wc.hIcon=(HICON)LoadImage(0,"C:\\Users\\Student\\Desktop\\Cwork\\Calc 1.2\\Calc\\Debug\\Calc.ico",IMAGE_ICON,32,32,LR_LOADFROMFILE);
wc.hCursor=LoadCursor(NULL,IDC_ARROW);
wc.lpfnWndProc=WndProc;
wc.lpszClassName="FRZ";
	if(RegisterClass(&wc)==0)
		MessageBox(hWnd,"Check WNDCLASS Registration","Info",MB_ICONINFORMATION|MB_OK);
}
