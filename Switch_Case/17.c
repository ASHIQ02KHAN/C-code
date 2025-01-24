//Determine the Quadrant
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the coordinates (x, y): ");
    scanf("%d %d", &x, &y);

    switch (x > 0 && y > 0) {
        case 1:
            printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
            break;
        case 0:
            switch (x < 0 && y > 0) {
                case 1:
                    printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
                    break;
                case 0:
                    switch (x < 0 && y < 0) {
                        case 1:
                            printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
                            break;
                        case 0:
                            switch (x > 0 && y < 0) {
                                case 1:
                                    printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
                                    break;
                                case 0:
                                    printf("The point (%d, %d) lies on the axis.\n", x, y);
                            }
                    }
            }
    }

    return 0;
}
