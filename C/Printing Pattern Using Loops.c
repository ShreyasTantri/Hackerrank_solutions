#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,start,end,size,i,j;
    scanf("%d", &n);
    
    start=0;
    size = (2*n)-1;
    end=size-1;
    int a[size][size];
    
    while (n!=0) {
        for (i=start; i<=end; i++) {
        for (j=start; j<=end; j++) {
            
            if(i==start || j==start || i==end || j==end)
                a[i][j]=n;    
        }
        }
        
        start++;
        end--;
        n--;
    }
    for (i=0; i<size; i++) {
    for (j=0; j<size; j++) {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}
