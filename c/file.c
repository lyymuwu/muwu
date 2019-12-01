#include<stdio.h>

int main(int argc, char* argv[])
{
    FILE* file = NULL;
    char* filename = argv[1];
    file = fopen(filename, "w");
    char *s = "lyyy";
    fprintf(file,"%d %s",32,s);
    // fwrite(s,sizeof(char),5,file);
    printf("over\n");
}