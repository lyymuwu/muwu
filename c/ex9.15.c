#include<stdio.h>
#include<stdlib.h>

char* copy(char* str);
int compare(char* str, char* fstr);
char* attend(char* str, char* fstr);

int main()
{
    char* str = (char*)malloc(sizeof(char));
    char* cstr = (char*)malloc(sizeof(char));
    printf("Please type two string.");
    scanf("%s", str);
    scanf("%s", cstr);
    char* new = attend(str, cstr);
    printf("copy over\n");
    printf("%s\n", new);
}

char* copy(char* str)
{
    return str;
}

int compare(char* str, char* fstr)
{
    int i = 0;
    int over = 1;

    for(i=0;str[i]&&over&&fstr[i];i++)
    {
        if(str[i]==fstr[i])
        {
            printf("letter %d of them is the same.\n", i+1);
        }else
        {
            over = 0;
            printf("they are not the same.");
        }
        
    }
    return 0;
}

char* attend(char* str, char* fstr)
{
    char* new = (char*)malloc(sizeof(char));
    int i = 0;
    int n = 0;
    
    for(i=0;str[i];i++)
    {
        new[i] = str[i];
    }

    for(n=0;fstr[n];n++)
    {
        new[i+n] = fstr[n];
    }
    return new;
}