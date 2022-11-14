#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int *ptr,n,i;
    printf("enter number");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("entered value");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("enter updated value");
    scanf("%d",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("print 1 address %d,and second address%d\n",ptr,ptr1);
    printf("enter digit");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr1+i));
    }
    free(ptr1);
}