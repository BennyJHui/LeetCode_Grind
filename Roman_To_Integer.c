#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    
    int length = strlen(s);
    char letter;
    int sum = 0;
    
    for (int i = 0; i < length; i++) {
        letter = s[i];
        switch(letter) {
            case 'I':
                if (s[i+1] == 'V') {
                    sum = sum + 4;
                    i = i + 1;
                } else if (s[i+1] == 'X') {
                    sum = sum + 9;
                    i = i + 1;
                } else if ((i + 1) <= length) {
                    sum = sum + 1;
                }
                break;
            case 'V':
                if ((i + 1) <= length) {
                    sum = sum + 5;
                }
                break;
            case 'X':
                if (s[i+1] == 'L') {
                    sum = sum + 40;
                    i = i + 1;
                } else if (s[i+1] == 'C') {
                    sum = sum + 90;
                    i = i + 1;
                } else if ((i + 1) <= length) {
                    sum = sum + 10;
                }
                break;
            case 'L':
                if ((i + 1) <= length) {
                    sum = sum + 50;
                }
                break;
            case 'C':
                if (s[i+1] == 'D') {
                    sum = sum + 400;
                    i = i + 1;
                } else if (s[i+1] == 'M') {
                    sum = sum + 900;
                    i = i + 1;
                } else if ((i + 1) <= length) {
                    sum = sum + 100;
                }
                break;
            case 'D':            
                if ((i + 1) <= length) {
                    sum = sum + 500;
                }
                break;
            case 'M':
                if ((i + 1) <= length) {
                    sum = sum + 1000;
                }
                break;
        }
    }

    return sum;
}

int main() {

    char s[] = "III";

    int val;

    val = romanToInt(s);

    printf("%d \n", val);
    printf("%c", s[0]);

}