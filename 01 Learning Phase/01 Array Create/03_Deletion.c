#include <stdio.h>
int main(){

    //Input Array .......
    int array[100],n,i;
    printf("Eneter Array Size: ");
    scanf("%d",&n);
    printf("Enter your %d number:\n",n);
    for( i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
}