void DrawItemBtn(LPARAM lParam)
{
SIZE tmpSize;
int i;
char DtaNums[10]="1234567890";
LPDRAWITEMSTRUCT lpds=(DRAWITEMSTRUCT*)lParam;
HWND *DataReservoir=(HWND*)calloc(20,sizeof(HWND));
//InvalidateRect(lpds->hwndItem,0,0);
DataReservoir[0]=NumButton1;DataReservoir[1]=NumButton2;DataReservoir[2]=NumButton3;DataReservoir[3]=NumButton4;
DataReservoir[4]=NumButton5;DataReservoir[5]=NumButton6;DataReservoir[6]=NumButton7;DataReservoir[7]=NumButton8;
DataReservoir[8]=NumButton9;DataReservoir[9]=NumButton0;
	for(i=0;i<10;i++)
	{
		if(lpds->hwndItem==DataReservoir[i])
		{
		SIZE size;
		char text[5];
		GetTextExtentPoint32(lpds->hDC,&DtaNums[i],strlen("1"),&size);
		SetTextColor(lpds->hDC,RGB(255,255,255));
		SetBkColor(lpds->hDC,RGB(0,0,0));
		if(i==9)
			ExtTextOut(lpds->hDC,(lpds->rcItem.left+27),(lpds->rcItem.top+12),ETO_OPAQUE|ETO_CLIPPED,&lpds->rcItem,&DtaNums[i],strlen("1"),NULL);
		else
			ExtTextOut(lpds->hDC,(lpds->rcItem.left+27),(lpds->rcItem.top+22),ETO_OPAQUE|ETO_CLIPPED,&lpds->rcItem,&DtaNums[i],strlen("1"),NULL);
		}
	}
DrawEdge(lpds->hDC,&lpds->rcItem
	,(lpds->itemState &ODS_SELECTED? EDGE_SUNKEN:EDGE_RAISED),BF_RECT);
free(DataReservoir);
return 0;
}