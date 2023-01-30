//Program in C to Find the Frequency of Characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, j,len,freq=0;
    printf("\n Enter a string/ paragraph  : ");
    gets(str);
    len=strlen(str);
    for(i=65;i<=90;i++)
    {
        for(j=0;j<len;j++)
        {
            if(str[j]==i+32 || str[j]==i)
            {
                freq++;
            }
        }
        if(freq>0)
        {
            printf("\n Character %c :: occurred %d times.",i,freq);
        }
        freq=0;
    }
return 0;
}
