// array
#include <stdio.h>
#include <math.h>

int main(){
    // array declear
    int array[101],n,i,j;

    printf("enter array size:\n ");
    scanf("%d",&n);

    printf("Eneter your %d element: \n",n);
   

    for (i=0; i<n ; i++){
        scanf("%d",&array[i]);
    }
    printf("your array is :\n");
    for (j=0; j<n;  j++){
        printf("%d\n",array[j]);
    }
}