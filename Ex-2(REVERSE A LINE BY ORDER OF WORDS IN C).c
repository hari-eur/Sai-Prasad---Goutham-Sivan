//REVERSE A LINE BY ORDER OF WORDS IN C
#include<stdio.h>
#include<string.h>
int main(){
    char line[1000];
    char *revline[1000];
    printf("Enter the line to be reversed :\t");
    gets(line);
    int size,i=0;
    char *word = strtok(line," ");
    while(word!=NULL){
        revline[i] = word;
        word = strtok(NULL," ");
        i++;
    }
    for(size=0;revline[size]!='\0';size++);
    for(int j=size-1;j>=0;j--){
        printf("%s\t",revline[j]);
    }
    return 0;
}