#include <stdio.h>

int main() {

        int i;
        int n = 0;
        char arr[100];

        scanf("%d",&n);

        for (i=1; i < n+1; i++) {

                scanf("%s", arr);

                if (i%2 != 0) {

                        printf("%s\n", arr);

                }


        }


        return 0;
}
