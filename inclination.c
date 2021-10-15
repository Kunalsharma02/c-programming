#include <stdio.h>
#include<math.h>

int main()
{
 int xp,yp,xq,yq,m,A;
 printf("Enter the vslue of x1");
 scanf("%d",&xp);
 printf("Enter the value of x2");
 scanf("%d",&xq);
 printf("Enter the value of y1");
 scanf("%d",&yp);
 printf("Enter the value of y2");
 scanf("%d",&yq);
 m=(yq-yp)/(xq-xp);
 A=atan(m)*(180/3.14);
 printf("The slope line is ");
 printf("%d\n",m);
 printf("The angle of inclination is ");
 printf("%d",A);
 return 0;
}

