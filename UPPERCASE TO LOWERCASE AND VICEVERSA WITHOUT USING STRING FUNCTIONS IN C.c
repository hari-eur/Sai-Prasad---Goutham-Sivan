//LOWER TO UPPER AND UPPER TO LOWER WITHOUT USING STRING FUNCTIONS
#include<stdio.h>
int main(){
    char line[100];
    gets(line);
    int size;
    for(size=0;line[size]!='\0';size++);
    for(int i=0;i<size;i++){
        //convert all characters to uppercase
        if((line[i]>='a')&&(line[i])<='z'){
            line[i] = line[i] -32;
        }
    }
    printf("%s\n",line);
    for(int i=0;i<size;i++){
        //convert all characters to lowercase
        if((line[i]>='A')&&(line[i])<='Z'){
            line[i] = line[i] +32;
        }
    }
    printf("%s",line);
    return 0;
}