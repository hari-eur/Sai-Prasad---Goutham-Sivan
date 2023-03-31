//ARRAY TRAVERSAL USING POINTER IN C
#include<stdio.h>
int main(){
    int arr[]={4,8,54,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *pointer = arr;
    for(int i=0;i<size;i++){
        printf("%d\t",*(pointer+i));
    }
    return 0;
}