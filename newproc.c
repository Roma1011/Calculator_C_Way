WNDPROC oldproc;
LRESULT CALLBACK newproc(HWND hWnd, UINT Message, WPARAM wParam,LPARAM lParam)
{
	switch(Message)
	{
		case WM_KEYDOWN:
			keyBordNum(wParam,hWnd);
		break;
		default:
		return CallWindowProc(oldproc,hWnd,Message,wParam,lParam); 
	}
}