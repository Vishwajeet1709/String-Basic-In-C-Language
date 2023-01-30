//Program to count vowels in a string
#include<stdio.h>
int main()
{
    char str[50],ch;
    int i,j,VowelCout=0;

    printf("Enter a string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
            ch=tolower(str[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                VowelCout++;
    }
    printf("\nThere are %d vowels in the given string.\n\n",VowelCout);
    return 0;
}
