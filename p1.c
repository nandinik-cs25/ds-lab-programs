#include <stdio.h>
#define SIZE 5


void push(int item, int s[], int *top) {
    if (*top == SIZE - 1) {
        printf("Stack overflow\n");
        return;
    } else {
        *top = *top + 1;
        s[*top] = item;
        printf("Pushed %d. Current top index: %d\n", item, *top);
    }
}

void pop(int s[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
        return;
    } else {
        printf("Popped %d. Previous top index: %d\n", s[*top], *top);
        *top = *top - 1;
    }
}

void display(int s[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", s[i]);
    }
}

 int main() {
    int s[SIZE];
    int top = -1;


    push(10, s, &top);
    push(20, s, &top);
    push(30, s, &top);

    display(s, top);

    pop(s, &top);

    display(s, top);

    return 0;
}

