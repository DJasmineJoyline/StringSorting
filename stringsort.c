#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j;
    printf("Enter the input string\n");
    scanf("%s",str);
    int l=strlen(str)-1;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        if(str[j]>str[j+1])
        {
            char t=str[j];
            str[j]=str[j+1];
            str[j+1]=t;
        }
    }
    printf("The output string is %s",str);
	
	
	
	return 0;
}
