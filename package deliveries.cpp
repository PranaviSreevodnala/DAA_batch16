#include <stdio.h>

int main() 
{ 
    int a[100], n, i, j, temp; 
 
    printf("\n Enter the total Number of Elements : "); 
    scanf("%d", &n); 
 
    printf("\n Enter the Array Elements : "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    for(i = 1; i <= n - 1; i++) 
    { 
        for(j = i; j > 0 && a[j - 1] > a[j]; j--) 
        { 
            temp = a[j]; 
            a[j] = a[j - 1]; 
            a[j - 1] = temp; 
        } 
    } 
    printf("\n Insertion Sort Result : "); 
    for(i = 0; i < n; i++) 
        printf(" %d ", a[i]); 
 
    return 0; 
}
