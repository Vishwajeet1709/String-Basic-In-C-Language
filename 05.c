//Write a program to convert a string into lower case
#include<stdio.h>
int main()
{
    char str[50],ch;
    printf("Enter a string : ");
    gets(str);
    printf("\nString in Lower case : ");
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]<91 && str[i]>64)
            printf("%c",str[i]+32);
        else
            printf("%c",str[i]);
    }
    printf("\n\n");
    return 0;
}

