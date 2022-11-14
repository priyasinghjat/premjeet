#include<stdio.h>
int main()
{
    int a=10,b=89;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d\n",a);  //it is store the value of a
    printf("%d\n",&a); //this is store the address of a
    printf("%d\n",p);  //this is also store the address of a
    printf("%d\n",*p);  //and this is also store the value of a
    printf("%d",&p);
    
}