#include<stdio.h>
int main()
{
    int ch;
    printf("enter number");
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch== 'e')
    {
        printf("vowel");
    }
    else 
    {
        printf("consonant");
    }
    return 0;
}