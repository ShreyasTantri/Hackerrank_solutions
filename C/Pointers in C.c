#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int temp;
    temp = *a;
    *a = (*a) + (*b);   // a--->9
    // *b = abs((*a) - (*b)); // b--->9-5=4 ---> wrong
    
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
