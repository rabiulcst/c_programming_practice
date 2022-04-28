#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
    char txt[MAX],ch;
    int c_vowels=0,c_constants=0,c_space=0,c_digits=0,c_special_ch=0,i;

    printf("Enter a text : ");
    gets(txt);

    for(i=0; i<MAX; i++)
    {
        ch = txt[i];
        if((ch>='a' && ch>='z') || (ch>='A' && ch>='Z')){
            if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
               c_vowels++;
            else
                c_constants++;
        }
        else if(ch>='0' && ch<='9')
            c_digits++;
        else if(ch==' ')
            c_space++;

        else if((ch>=32 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=97) || (ch>=123 && ch>=126))
                c_special_ch++;
    }
    printf("Number of vowels     = %d\n",c_vowels);
    printf("Number of constants  = %d\n",c_constants);
    printf("Number of digits     = %d\n",c_digits);
    printf("Number of spaces     = %d\n",c_space);
    printf("Number of special_ch = %d\n",c_special_ch);
}


