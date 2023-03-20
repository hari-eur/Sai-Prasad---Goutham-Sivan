//SUM OF POSITIVE SQUARE ELEMENTS IN AN ARRAY
#include<stdio.h>
#include<math.h>
int main(){
    int arr[]={1,2,8,7,-9};
    int total = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]>=0){
            total = total + pow(arr[i],2);
        }
    }
    printf("%d",total);
    return 0;
}