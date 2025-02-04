#include <stdio.h>

struct Status {
    unsigned int isAvailable : 1;
    unsigned int isPaid : 1;
    unsigned int isConfirmed : 1;
};

int main() {
    struct Status order = {1, 0, 1};

    printf("Available: %d, Paid: %d, Confirmed: %d\n", order.isAvailable, order.isPaid, order.isConfirmed);

    return 0;
}
