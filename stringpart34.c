#include<stdio.h>
int main()
{ 
    int i;
    char name[20]="priya";
    printf("print string\t");
    for(i=0;name[i]<='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
    }
    printf("%s",name);
}