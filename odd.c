#include <stdio.h>


int main() {

        int n;
        int x;
        int i;

        scanf("%d", &n);

        for (i=0; i<n; i++) {

                scanf("%d", &x);

                if (x % 2 != 0) {

                        printf("%d is odd\n", x);

                } else {

                        printf("%d is even\n", x);

                }

        }


        return 0;
}
     
