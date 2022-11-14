#include<stdio.h>
union student
{
    int a;
    float b;

};
void main()
{
    union student s;
    s.a=1;
    s.b=7;
    printf("%d\n %f\n ",s.a,s.b);
}