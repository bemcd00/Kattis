#include <stdio.h>
#include <string.h>


int main() {

        char s[1000];
        int total = 0;
        int i = 0;
        int len;

        scanf("%s", s);
        len = strlen(s);

        for (i=0; i < len; i++) {
                if (s[i] == 'e') {
                        total++;
                }

        }


        printf("h");

        for (i=0; i<total*2; i++) {

                printf("e");

        }

        printf("y\n");

        return 0;
}
   
