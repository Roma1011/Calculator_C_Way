#pragma comment(lib,"Shifting.lib")
void BigDataMulDC(char num1[500],char num2[500],char num3[600])
{
char *e;
int counter=0,cntr=0,cntr2=0,strl=0;
int nUm1[500]={0},nUm2[500]={0};
int Num1,Num2;
int controlK=0,controlFNLRES=0;
int finalCounter=0;
int index=0,FinalIndx=0;
static int result=0;
char buf1[35]="",buf2[35]="";
char resultbuffer[600]="";
char counterbuf[3];
int i=0,t=0,k=0;
//-----------------------------
	if(e=strchr(num1,'.'))
	{
	index = (int)(e-num1);
	}
	else
	index=strlen(num1);
shifting("<<",num1,index,NULL);
FinalIndx=index;
	if(e=strchr(num2,'.'))
	{
	index = (int)(e-num2);
	}
	else
	index=strlen(num2);
shifting("<<",num2,index,NULL);
FinalIndx+=index;
FinalIndx-=1;
//--------------------------------
strrev(num1);
strrev(num2);
strl=strlen(num1);
controlFNLRES=strlen(num2);
controlFNLRES-=1;
while(num1[i]!='\0')
{
Num1= num1[i]-'0';
memcpy(&nUm1[i],&Num1,4);
i++;
}
while(num2[t]!='\0')
{
Num2= num2[t]-'0';
memcpy(&nUm2[t],&Num2,4);
t++;
}
i=0;
B:
Num2=nUm2[k];
A:
	Num1=nUm1[i];
	Num1=Num1*Num2;
		if(result>9)
		{
		Num1+=cntr2;
		}
	result=Num1;
	itoa(Num1,counterbuf,10);
		if(cntr=strlen(counterbuf)>=2)
		{
			if(strl==i)
			{
			strrev(counterbuf);
			strcpy(num3+i,counterbuf);
			cntr2=atoi(counterbuf);
				if(k==0)
				{
				strcpy(resultbuffer,num3);
				}
				while(k!=0&&controlK<k)
				{
				strcat(num3,"0");
				controlK++;
				}
				if(k!=0)
				{
				BigDataPlus(num3,resultbuffer,resultbuffer);
				finalCounter++;
				controlK=0;
				memset(num3,0,strlen(num3));
				}
				if(finalCounter==controlFNLRES)
				{
				strcpy(num3,resultbuffer);
				result=0;
				shifting(">>",num3,FinalIndx,".");
				return;
				}
			k++;
			i=0;
			goto B;
			}
		strcpy(num3+i,counterbuf+1);
		counterbuf[1]='\0';
		cntr2=atoi(counterbuf);
		}
		else
		{
			if(strl==i)
			{
			strrev(counterbuf);
				if(counterbuf[0]!='0')
					strcpy(num3+i,counterbuf);
			cntr2=atoi(counterbuf);
			strrev(num3);
				if(k==0)
				{
				strcpy(resultbuffer,num3);
				}
				while(k!=0&&controlK<k)
				{
				strcat(num3,"0");
				controlK++;
				}
				if(k!=0)
				{
				BigDataPlus(num3,resultbuffer,resultbuffer);
				finalCounter++;
				controlK=0;
				memset(num3,0,strlen(num3));
				}
				if(finalCounter==controlFNLRES)
				{
				strcpy(num3,resultbuffer);
				shifting(">>",num3,FinalIndx,".");
				return;
				}
			k++;
			i=0;
			goto B;
			}
		strcpy(num3+i,counterbuf);
		cntr2=atoi(counterbuf);
		}
i++;
goto A;
}
