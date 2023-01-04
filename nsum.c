#include <stdio.h>
#include <stdlib.h>

int main() {

        int n=0;
        int i=0;
        int sum=0;
        int x[100];

        scanf("%d", &n);

        for (i=0; i<n; i++) {


                scanf("%d", &x[i]);
                sum = sum+x[i];

        }

        printf("%d\n", sum);

        return 0;
}
     
