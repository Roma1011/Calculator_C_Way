void BinaryConvert(char x[500],char x2[200])
{
unsigned __int64 bin;
bin=_atoi64(x);
_ui64toa(bin,x2,2);
}
//----------------------------------------
void SepConvert(char x[500],char x2[200])
{
unsigned __int64 bin;
bin=_atoi64(x);
_ui64toa(bin,x2,7);
}
//---------------------------------------
void OctConvert(char x[500],char x2[200])
{
unsigned __int64 bin;
bin=_atoi64(x);
_ui64toa(bin,x2,8);
}
//--------------------------------------
void HexConvert(char x[500],char x2[200])
{
unsigned __int64 bin;
bin=_atoi64(x);
_ui64toa(bin,x2,16);
}
//--------------------------------------
//--------------------------------------