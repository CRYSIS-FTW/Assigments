#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += 2*i-1; 
    }  
    printf("The sum of the first %d odd numbers is %d\n", n, sum); 
    int squared = n*n;
    if (sum == squared) {
        printf("The sum of the first %d odd numbers is equal to %d^2\n", n, n);
    } else {
        printf("The sum of the first %d odd numbers is NOT equal to %d^2\n", n, n);
    } 
    return 0;
}
