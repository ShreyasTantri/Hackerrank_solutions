#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i, a[10] = {0};   
    char *s;
    s = (char *)malloc(1000 * sizeof(char));
    
    scanf("%s", s);
    
    for (i = 0; s[i] != '\0'; i++) {
        // Character 0 has ASCII value 48 and char 9 has ASCII value 57
        // If any character is between these, then it is a digit
        if (s[i] >= '0' && s[i] <= '9') {   // or s[i] >= 48 && s[i] <= 57
            a[s[i] - 48]++;  // Increment the count for the corresponding digit
        }
    }
    
    for (i = 0; i <= 9; i++) {
        printf("%d ", a[i]);
    }
    
    free(s);
    return 0;
}
