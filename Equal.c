void EqualFunc(char x[600])
{
char *e;
char buffer[500]="";
char buffer2[500]="";
__int64 num1,num2;
__int64 result;
int i=0,j=0,t=0,k=0;
int index,indexDeep,Key;
int pk=1,kl=0,xl=0;
int ThisPow,ThisFL=0,Flag=0;
int LevelFL=0,LevelFL2=0;
float num3,num4;
double PowRes;
//-------------------------------------------------------	
	if(e=strchr(x,'+'))
	{
	Key=1;
	index = (int)(e-x);
		if(e=strchr(x,'.'))
		{
		indexDeep = (int)(e-x);
			Flag=1;
		}
	}
	else if(e=strchr(x,'X'))
	{
	Key=3;
	index = (int)(e-x);
		if(e=strchr(x,'.'))
		{
		indexDeep = (int)(e-x);
			Flag=1;
		}
	}
	else if(e=strchr(x,'÷'))
	{
	Key=4;
	index = (int)(e-x);
		if(e=strchr(x,'.'))
		{
		indexDeep = (int)(e-x);
			Flag=1;
		}
	}
	else if(e=strchr(x+1,'-'))
	{
	Key=2;
	index = (int)(e-x);
		if(e=strchr(x,'.'))
		{
		indexDeep = (int)(e-x);
			Flag=1;
		}
	}
	else if(e=strchr(x,'^'))
	{
	Key=5;
	index = (int)(e-x);
	}
//-----------------------------------------------------
	if((strlen(x)>11) && (Key==1) && (Flag!=1))
	{
	static int i=0;
	int k=0;
		while(x[i]!='+')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(x[i]!='\0')
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	BigDataPlus(buffer,buffer2,x);
	return;
	}
	else if(strlen(x)>11&&Key==2&&Flag!=1)
	{
	static int i=0;
	int k=0;
		while(x[i]!='-')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(x[i]!='\0')
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	BigDataMinus(buffer,buffer2,x);
	return;
	}
	else if(strlen(x)>11&&Key==3&&Flag!=1)
	{
	static int i=0;
	int k=0;
		while(x[i]!='X')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(i<strlen(x))
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	BigDataMul(buffer,buffer2,x);
	return;
	}else if(strlen(x)>11&&Key==3&&Flag==1)
	{
	static int i=0;
	int k=0;
		while(x[i]!='X')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(i<strlen(x))
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	BigDataMulDC(buffer,buffer2,x);
	return;
	}
	else if((strlen(x)>11)&&(Key==1)&&(Flag==1))
	{
	static int i=0;
	int k=0;
		while(x[i]!='+')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(i<strlen(x))
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	FltDblPlus(buffer,buffer2,x);
	return;
	}
	else if((strlen(x)>11)&&(Key==2)&&(Flag==1))
	{
	static int i=0;
	int k=0;
		while(x[i]!='-')
		{
		memcpy(buffer+i,x+i,1);
		i++;
		}
		i++;
		while(i<strlen(x))
		{
		memcpy(buffer2+k,x+i,1);
		i++;
		k++;
		}
	i=0;
	DecSub(buffer,buffer2,x);
	return;
	}
//----------INDX----------------
	for(i;i<index;i++)
	{
	buffer[i]=x[i];
	}	
	for(++i;i<strlen(x);i++,j++)
	{
	buffer2[j]=x[i];
	}
//----------TRANSFER-----------
	if(strchr(buffer,'.'))
	{
	num3=atof(buffer);
	LevelFL=1;
	}
	if(strchr(buffer2,'.'))
	{
	num4=atof(buffer2);
	LevelFL2=1;
	}
	if((Key==4)&&(LevelFL2!=1))
	{
	num3=atof(buffer);
	num4=atof(buffer2);
	num3=num3/num4;
	sprintf(x,"%f",num3);
	e=strchr(x,'.');
	index = (int)(e-x);
		for(++index;index<strlen(x);index++)
		{
			if(x[index]!='0')
			{
			return;
			}
		}
	num3=0;
	num4=0;
	}
	if(LevelFL==0&&LevelFL2==0)
	{
	num1=atoi(buffer);
	num2=atoi(buffer2);
	}
	switch(Key)
	{
		case 1:
			if(LevelFL==LevelFL2 && LevelFL!=0)
			{
			num3=num3+num4;
				
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL2==0)
			{
			num2=atoi(buffer2);
			num3=num3+num2;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL==0)
			{
			num1=atoi(buffer);
			num4=num4+num1;
			ThisFL=2;
			}
			else
			{
			result=num1+num2;
			}
		break;
		case 2:
			if(LevelFL==LevelFL2 && LevelFL!=0)
			{
			num3=num3-num4;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL2==0)
			{
			num2=atoi(buffer2);
			num3=num3-num2;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL==0)
			{
			num1=atoi(buffer);
			num4=num1-num4;
			ThisFL=2;
			}
			else
			{
			result=num1-num2;
			}
		break;
		case 3:
			if(LevelFL==LevelFL2 && LevelFL!=0)
			{
			num3=num3*num4;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL2==0)
			{
			num2=atoi(buffer2);
			num3=num3*num2;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL==0)
			{
			num1=atoi(buffer);
			num4=num4*num1;
			ThisFL=2;
			}
			else
			{
			result=num1*num2;
			}
		break;
		case 4:
			if(LevelFL==LevelFL2 && LevelFL!=0)
			{
			num3=num3/num4;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL2==0)
			{
			num2=atoi(buffer2);
			num3=num3/num2;
			ThisFL=1;
			}
			else if(LevelFL!=LevelFL2&&LevelFL==0)
			{
			num1=atoi(buffer);
			num4=num1/num4;
			ThisFL=2;
			}
			else
			{
			result=num1/num2;
			}
		break;
		case 5:
		ThisPow=1;
		PowRes=pow(num1,1.0/num2); 
		break;
	}
i=0;
j=0;
memset(x,0,strlen(x));
memset(buffer,0,strlen(buffer));
memset(buffer2,0,strlen(buffer2));
num1=0;
num2=0;
if(ThisFL==1)
{
sprintf(x,"%f",num3);
e=strchr(x,'.');
index = (int)(e-x);
		for(++index;index<strlen(x);index++)
		{
			if(x[index]!='0')
			{
			return 0;
			}
		}
num1=atoi(x);
sprintf(x,"%d",num1);
}
else if(ThisFL==2)
{
sprintf(x,"%f",num4);
e=strchr(x,'.');
index = (int)(e-x);
		for(++index;index<strlen(x);index++)
		{
			if(x[index]!='0')
			{
			return 0;
			}
		}
num1=atoi(x);
sprintf(x,"%d",num1);
}
else if(ThisPow==1)
{
sprintf(x,"%0.8f",PowRes);
}
else if(result<=0)
{
sprintf(x,"%d",result);
}
else if(result>0)
{
A:
	for(i;result!=0;i++)
	{
	x[i]=result%10+48;
	result=result/10;
	pk=i;
	}
	for(k,i--;k<i;k++,i--)
	{
	t=x[i];
	x[i]=x[k];
	x[k]=t;
	}
	if(result==0)
	{
	return 0;
	}
goto A;
}
return 0;
}
