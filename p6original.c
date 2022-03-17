#include <stdio.h>
#include <string.h>

void input_string(char *string, char *sub_string)
{
    printf("Enter a string:\n");
    scanf("%s",string);
    printf("Enter the sub-string:\n");
    scanf("%s",sub_string);
}

int index_of_substring(char *string, char *sub_string)
{
    char *c;
    c= strstr(string,sub_string);
    int a1,a2,a3;
    a1 = strlen(string);
    a2= strlen(c);
    a3= a1-a2;
    return a3;
    
}
void output(char *string , char *sub_string, int g)
{
    if(g>0)
    {
     printf("index of %s in the given %s is : %d",sub_string,string,g);  
    }
}
int main()
{
    char string[25],sub_string[25];
    input_string(string,sub_string);
    int g=index_of_substring(string,sub_string);
    output(string,sub_string,g);
    return 0;
}