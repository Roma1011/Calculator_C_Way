long keyBordNum(UINT wParam,HWND hWnd)
{
	switch(wParam)
	{	
	//--------------------------------------here start keybord up num key-------------------------------------------
		case 0x30:
		SendDlgItemMessage(hWnd,NUM_ZIRO,BM_CLICK,0,0);
		break;
		case 0x31:
		SendDlgItemMessage(hWnd,NUM_ONE,BM_CLICK,0,0);
		break;
		case 0x32:
		SendDlgItemMessage(hWnd,NUM_TWO,BM_CLICK,0,0);
		break;
		case 0x33:
		SendDlgItemMessage(hWnd,NUM_THREE,BM_CLICK,0,0);
		break;
		case 0x34:
		SendDlgItemMessage(hWnd,NUM_FOUR,BM_CLICK,0,0);
		break;
		case 0x35:
		SendDlgItemMessage(hWnd,NUM_FIVE,BM_CLICK,0,0);
		break;
		case 0x36:
		SendDlgItemMessage(hWnd,NUM_SIX,BM_CLICK,0,0);
		break;
		case 0x37:
		SendDlgItemMessage(hWnd,NUM_SEVEN,BM_CLICK,0,0);
		break;
		case 0x38:
		SendDlgItemMessage(hWnd,NUM_EIGHT,BM_CLICK,0,0);
		break;
		case 0x39:
		SendDlgItemMessage(hWnd,NUM_NINE,BM_CLICK,0,0);
		break;
		case 0xBF:
		SendDlgItemMessage(hWnd,DIVIDE,BM_CLICK,0,0);
		break;
		case 0xBD:
		SendDlgItemMessage(hWnd,MINUS,BM_CLICK,0,0);
		break;
		case 0x7B:
		SetWindowPos(MessageBx,HWND_TOPMOST,0,0,50,50,SWP_SHOWWINDOW);
		MessageBx=MessageBox(hWnd,"Corrected: (Enter) button error, add a dot\n\nUpdated: Number Conversion,Click Sound,Scroll Bar\n\nCreated by R.Kekua","Report",MB_ICONINFORMATION|MB_OK);
		break;
	//---------------------------------------------here start right corner num key---------------------------------------------
		case VK_NUMPAD0:
		SendDlgItemMessage(hWnd,NUM_ZIRO,BM_CLICK,0,0);
		break;
		case VK_NUMPAD1:
		SendDlgItemMessage(hWnd,NUM_ONE,BM_CLICK,0,0);
		break;
		case VK_NUMPAD2:
		SendDlgItemMessage(hWnd,NUM_TWO,BM_CLICK,0,0);
		break;
		case VK_NUMPAD3:
		SendDlgItemMessage(hWnd,NUM_THREE,BM_CLICK,0,0);
		break;
		case VK_NUMPAD4:
		SendDlgItemMessage(hWnd,NUM_FOUR,BM_CLICK,0,0);
		break;
		case VK_NUMPAD5:
		SendDlgItemMessage(hWnd,NUM_FIVE,BM_CLICK,0,0);
		break;
		case VK_NUMPAD6:
		SendDlgItemMessage(hWnd,NUM_SIX,BM_CLICK,0,0);
		break;
		case VK_NUMPAD7:
		SendDlgItemMessage(hWnd,NUM_SEVEN,BM_CLICK,0,0);
		break;
		case VK_NUMPAD8:
		SendDlgItemMessage(hWnd,NUM_EIGHT,BM_CLICK,0,0);
		break;
		case VK_NUMPAD9:
		SendDlgItemMessage(hWnd,NUM_NINE,BM_CLICK,0,0);
		break;
		case VK_MULTIPLY:
		SendDlgItemMessage(hWnd,MULTIPLE,BM_CLICK,0,0);
		break;
		case VK_DIVIDE:
		SendDlgItemMessage(hWnd,DIVIDE,BM_CLICK,0,0);
		break;
		case VK_ADD:
		SendDlgItemMessage(hWnd,PLUS ,BM_CLICK,0,0);
		break;
		case VK_DECIMAL:
		SendDlgItemMessage(hWnd,97,BM_CLICK,0,0);
		break;
		case VK_SUBTRACT:
		SendDlgItemMessage(hWnd,MINUS,BM_CLICK,0,0);
		break;
		case VK_BACK:
		SendDlgItemMessage(hWnd,DEL,BM_CLICK,0,0);
		break;
		case VK_RETURN:
		SendDlgItemMessage(hWnd,EQUAL,BM_CLICK,0,0);
		break;
		case VK_DELETE:
		SendDlgItemMessage(hWnd,CE,BM_CLICK,0,0);
		break;
		case VK_ESCAPE:
		DestroyWindow(hWnd);
		break;
	}
return 0;
}
