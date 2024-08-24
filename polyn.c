#include <stdio.h>

struct poly {
    int coeff;
    int exp;
};

int main() {
    struct poly x[20];
    int term;

    
    printf("Enter the number of terms: ");
    scanf("%d", &term);

    
    printf("Enter coefficient and exponent for each term in descending order:\n");
    for (int i = 0; i < term; i++) {
        
        printf("Coefficient: ");
        scanf("%d", &x[i].coeff);
        printf("Exponent: ");
        scanf("%d", &x[i].exp);
    }

    
    printf("The polynomial is: ");
    for (int i = 0; i < term; i++) {
        if (i > 0 && x[i].coeff > 0) {
            printf(" + ");
        }
        if (x[i].exp == 0) {
            printf("[%d]", x[i].coeff);
        } else if (x[i].exp == 1) {
            printf("[%dx]", x[i].coeff);
        } else {
            printf("(%dx^%d)", x[i].coeff, x[i].exp);
        }
    }
    printf("\n");

    return 0;
}



