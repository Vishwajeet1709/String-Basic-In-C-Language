//C program to sort a string array in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int len, i, j;
    printf("Enter a string : ");
    gets(str);
    printf("\n\n");
    len=strlen(str);
    for(j=65;j<=90;j++)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]==j || str[i]==j+32)
                printf("%c",str[i]);
        }
    }
    printf("\n\n");
    return 0;
}

