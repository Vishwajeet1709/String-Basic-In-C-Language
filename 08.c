//program in C to copy one string to another string
#include<stdio.h>
int main()
{
    int i;
    char str1[50],str2[50];
    printf("Enter a string in str1[] :");
    gets(str1);
    int len=strlen(str1);
    printf("\n\nString after coping it to str2[] : ");
    for(i=0;i<len;i++)
    {
        str2[i]=str1[i];
        printf("%c",str2[i]);
    }
    printf("\n\n");
    return 0;
}
