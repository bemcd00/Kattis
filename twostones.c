#include <stdio.h>

int main() {

        int n = 0;
        scanf("%d", &n);

        if (n % 2 == 1)
                printf("Alice\n");
        else
                printf("Bob\n");

        return 0;
}
