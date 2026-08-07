#include <stdio.h>
int main (){
    int array[100],n,i,j,min,temp ;

    printf("Enter total Element: ");
    scanf("%d",&n);

    printf("Enter Your %d element: \n",n);
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }


    // Algorithm of Selection Sort
    for (i=0; i<n-1; i++){
        min = i ;

        for (j=1+i; j<n; j++){
            if (array[j] < array[min] ){
                min = j;
            }
        }
        temp = array[i];
        array[i]=array[min];
        array[min]=temp;
    }





    printf("Your Sorted Array is: ");
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
    }
}