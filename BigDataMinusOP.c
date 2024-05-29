void BigDataMinus(char num1[40],char num2[40],char num3[500])
{
int strl=-1;
int Num1,Num2;
int i=0,t=0;
int NumBuffer;
int nUm1[500]={0},nUm2[500]={0};
int counter=0,cntr=0,cntr2;
char buf1[35]="",buf2[35]="",counterbuf[3];
strrev(num1);
strrev(num2);
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
if(i>t)
strl+=i;
else if(i==t)
strl+=i;
else
strl+=t;

i=0;
A:
	Num1=nUm1[i];
	Num2=nUm2[i];
		while(Num1<Num2)
		{
			nUm1[i+1]-=1;
			NumBuffer=1;
			NumBuffer*=10;
			Num1+=NumBuffer;
		}
	Num1=Num1-Num2;
		if(strl==i)
		{
			if(Num1==0)
			{
				goto B;
			}
		}
	itoa(Num1,counterbuf,10);
		if(cntr=strlen(counterbuf)>=2)
		{
			if(strl==i)
			{
			strrev(counterbuf);
			strcpy(num3+i,counterbuf);
			cntr2=atoi(counterbuf);
			strrev(num3);
			return;
			}
		strcpy(num3+i,counterbuf+1);
		counterbuf[1]='\0';
		cntr2=atoi(counterbuf);
		nUm1[i+1]-=cntr2;
		i++;
		}
		else
		{
			if(strl==i)
			{			
			strrev(counterbuf);
			strcpy(num3+i,counterbuf);
			cntr2=atoi(counterbuf);
B:
			strrev(num3);
			return;
			}
		strcpy(num3+i,counterbuf);
		cntr2=atoi(counterbuf);
		i++;
		}
goto A;
}