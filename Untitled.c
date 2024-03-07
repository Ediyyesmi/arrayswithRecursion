#include <stdio.h>

int topla(int dizi[], int n){
    if(n == 0){
        return 0;
    }else{
        return dizi[n-1] + topla(dizi, n-1); // Recursive call to sum elements
    }
}

int main(){
    int i, size, sum = 0;
    int dizi[10];

    printf("Enter size of array (max 10): ");
    scanf("%d", &size);
    
    if (size > 10 || size <= 0) {
        printf("Invalid array size. Please enter a size between 1 and 10.\n");
        return 1;
    }

    printf("Enter array elements: ");
    for(i = 0; i < size; i++){
        scanf("%d", &dizi[i]);
    }
    
    sum = topla(dizi, size); // Call the recursive function to sum the array elements
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}

