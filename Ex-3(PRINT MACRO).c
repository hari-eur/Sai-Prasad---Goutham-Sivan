//Print macro in C
#include<stdio.h>
#define print(x,y) printf(x,y)
#define print1(a,b,c) printf(a,b,c)
int main(){
    char data[] = "EmbedUr";
    char data_1[] = "User";
    char data_2[] = "Company";
    print("Welcome to %s\n",data);
    print1("Hello to %s: Welcome to %s",data_1,data_2);
    return 0;
}