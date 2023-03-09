//REMOVE VOWEL FROM A GIVEN STRING
#include<stdio.h>
int main(){
    char word[100];
    char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    int len = sizeof(vowel)/sizeof(vowel[0]);
    scanf("%s",word);
    int size;
    for(size=0;word[size]!='\0';size++);
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<len;j++){
            if(word[i]==vowel[j]){
                flag=1;
            }
        }
        if(flag==0){
            printf("%c",word[i]);
        }
    }
    return 0;
}