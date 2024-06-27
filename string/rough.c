#include <stdio.h>
#include <string.h>

int main() {
    int i, a, l, count = 0;
    char str[50];

    printf("Enter a string: \n");
    scanf("%[^\n]", str);
    getchar(); // Consume the newline character left in the input buffer

    l = strlen(str);

    for (i = 1; i < l; i++) {
        int c1 = 0, c2 = 0;

        // Count consonants in the first part (from 0 to i-1)
        for (a = 0; a < i; a++) {
            if ((str[a] != 'a' && str[a] != 'e' && str[a] != 'i' && str[a] != 'o' && str[a] != 'u' &&
                 str[a] != 'A' && str[a] != 'E' && str[a] != 'I' && str[a] != 'O' && str[a] != 'U') &&
                 (str[a] >= 'a' && str[a] <= 'z' || str[a] >= 'A' && str[a] <= 'Z')) {
                c1++;
            }
        }

        // Count consonants in the second part (from i to l-1)
        for (a = i; a < l; a++) {
            if ((str[a] != 'a' && str[a] != 'e' && str[a] != 'i' && str[a] != 'o' && str[a] != 'u' &&
                 str[a] != 'A' && str[a] != 'E' && str[a] != 'I' && str[a] != 'O' && str[a] != 'U') &&
                 (str[a] >= 'a' && str[a] <= 'z' || str[a] >= 'A' && str[a] <= 'Z')) {
                c2++;
            }
        }

        if (c1 > c2) {
            count++;
        }
    }

    printf("Number of ways the string can be split: %d\n", count);

    return 0;
}

