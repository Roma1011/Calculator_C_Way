void BigFactorial(char num1[500],char num3[1000])
{
int counter=0;
int cntr=0;
int cntr2=0;
int strl=0;
int counter2=2;
int FinalCounter=3;
int StopHere=0;
char buf1[35]="";
char buf2[35]="";
char resultbuffer[1000]="";
char counterbuf[5];
char num2[500]="";
int nUm1[500]={0};
int nUm2[500]={0};
int Num1;
int Num2;
int controlK=0;
int controlFNLRES=0;
int finalCounter=0;
static int result=0;
int i=0,t=0,k=0;
StopHere=atoi(num1);
strcpy(num2,"1");
strcpy(num1,"2");
C:
strrev(num1);
strrev(num2);
strl=strlen(num1);
controlFNLRES=strlen(num2);
controlFNLRES-=1;
//strl+=1;
//controlFNLRES=strl;
while(num1[i]!='\0')
{
memcpy(buf1,num1+i,1);
Num1=atoi(buf1);
memcpy(&nUm1[i],&Num1,4);
i++;
}
while(num2[t]!='\0')
{
memcpy(buf1,num2+t,1);
Num2=atoi(buf1);
memcpy(&nUm2[t],&Num2,4);
t++;
}
t=0;
i=0;
cntr2=0;
result=0;
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
			//result+=cntr2;
			//strrev(num3);
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
			//	strcpy(resultbuffer,num3);
				}
				if(finalCounter==controlFNLRES)
				{
				int J=0;
				char x[20]="";
				char x2[20]="";
				char x3[20]="";
				counter2++;
				itoa(counter2,x,10);
				strcpy(num3,resultbuffer);
				while(J<strlen(x))
				{	
					memcpy(num2+J,x+J,1);
					J++;
				}
				strcpy(num1,num3);
				k=0;
				i=0;
				finalCounter=0;
				controlK=0;
				memset(resultbuffer,0,strlen(resultbuffer));
				memset(counterbuf,0,strlen(counterbuf));
					if(FinalCounter>StopHere)
					{	
						memset(num1,0,strlen(num1));
						result=0;
						return;
					}
				goto C;
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
			//result+=cntr2;
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
			//	strrev(resultbuffer);
			//	strcpy(resultbuffer,num3);
				}
				if(finalCounter==controlFNLRES)
				{
				int J=0;
				char x[20]="";
				char x2[20]="";
				char x3[20]="";
				counter2++;
				itoa(counter2,x,10);
				strcpy(num3,resultbuffer);
				while(J<strlen(x))
				{	
					memcpy(num2+J,x+J,1);
					J++;
				}
				strcpy(num1,num3);
				k=0;
				i=0;
				finalCounter=0;
				controlK=0;
				memset(resultbuffer,0,strlen(resultbuffer));
				memset(counterbuf,0,strlen(counterbuf));
					if(FinalCounter>StopHere)
					{
						result=0;
						return;
					}
				FinalCounter++;
				goto C;
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