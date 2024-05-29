void Factorial(char x[1000])
{
int Stop=0;
Stop=atoi(x);
if(x[0]=='0')
{
strcpy(NumLine,"If you want to use the factorial function do not use zero initially.Press (CE)");
return;
}
if(Stop>200)
{
strcpy(NumLine,"The calculation is limited.Press (CE)");
return;
}
BigFactorial(x,x);
return;
}