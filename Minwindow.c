#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "BigData.c"
#include "newproc.c"
#include "GlobalVR.c"
#include "BigNumFactor.c"
#include "Factorial.c"
#include "BigDataMinusOP.c"
#include "FloatPlus.c"
#include "DecimalSub.c"
#include "DecMul.c"
#include "BigDataMul.c"
#include "DrawItem.c"
#include "Limitations.c"
#include "AnothSystCnvrt.c"
#include "KeyBord.c"
#include "Equal.c"
#include "ForCreate.c"
#include "WMcommand.c"
#include "StoreRoom.c"
#include "WNDclassRoom.c"
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpszArguments,int nCmdShow)
{
MSG msg;
BOOL returnValue;
WindClasRegistr(hwndMainWind,hInstance);
hwndMainWind=CreateWindow("FRZ","Calculator 1.0"
				  ,WS_VISIBLE
				  |WS_OVERLAPPED
				  |WS_SYSMENU
				  |WS_MINIMIZEBOX
				  |WS_BORDER
				  |WS_DLGFRAME
				  |WS_CLIPCHILDREN
				  ,300,300
				  ,267,570
				  ,NULL,NULL,0,NULL);
	while(returnValue=GetMessage(&msg,0,0,0)!=0)
	{
		if(returnValue==-1)
		{
		MessageBox(hwndMainWind
			,TEXT("error Creating aplication")
			,TEXT("Error..")
			,MB_OK|MB_ICONERROR);
		exit(0);
		}
		else
		{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}
	}
return 0;
}
