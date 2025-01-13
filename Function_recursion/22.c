#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 0) // Base case
        return;
    towerOfHanoi(n - 1, source, target, auxiliary); // Move n-1 disks to auxiliary
    printf("Move disk %d from %c to %c\n", n, source, target);
    towerOfHanoi(n - 1, auxiliary, source, target); // Move n-1 disks to target
}

int main() {
    int n = 4;
    printf("Tower of Hanoi solution for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
