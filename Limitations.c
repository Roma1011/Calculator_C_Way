void LimitFunc(HWND hWnd)
{
//TCHAR NumLine[1100];
	if((NumLine[0]=='�')
		||(NumLine[0]=='+')
		||(NumLine[0]=='X')
		||(NumLine[0]=='.')
		||(NumLine[0]=='^'))
	{
	memset(NumLine,0,strlen(NumLine));
	SendDlgItemMessage(hWnd,121,WM_SETTEXT,0,(long)NumLine);
	Counter=0;
	}
	else if(((NumLine[0]=='-')&&(NumLine[1]=='+'))
		||((NumLine[0]=='-')&&(NumLine[1]=='-'))
		||((NumLine[0]=='-')&&(NumLine[1]=='X'))
		||((NumLine[0]=='-')&&(NumLine[1]=='�'))
		||((NumLine[0]=='-')&&(NumLine[1]=='.'))
		||((NumLine[0]=='-')&&(NumLine[1]=='^')))
	{
	Counter=0;
	memset(NumLine,0,strlen(NumLine));
	SendDlgItemMessage(hWnd,121,WM_SETTEXT,0,(long)NumLine);
	}
}
//--------------------------------------------------------------------------------------------------------------------------
void LimitNull(HWND hWnd)
{
//TCHAR NumLine[1100];
//NumLine[1100];
	if(((NumLine[0]=='0')&&(NumLine[1]=='1')
		||(NumLine[0]=='0')&&(NumLine[1]=='2')
		||(NumLine[0]=='0')&&(NumLine[1]=='3')
		||(NumLine[0]=='0')&&(NumLine[1]=='4')
		||(NumLine[0]=='0')&&(NumLine[1]=='5')
		||(NumLine[0]=='0')&&(NumLine[1]=='6')
		||(NumLine[0]=='0')&&(NumLine[1]=='7')
		||(NumLine[0]=='0')&&(NumLine[1]=='8')
		||(NumLine[0]=='0')&&(NumLine[1]=='9')
		||(NumLine[0]=='0')&&(NumLine[1]=='0')))
	{
	NumLine[0]=NumLine[1];
	NumLine[1]='\0';
	SendDlgItemMessage(hWnd,121,WM_SETTEXT,0,(long)NumLine);
	}
}
//----------------------------------------------------------------------------------------------------------------------------
void LimitNotAgan(HWND hWnd,char x[500])
{
int i=strlen(x);
	if((x[i-2]=='-')&&(x[i-1]=='-')
		||(x[i-2]=='-')&&(x[i-1]=='+')
		||(x[i-2]=='-')&&(x[i-1]=='X')
		||(x[i-2]=='-')&&(x[i-1]=='�')
		||(x[i-2]=='-')&&(x[i-1]=='.'
		||(x[i-2]=='-')&&(x[i-1]=='^'))
//-----------------------------------------------------------
		||(x[i-2]=='+')&&(x[i-1]=='+')
		||(x[i-2]=='+')&&(x[i-1]=='-')
		||(x[i-2]=='+')&&(x[i-1]=='X')
		||(x[i-2]=='+')&&(x[i-1]=='.')
		||(x[i-2]=='+')&&(x[i-1]=='�'
		||(x[i-2]=='+')&&(x[i-1]=='^'))
//-----------------------------------------------------------
		||(x[i-2]=='X')&&(x[i-1]=='+')
		||(x[i-2]=='X')&&(x[i-1]=='-')
		||(x[i-2]=='X')&&(x[i-1]=='X')
		||(x[i-2]=='X')&&(x[i-1]=='.')
		||(x[i-2]=='X')&&(x[i-1]=='�'
		||(x[i-2]=='X')&&(x[i-1]=='^'))
//-----------------------------------------------------------
		||(x[i-2]=='�')&&(x[i-1]=='+')
		||(x[i-2]=='�')&&(x[i-1]=='-')
		||(x[i-2]=='�')&&(x[i-1]=='X')
		||(x[i-2]=='�')&&(x[i-1]=='.')
		||(x[i-2]=='�')&&(x[i-1]=='�'
		||(x[i-2]=='�')&&(x[i-1]=='^'))
//-----------------------------------------------------------
		||(x[i-2]=='.')&&(x[i-1]=='+')
		||(x[i-2]=='.')&&(x[i-1]=='-')
		||(x[i-2]=='.')&&(x[i-1]=='X')
		||(x[i-2]=='.')&&(x[i-1]=='.')
		||(x[i-2]=='.')&&(x[i-1]=='�')
		||(x[i-2]=='.')&&(x[i-1]=='^'))
		x[i-1]='\0';
}