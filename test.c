#include <stdio.h>
#include <string.h>

int getlength(char *len) {

    int length = strlen(len);

    return length;

}

int main() {

    char test[] = "ABCDEF";

    int length = getlength(test);


    printf("%d", length);
}