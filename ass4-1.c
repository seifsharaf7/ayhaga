#include <stdio.h>
 void edit (int *x)
{
    //int *p = &a;
   // int temp = *x;
     //*x = temp + 1;
     *x=*x+1;

}

void main ()
{
    int a ;
    int *p = &a;

    printf("enter the value of x : \n");
    scanf("%d",&a);
    printf(" the value of x before editing : %d" , a);
    edit(&a);

    //*p++;
    //*p = *p +1;
    printf(" \nthe value of x after editing : %d" , a);
}
