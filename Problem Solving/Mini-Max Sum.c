#include <stdio.h>

int main() {
    long int arr[5],i,min,max,sum=0;
    
    for (i=0; i<5; i++) {
        scanf("%ld",&arr[i]);
        sum+=arr[i];
    }
    min = max = arr[0];
    for (i=1; i<5; i++) {
        if (arr[i]<min) {
            min=arr[i];
        }
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    printf("%ld %ld",sum-max,sum-min);
}
