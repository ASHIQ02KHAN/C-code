#include <stdio.h>

void generateParentheses(char str[], int pos, int open, int close, int n) {
    if (close == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (open > close) {
        str[pos] = ')';
        generateParentheses(str, pos + 1, open, close + 1, n);
    }
    if (open < n) {
        str[pos] = '(';
        generateParentheses(str, pos + 1, open + 1, close, n);
    }
}

int main() {
    int n = 3;
    char str[2 * n + 1];
    printf("All combinations of balanced parentheses for %d pairs:\n", n);
    generateParentheses(str, 0, 0, 0, n);
    return 0;
}

