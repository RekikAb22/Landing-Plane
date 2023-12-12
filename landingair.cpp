#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
 #include<fstream>
using namespace std;
int main(){
	int gd=DETECT,gm,x,y,i;
		ifstream in;
    initgraph(&gd,&gm,(char*)"C:\\Dev-Cpp\\lib");
   
   for(i=0;i<=340;i++)
{
	    in.open("lair1.txt");
   moveto(38+i,71+i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y+i);
	}//while
	in.close();
	
		    in.open("lair2.txt");
   moveto(83+i,97+i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y+i);
	}//while
	in.close();
	
			    in.open("lair3.txt");
   moveto(109+i,97+i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y+i);
	}//while
	in.close();
	
	moveto(82+i,101+i);
	lineto(51+i,101+i);
     lineto(49+i,100+i);
	 lineto(23+i,93+i);
	 lineto(21+i,93+i);	
	
	moveto(13+i,91+i);
	lineto(7+i,89+i);
     lineto(7+i,82+i);
	 lineto(18+i,77+i);
	 
	 moveto(80+i,65+i);
	lineto(61+i,18+i);
     lineto(58+i,12+i);
	 lineto(62+i,13+i);
	 lineto(65+i,14+i);	
	 lineto(65+i,16+i);
	 lineto(100+i,62+i);
	 
	  moveto(18+i,79+i);
	lineto(6+i,30+i);
     lineto(6+i,28+i);
	 lineto(11+i,28+i);
	 lineto(12+i,29+i);	
	 lineto(37+i,71+i);
	 lineto(37+i,72+i);
	 lineto(18+i,79+i);
	 
	 	 
	 moveto(13+i,80+i);
	lineto(7+i,64+i);
     lineto(7+i,62+i);
	 lineto(14+i,62+i);
	
	 	 
	 moveto(18+i,86+i);
	lineto(29+i,86+i);
     lineto(29+i,88+i);
	 lineto(11+i,101+i);
	 lineto(10+i,101+i);	
	 lineto(8+i,100+i);
	 lineto(5+i,99+i);
	 lineto(18+i,86+i);
	 settextstyle(8,0,1);
outtextxy(65+i,64+i,"Ethiopian");

	 	
	 
	 
	 
	
	delay(20);
	cleardevice();
	
	
	 line(5,475,610,475);
    line(10,465,50,465);
    line(70,465,110,465);
    line(130,465,170,465);
    line(190,465,230,465);
    line(250,465,290,465);
    line(310,465,350,465);
    line(370,465,410,465);
    line(430,465,470,465);
    line(490,465,530,465);
    line(550,465,590,465);
	
	
}
getch();
}
