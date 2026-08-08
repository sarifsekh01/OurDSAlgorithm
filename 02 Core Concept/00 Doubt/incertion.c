#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value, key;
    
    // Input array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    // Traversal
    printf("\nArray elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    // Insertion
    printf("\nEnter position for insertion:");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;         //<--------------------------- ataer deuer karon bujalm !!!!!!!!!!!

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {                  //monehotche vul achee b'coz extra 1 ta number add korlam thoo  --> ( i<=n  or i<n+1 ) hote hobe ..???? 
        printf("%d ", arr[i]);
    }
}


/////ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
///clear n++ kno ?????????????????? bujtei parchilam naaa tokhon -- aber clear holoo je n++ kno ??😱😱