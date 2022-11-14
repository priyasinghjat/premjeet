#include<stdio.h>
struct student
{
    int rollno;
    float marks;
    char name[20];
}s={103};
void main()
{
    struct student s1={101,65,"priya"};
    struct student s2;
    s2=s1;
    printf("info of s1 student\n");
    printf("%d %f %s",s1.rollno,s1.marks,s1.name);
    printf("\n");
    printf("info of s2 student\n");
    printf("%d %f %s",s2.rollno,s2.marks,s2.name);
    printf("\n");
    printf("info of s\n");
    printf("%d %f %s",s.rollno,s.marks,s.name);
}
