#include<stdio.h>
#include<assert.h>
#include<stdlib.h>//此程序被注释掉了一部分
#include<string.h>

struct Person {
    char* name;
    int age;
    int height;
    int weight;
};

struct Person *Person_creat(char* name, int age, int height, int weight)   //函数
{
    struct Person *who = malloc(sizeof(struct Person)); //malloc 分配一定的内存
    // assert(who != NULL);// 检测malloc是否成功。

    who->name = name;//strdup(name);    
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)  //函数
{
    // assert(who != NULL);

    // free(who->name);
    free(who);
}

void Person_print(struct Person *who)  //函数
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char* argv[])
{
    //make two people structures
    struct Person *joe = Person_creat("Joe Alex", 32, 64, 140);

    struct Person *frank = Person_creat("Frank Black", 20, 72, 180);

    // print them out and where they are in memory.
    printf("Joe is at memory location %p:\n",joe);
    Person_print(joe);
    
    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    // make every one age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);
    
    //destory them both so we can clean up
    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}