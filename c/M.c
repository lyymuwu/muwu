#include<stdio.h>


int main(int argc, char* argv[])
{
    // char *str = "good";
    // int s[]= {1,321,54,6,8,54,32,1,2};
    // char *sss[3] = {"dkfjla","sldkfjsl", "jfk"};
    // int *st = s;

    // printf("%s\n",*(sss+1));///////////////////
    // printf("%s\n",str);

    // char *f[]= {"slk","kdls","jok"};
    // //char **f = {"slk","kdk","ikj"};
    // printf("%s\n", *f+1);

    int n[][5] = {{123,56,876,2222,1564},
                  {},
                  {}
                };
    int *p1 = &n[0][0];
    int *p2 = &n[1][0];
    printf("%p\n%p",p1,p2);



    return 0;
}

