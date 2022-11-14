#include<stdio.h>
#include<string.h>
union student
{
    int roll;
    float marks;
    char name[20];

};
void main()
{
    union student s={101,65,"priya"};
    printf("%d\n %f\n %s\n",s.roll,s.marks,s.name);

}