//REMOVE LEADING AND TAILING WHITE SPACES ABD PRINT A STRING
#include<stdio.h>
int main(){
    char word[100];
    char newword[100];
    int count=0;
    printf("Enter the string:\t");
    scanf("%s",word);
    int size;
    char ch=' ';
    for(size=0;word[size]!='\0';size++);
    for(int i=0;i<size;i++){
        if(word[i]!=ch){
            newword[count] = word[i];
            count++;
        }
    }
    printf("%s",newword);
    return 0;
}