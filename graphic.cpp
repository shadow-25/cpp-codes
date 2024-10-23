
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main(int argc, char const *argv[])
{
    int gd=DETECT,gm,i,x,y,
    initgraph(&gd,&gm,"");
    x=319;
    y239;
    for(i=0; i<+90; i+=5)
    {
      circle(319,219-i,20+i)  
      circle(319,259+i,20+i)  
      circle(299-i,239,20+i)  
      circle(339+i,239,20+i)
      delay(50);  
    }
    getch();
    closegraph()
    return 0;
}
