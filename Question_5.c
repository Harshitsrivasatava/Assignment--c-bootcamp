#include <stdio.h>
int stringlength(char *s,int i)
{
    if(s[i]=='\0')
     return i;
    stringlength(s,++i);

}
int main()
{
    char s[1000];
    int length;

    printf("Enter any string:\n ");
    gets(s);
    length=stringlength(s,0);
    printf("Length of '%s'= %d",s,length);

    return 0;
}


