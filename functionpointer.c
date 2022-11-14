#include<stdio.h>
int fun();
void main()
{
    int i=10,j=5;
    fun(&i,j);
    printf("%d",i+j);
}
int fun(int *p,int m)
{
    m=m+9;
    *p=*p+m;
    return 0;

}