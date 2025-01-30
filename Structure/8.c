#include <stdio.h>

struct Car {
    char brand[50];
    float price;
};

void displayCar(struct Car c) {
    printf("Car Brand: %s, Price: %.2f\n", c.brand, c.price);
}

int main() {
    struct Car c1 = {"Toyota", 20000.99};

    displayCar(c1);

    return 0;
}
