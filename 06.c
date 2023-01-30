//Program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,count=0;
    char str[50];
    printf("Enter a string to reverse it : ");
    gets(str);
    len=strlen(str);
    printf("\n\nString after reversing : ");
    for(i=len-1;i>=0;i--)
    {
        count++;
        if(str[i]==' ' || i==0)
        {
            if(i==0)
                printf(" ");
            for(int j=i+1;j<i+count+1;j++)
            {
                printf("%c",str[j-1]);
            }
            count=0;
        }
    }
    printf("\n\n");
    return 0;
}
