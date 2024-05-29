void BigDataPlus(char num1[900],char num2[900],char num3[900])
{
	int strl=-1;
	int Num1,Num2;
	int i=0,t=0;
	int counter=0,cntr=0,cntr2;
	int nUm1[500]={0},nUm2[500]={0};
	char buf1[50]="",buf2[50]="",counterbuf[3];
		strrev(num1);
		strrev(num2);
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
	A:
		Num1=nUm1[i];
		Num2=nUm2[i];
		Num1=Num1+Num2;
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
			nUm1[i+1]+=cntr2;
			i++;
			}
			else
			{
				if(strl==i)
				{
				strrev(counterbuf);
				strcpy(num3+i,counterbuf);
				cntr2=atoi(counterbuf);
				strrev(num3);
				return;
				}
			strcpy(num3+i,counterbuf);
			cntr2=atoi(counterbuf);
			i++;
			}
	goto A;
	}