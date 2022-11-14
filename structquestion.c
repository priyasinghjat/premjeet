#include<stdio.h>
#pragma pack(1)
struct question
{
 int a;
 float b;
 int c;

};
void main()
{
    struct question q={.a=1,.b=2,.c=3};
    printf("%d %f %d",q.a,q.b,q.c);
    printf("%d",sizeof(q));

}
