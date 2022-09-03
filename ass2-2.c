#include <stdio.h>

void main()
{

    int a ,c ;
    int b = 0 ;

    printf("enter your number ");

    scanf("%d",&a);
    c=a;

    while(a!=0)
    {
       b=((a%10)*(a%10)*(a%10)) + b ;

      a= a/10;
    }
if(b==c)
{

    printf("\n Armstrong Number");
}
else
{
    printf("\n not Armstrong Number");
}
}
//tehrherhdhd
