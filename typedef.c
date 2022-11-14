#include<stdio.h>
typedef struct student
{
int roll;
char name[30];
}std;
void main()
{
    std s={101,"priya"};
    printf("%d\n%s",s.roll,s.name); 
}
