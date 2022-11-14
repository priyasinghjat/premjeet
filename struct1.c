#include<stdio.h>
struct student
{
    int roll;
    float marks;
    char name[20];
    
};
void main()
{
struct student s1;
struct student s2;
scanf("%d %f %s",&s1.roll,&s1.marks,s1.name);
printf("%d %f %s",s1.roll,s1.marks,s1.name);
}
