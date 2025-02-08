#include <stdio.h>
#define SIZE 5

struct Stack {
    int arr[SIZE];
    int top;
};

void push(struct Stack *s, int value) {
    if (s->top == SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

int pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int main() {
    struct Stack s = {{0}, -1};

    push(&s, 10);
    push(&s, 20);
    printf("Popped: %d\n", pop(&s));

    return 0;
}
