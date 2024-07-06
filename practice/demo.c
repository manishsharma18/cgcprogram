#include <stdio.h>
#include <string.h>

int main() {
    int pos, i, j, k, n, n1, n2, n3;
    char *p, str[50], a[10], b[10];
    
    // Input the main string
    printf("Enter a string:\n");
    scanf("%[^\n]s", str);
    getchar();  // Clear the newline from the input buffer
    n = strlen(str);  // Length of the main string
    
    // Input the substring to remove
    printf("Enter substring to remove : ");
    scanf("%[^\n]s", a);
    getchar();  // Clear the newline from the input buffer
    n1 = strlen(a);  // Length of substring to remove
    
    // Input the substring to add
    printf("Enter substring to add : ");
    scanf("%[^\n]s", b);
    getchar();  // Clear the newline from the input buffer
    n2 = strlen(b);  // Length of substring to add
    
    // Determine the difference in length between substring to remove and substring to add
    n3 = n2 - n1;  // Difference in lengths
    
    // Find the position of the substring to remove in the main string
    p = strstr(str, a);
    if (p != NULL) {
        pos = p - str;  // Position of the substring to remove
    } else {
        printf("Substring '%s' not found in the string.\n", a);
        return 1;  // Exit the program if substring to remove is not found
    }
    
    // If the difference in length is negative, adjust the position accordingly
    if (n3 < 0) {
        pos += n3;
    }
    
    // Shift characters to make room for the new substring
    for (i = n - 1; i >= pos + n1; i--) {
        str[i + n3] = str[i];
    }
    
    // Insert the new substring into the main string
    k = 0;
    for (i = pos; i < pos + n2; i++) {
        str[i] = b[k++];
    }
    
    // Print the modified string
    printf("String after adding the substring :\n");
    printf("%s\n", str);
    
    return 0;
}

