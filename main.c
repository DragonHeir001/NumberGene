#include <stdio.h>

char get_character(int number, int squared_num) {
    if (number*number == squared_num) {
        return 'a';
    }
    return 'b';
}

int main() {
    char var1 = get_character(4, 16);
    printf("%c\n", var1);
    return 0;
}
