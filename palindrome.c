#include<math.h>
#include<stdio.h>

int main()
{
 int a,s,r=0,t,m,n=0,y=1;
 scanf("%d",&a);
 t=a;
 s=t;
 while(a>0)
 {
   a=a%10;
   r++;
 }
 while(t>0)
 {
   m=t%10;
   while(r!=0)
   {
     y=y*m;
     r--;
   }
   n=n+y;
   t=t/10;
 }
 if(n==s)
   printf("it is a amstrong");
 else
   printf("it is not a amstrong");
return 0;
}
