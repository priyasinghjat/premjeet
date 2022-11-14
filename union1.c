#include<stdio.h>
#include<string.h>
union student 
{
    int roll;
    float marks;
    char name[20];

};
int main()
{
    union student j;
    j.roll=101;
    j.marks=68;
    strcpy(j.name,"priya");
    printf("%d\n %f\n %s\n",j.roll,j.marks,j.name);
}
