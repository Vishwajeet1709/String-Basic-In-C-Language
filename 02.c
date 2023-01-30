//Program to count the occurrence of a given character in the string
#include<stdio.h>
int main()
{
    char ch,str[50];
    int count=0,i;
    printf("Enter a string : ");
    gets(str);
    printf("\nEnter a character : ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("\nIn this given string '%c' has occurred %d times.\n",ch,count);
}
