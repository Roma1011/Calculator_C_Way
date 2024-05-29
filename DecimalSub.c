void DecSub(char num1[50],char num2[50],char num3[500])
{
int nUm1[500]={0};
int nUm2[500]={0};
int Num1,Num2;
int Flag1=0,Flag2=0,Flag3=0,Flag4=0;
int sign1=0,sign2=0,sign3=0,sign4=0,sign5=0,sign6=0;
int NumBuffer;
int counter=0;
int cntr=0;
int cntr2;
int SG1=9999,SG2=9999;
int strl=-1;
int index;
int i=0,t=0,j=0;
char buf1[45]="";
char buf2[45]="";
char bufbig[500]="";
char counterbuf[3];
char Reservoir[200]="";
char *e;
char *l;
int J=0;
int index2,index3;
//----------------------------------------------
if(Flag1=strstr(num1,".")==NULL)
	{
		Flag1=0;
		Flag1++;
			if(e=strchr(num2,'.'))
			{
				index = (int)(e-num2);
				index3=index;
				BigDataMinus(num1,"1",num1);
				for(i=0,++index;num2[index]!='\0';index++,i++)
				{
					if(i==0)
						strcat(num1,".");
				strcat(num1,"0");
				}
			l=strchr(num1,'.');
			index2=(int)(l-num1);
			Flag1=0;
			}
	}
	if(Flag2=strstr(num2,".")==NULL)
	{
		Flag2=0;
		Flag2++;
	}
//-----------------------------------------------------------
	if(Flag1==1)
	{
		for(i=0;num1[i]!='\0';i++)
		{
		buf1[i]=num1[i];
		}
	}
	if(Flag2==1)
	{
		for(i=0;num2[i]!='\0';i++)
		{
		buf2[i]=num2[i];
		}
	}
//------------------------------------------------------------
	if(Flag1!=1)
	{
		for(i=0;num1[i]!='.';i++)
		{
		buf1[i]=num1[i];
		sign1=i;
		sign3=i;
		sign6=i;
		}
		buf1[i]='\0';
		sign6++;
		sign3++;
		for(i=0,++sign3;num1[sign3]!='\0';sign3++,i++)
		{
		Reservoir[i]=num1[sign3];
		}
	}
	if(Flag2!=1)
	{
		for(i=0;num2[i]!='.';i++)
		{
		buf2[i]=num2[i];
		sign2=i;
		sign4=i;
		sign5=i;
		}
		buf2[i]='\0';
		sign5++;
		sign4++;
		for(i=0,++sign4;num2[sign4]!='\0';sign4++,i++)
		{
		Reservoir[i]=num2[sign4];
		}
	}
//-----------------------------------------------------------------------
N:
strrev(buf1);
strrev(buf2);
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
	if(i>t)
	strl+=i;
	else if(i==t)
	strl+=i;
	else
	strl+=t;
i=0;
//--------------------------------------------------------------------------------
Num1=0;
Num2=0;
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
				if(j==0)
				{
				strrev(counterbuf);
				strcat(num3,counterbuf);
				cntr2=atoi(counterbuf);
				memset(buf2,0,strlen(buf2));
				memset(buf1,0,strlen(buf1));
					if(Flag1==1)
					{
					strcat(num3,".");
					strcat(num3,Reservoir);
					return;
					}
					if(Flag2==1)
					{
					strcat(num3,".");
					strcat(num3,Reservoir);
					return;
					}
					if(Flag1!=1)
					{
						for(i=0,++sign1;num1[sign1]!='\0';sign1++,i++)
						{
						buf1[i]=num1[sign1];
						}
					SG1=i;
					}
					if(Flag2!=1)
					{
						for(i=0,++sign2;num2[sign2]!='\0';sign2++,i++)
						{
						buf2[i]=num2[sign2];
						}
					}
					if(strlen(buf2)<strlen(buf1))
					{
						while(strlen(buf2)<strlen(buf1))
							strcat(buf2,"0");
					}
					else
					{
						while(strlen(buf1)<strlen(buf2))
							strcat(buf1,"0");
					SG1=strlen(buf1);
					}
				strrev(num3);
				strcpy(bufbig,num3);
				strcat(bufbig,".");
				}
			j++;
				if(j==2)
				{
				int i=strlen(num3);
				//num3[i-1]='\0';
				strrev(num3);
				strcat(bufbig,num3);
				strcpy(num3,bufbig);
				i=strlen(num3);
					if(num3[i-1]=='.')
						num3[i-1]='\0';
				return;
				}
			memset(counterbuf,0,strlen(counterbuf));
			goto N;
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
			if(j==0)
			{
			strrev(counterbuf);
			strcat(num3,counterbuf);
			cntr2=atoi(counterbuf);
			B:
			memset(buf2,0,strlen(buf2));
			memset(buf1,0,strlen(buf1));
				if(Flag1==1)
				{
				strrev(num3);
				strcat(num3,".");
				strcat(num3,Reservoir);
				return;
				}
				if(Flag2==1)
				{
				strrev(num3);
				strcat(num3,".");
				strcat(num3,Reservoir);
				return;
				}
				if(Flag1!=1)
				{
				sign1++;
					for(i=0,++sign1;num1[sign1]!='\0';sign1++,i++)
					{
					buf1[i]=num1[sign1];
					}
				SG1=i;
				}
				if(Flag2!=1)
				{
				sign2++;
					for(i=0,++sign2;num2[sign2]!='\0';sign2++,i++)
					{
					buf2[i]=num2[sign2];
					}
					buf2[i]='\0';
				}
				if(strlen(buf2)<strlen(buf1))
				{
					while(strlen(buf2)<strlen(buf1))
						strcat(buf2,"0");
				}
				else
				{
					while(strlen(buf1)<strlen(buf2))
						strcat(buf1,"0");
				SG1=strlen(buf1);
				}
			strrev(num3);
			strcpy(bufbig,num3);
			strcat(bufbig,".");
			}
			j++;
				if(j==2)
				{
				int i=strlen(num3);

				//	num3[i-1]='\0';
				strrev(num3);
				strcat(bufbig,num3);
				strcpy(num3,bufbig);
				i=strlen(num3);
					if(num3[i-1]=='.')
						num3[i-1]='\0';
				return;
				}
			memset(counterbuf,0,strlen(counterbuf));
			goto N;
			}
			if(i>=SG1)
			{
			strrev(num3);
			strcat(bufbig,num3);
			strcpy(num3,bufbig);
				return;
			}
		strcpy(num3+i,counterbuf);
		cntr2=atoi(counterbuf);
		i++;
		}
goto A;
}