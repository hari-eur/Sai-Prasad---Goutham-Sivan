//SUM OF MINIMUM ABSOLUTE DIFFERENCE IN C
#include<stdio.h>
#include<math.h>
int main(){
    int arr[]={1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int median = size/2;
    int element = arr[median];
    int total=0;
    for(int i=0;i<size;i++){
        total = total + abs(arr[i]-element);
    }
    printf("%d",total);
    return 0;
}