//Program to calculate all the alphabets, numbers and special characters present in a paragraph
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int special_symbols=0,alphabets=0,numbers=0;
    printf("Enter a paragraph :: ");
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123)
        {
            alphabets++;
        }
        else if(str[i]>47 && str[i]<58)
        {
            numbers++;
        }
        else if(str[i]!=' ')
        {
            special_symbols++;
        }
    }

    printf("\n\nThere are total of %d Alphabets, %d Numeric keys, and %d Special characters.\n\n ",alphabets,numbers,special_symbols);
    return 0;
}
