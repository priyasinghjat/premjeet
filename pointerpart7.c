#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc (sizeof (int));
    *ptr=0;
    printf("%d",*ptr);
    free(ptr);
    printf("%d",*ptr);
    ptr=NULL;
    if(ptr==NULL)
    {
        printf("pointer");
    }
    else{
        printf("not pointer");
    }
}