/*1. WAP to remove duplicate characters in a string and replace it with number. Like 
abahdsfkh will result in 1b2hdsfkh. Using structure*/

#include <stdio.h>
void main()
{
    struct string{
        char str[30];
    }a;
    gets(a.str);
    int i=0;
    char c,count='1';
    for(i=0;a.str[i]!='\0';i++)
    {
        for(int j=i+1;a.str[j]!='\0';j++)
        {
            if(a.str[j]==a.str[i])
            {
                c=a.str[i];
                a.str[i]=count++;
                a.str[j]=count++;
                for(int z=j+1;a.str[z]!='\0';z++)
                {
                    if(a.str[z]==c)
                    a.str[z]=count++;
                }
            }
        }
    }
    for(i=0;a.str[i]!='\0';i++)
    printf("%c",a.str[i]);
}