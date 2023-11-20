 #include <stdio.h>
#include <stdlib.h>

void swap(void *a, void *b, int datatype);

int main() {
    unsigned int datatype;

    printf("Enter datatype of elements:\n");
    printf("Enter 1 for int\nEnter 2 for float\nEnter 3 for char: ");
    scanf("%d", &datatype);

    printf("Enter elements: ");
    switch (datatype) {
        case 1: {
            int b;
            int a;
            scanf("%d%d", &a, &b);
            swap(&a, &b, 1);
            printf("a=%d, b=%d", a, b);
            break;
        }
        case 2: {
            float e;
            float f;
            scanf("%f%f", &e, &f);
            swap(&e, &f, 2);
            printf("a=%.2f, b=%.2f", e, f);
            break;
        }
        case 3: {
            char g;
            char h;
            scanf(" %c %c", &g, &h);
            swap(&g, &h, 3);
            printf("a=%c, b=%c", g, h);
            break;
        }
        default:
            printf("Invalid datatype choice");
    }

    return 0;
}

void swap(void *a, void *b, int datatype) {
    switch (datatype) {
        case 1: {
            int temp = *(int *)a;
            *(int *)a = *(int *)b;
            *(int *)b = temp;
            break;
        }
        case 2: {
            float temp = *(float *)a;
            *(float *)a = *(float *)b;
            *(float *)b = temp;
            break;
        }
        case 3: {
            char temp = *(char *)a;
            *(char *)a = *(char *)b;
            *(char *)b = temp;
            break;
        }
        default:
            printf("Invalid casetype");
    }
}
