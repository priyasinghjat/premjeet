#include<stdio.h>
struct student
{
    int rollno;
    float marks;
    char name[20];
};
void main()
{
    struct student s={102,98,"priya"};
    struct student *ptr=&s;
    printf("%d %f %s\n",(*ptr).rollno,(*ptr).marks,(*ptr).name);
    printf("%d %f %s",&s.rollno,&s.marks,&s.name);

}
