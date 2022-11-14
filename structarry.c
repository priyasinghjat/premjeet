#include<stdio.h>
struct student
{
    int rollno;
    float marks;
    char name[20];
};
void main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
      scanf("%d %f %s",&s[i].rollno,&s[i].marks,s[i].name);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d %f %s\n",s[i].rollno,s[i].marks,s[i].name);
    }
   
}
