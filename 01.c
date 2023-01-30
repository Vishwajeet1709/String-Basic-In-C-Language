//Write a program to calculate the length of string
#include<stdio.h>
int main()
{
    char a[50];
    printf("\nEnter a string : ");
    gets(a);

    for(int i=0;i<50;i++)
    {
        if(a[i]=='\0')
        {
            printf("\nthis string has %d characters.\n",i);
            break;
        }
    }
    return 0;
}
