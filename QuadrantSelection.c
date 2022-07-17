#include <stdio.h>

int main() {

int x;
int y;

scanf("%d", &x);
scanf("%d", &y);

if (x >= 1 && x <= 1000 && y>=1 && y <= 1000) {
        printf ("1"); 
} else if ( x <= -1 && x>= -1000 && y>= 1 && y <= 1000) {
        printf("2");
} else if (x <= -1 && x >= -1000 && y <= 1 && y >= -1000) {
        printf("3");
} else if (x >= 1 && x <= 1000 && y <= -1 && y >= -1000) {
        printf("4");
}

        return 0;
}
