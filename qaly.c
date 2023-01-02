#include <stdio.h>


int main() {
        int n = 0; //how many inputs
        int i;

        float q; //quality
        float y; //years
        float total = 0;

        scanf("%d", &n);

        for (i = 0; i < n; i++) {

                scanf("%f %f", &q, &y);

                total = total + (q*y);

        }

        printf("%.3f", total);

        return 0;
}
