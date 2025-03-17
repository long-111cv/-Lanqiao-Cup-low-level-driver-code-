#include <Seg.h>

unsigned char seg_dula[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0xff,0xc1};
unsigned char seg_wela[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

void Seg_Disp(unsigned char wela,dula,point)
{
	P0 = 0xff;
	P2 = P2 & 0x1f | 0xe0;
	P2 &= 0x1f;

	P0 = seg_wela[wela];
	P2 = P2 & 0x1f | 0xc0;
	P2 &= 0x1f;
	
	P0 = seg_dula[dula];
	if(point)
		P0 &= 0x7f;
	P2 = P2 & 0x1f | 0xe0;
	P2 &= 0x1f;	
}
