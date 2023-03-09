//REMOVE ALL CHARACTERS EXCEPT ALPHABET IN A STRING IN C
#include<stdio.h>
int main(){
    char word[100];
    scanf("%s",word);
    int size;
    for(size=0;word[size]!='\0';size++);
    for(int i=0;i<size;i++){
        if(((word[i]>='a')&&(word[i]<='z'))||((word[i]>='A')&&(word[i]<='Z'))){
            printf("%c",word[i]);
        }
    }
    return 0;
}