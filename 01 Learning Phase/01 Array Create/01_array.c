#include <stdio.h>

int main()
{
    // Method 01

/*
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

    // Operation(Sum, Search, Sort, max, insertion, Deletion, Update, etc..)


    // 3. Displaying the Element
    printf("Array Elements are : ");
    for(i = 0; i < n; i++ )
    {
        printf("%d",array[i]);
    }

*/

    
// Method 02


    int n; // arr[n]; <-- ami ata vul korchilam je agai array declear kore ditchilam n define na kore 😂🤣
    printf("Enter Your array size: ");
    scanf("%d",&n);

    int  arr[n], i;  // <-- correction here

    printf("Enter yout %d Number \n",n);
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //Operation(Sum, Search, Sort, max, insertion, Deletion, Update, etc..)

    printf("Your Arry Elements are: ");
    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }





}




/*
// array 

array is a variable who carray sametype data and porpor data store kore & fix datastore ..

keep it mind   --  array jokhon declear korbo tokhon e jano size o declear kora hoi !  ami amon ta korte parbo na je declear korchi r size mension korchi na ,like n janina koto, but array[n] likhchi <--- ata somvov e na --- KNO????-->b'coz Array declear er somoi e array nije ter size(memory) fix kore naiii  tai .....

index--> 0 to n -1 / elements --> 1 to n ,     look like ---> a[8]--index->0 to 7, 
a[]={1.2,3,5}
asses: a[2]=?, a[0]=? 
*/