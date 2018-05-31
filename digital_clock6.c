#include<graphics.h>
#include<stdio.h>
#include<time.h>

void main()
{
       int gd=DETECT,gm,i;
       initgraph(&gd ,&gm,"C:\\TURBOC3\\BGI");

       time_t rtime;
       struct tm *currentTime;
       char a[100];

       while(1)
         {
             
               for(i=0;i<7;i++)
                {
                     line(130+i,100,130+i,200);   
                     line(130,200-i,500,200-i);
                     line(500-i,200,500-i,100);
                     line(130,100+i,500,100+i);
    
                }
                     rtime=time(NULL);
                     currentTime=localtime(&rtime); 
                     strftime(a,100, "I:%M:%S",currentTime);
                     outtextxy(230,150,a);

                     strftime(a,100,"%p",currentTime);
                     outtextxy(300,150,a);
  
 
                     delay(1000);
                     cleardevice();
           }
  }


