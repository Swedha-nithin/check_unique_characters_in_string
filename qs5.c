#include<stdio.h>

int unique_character(char *str);

int main()
{
    int res;
    char str[100];
    printf("Enter the string\n");
    scanf("%s", str);
    res = unique_character(str);
    if(res == 1)
        printf("true\n");
    else
        printf("false\n");
    return 0;    
}

int unique_character(char *str)
{
    for(int i=0; str[i] != 0; i++)
    {
        for(int j=i+1; str[j] != 0; j++)
        {
            if(str[i] == str[j])
                return 0;
        }
    }
    return 1;
}
