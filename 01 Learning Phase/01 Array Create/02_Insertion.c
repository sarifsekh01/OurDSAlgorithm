#include <stdio.h>
int main(){

    //Input Array .......
    int array[100],n,i;

    printf("Eneter Array Size: \n");
    scanf("%d",&n);

    printf("Enter your %d number",n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    //Operation(Sum, Search, Sort, max, insertion, Deletion, Update, etc..)





    //Displaying Array........
    printf("Array Elements are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d",array[i]);
    }
}