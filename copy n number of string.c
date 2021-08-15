#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], copy_str[100];
    char *pstr, *pcopy_str;
    int i=0,n;
    pstr = str;
    pcopy_str = copy_str;
    printf("\n Enter a String: ");
    gets(str);
    printf("\n Enter the number of characters to be copied (from the end): ");
    scanf("%d",&n);
    pstr = pstr + strlen(str) - n;
    while(*pstr != '\0')
    {
        *pcopy_str = *pstr;
        pstr++; pcopy_str++;
    }
    *pcopy_str = '\0';
    printf("\n The copied text is : ");
    puts(copy_str);
}
