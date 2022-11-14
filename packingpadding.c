#include<stdio.h>
#pragma pack(1)
struct student
{
    int a;
    char b;
};
void main()
{
    struct student s={23,'a'};
    printf("%d \n %c",s.a,s.b);
    printf("\n");
    printf("%d",sizeof(s));
}