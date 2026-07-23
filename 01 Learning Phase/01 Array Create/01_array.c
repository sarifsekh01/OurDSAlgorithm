#include <stdio.h>

int main()
{
    // 1. Declare a fixed-size array
    int array[101], n, i ;



    // 2. Loop to accept user input
    printf("Enter number of element: ");
    scanf("%d", &n);

    printf("Enter %d elements : \n",n );
    for( i=0 ; i < n ; i++ )
    {
        scanf("%d", &array[i]);
    }



    // 3. Displaying the Element
    printf("Array Elements are : ");
    for(i = 0; i < n; i++ )
    {
        printf("%d",array[i]);
    }

}
