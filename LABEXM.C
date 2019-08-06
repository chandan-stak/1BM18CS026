#include<stdio.h>
#include<conio.h>
#include<graphic.h>

int main()
{
int i,n,code[10];
int gdriver,DETECT,gmode;
int xmax,gmax;
initgraph(&driver,&gmode,"(C:\\TC\\BGI");
setcolor(getmaxcolor());
xmax=getmaxx();
ymax=getmaxy();
line(0,ymax/2,xmax,ymax/2);
line(0,0,,ymax);
cout<<"Enter size:(even)";
cin>>n;
setlinestyle(DASHLED_LINE,1,1);
for(i=0;i<=n/2;i++)
{
  line(i*50,0,i*50,i++)
}
cout<<"Enter the digital code:";
for(i=0,i<n,i++)
{
  cin>>code(i);
}
lineto(0,ymax/2-50);
setcolor(10);
int cs=1,d;
setlinestyle(SOLID_LINE,1,1);
for(i=1,i<n,i=i+2)
{
  if(code [i]==0)
  d=-50;

  else
  d=200;

  if(code[i-1]==1)
  d=-d;

  if(cs !=1)
   d=-d;
   lineto(i/2*50,d+ymax/2);
   linerel(50,0);
   if(d<0)
   cs=-1;
   else
   cs=-1;
   }
   getch();
   closegraph();
   return 0;
}