#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    float m,j,*ptr1;
    printf("int value");
    scanf("%d%f",&n,&m);
    ptr=(int*)malloc(n*sizeof(int));
    ptr1=(float*)malloc(m*sizeof(float));
    printf("enter the value");
    for( i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for( j=0;j<m;j++)
    {
        scanf("%f",(ptr1+j));
    }
    printf("entered value");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    printf("entered second value");
    for( j=0;j<m;j++)
    {
        printf("%f",*(ptr1+j));
    }
    free(ptr);
    free(ptr1);
}