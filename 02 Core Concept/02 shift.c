#include <stdio.h>
int main(){
    int i,n;
    printf("Number of element: ");
    scanf("%d",&n);
    int arr[n]={1, 2, 3, 4, 5};
    
    //1. Left shift by 1
    int temp = arr[0];
    for (i=0;i<5; i++){
        arr[i]=arr[i+1];
    }
    arr[4]=temp;

    for (i=0; i<5; i++)
        printf("%d ",arr[i]);
}
