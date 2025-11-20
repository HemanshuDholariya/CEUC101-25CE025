// programmer : hemanshu dholariya
#include <stdio.h>

struct B {
    int an;
    char t[100];
    char a[100];
    float p;
    int s;
};

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct B b;

    printf("Enter Accession Number: ");
    if (scanf("%d", &b.an) != 1) {
        printf("Invalid input for Accession Number.\n");
        return 1;
    }
    clear_buffer();

    printf("Enter Title: ");
    if (fgets(b.t, sizeof(b.t), stdin) == NULL) {
        printf("Error reading Title.\n");
        return 1;
    }
    for (int i = 0; b.t[i] != '\0'; i++) {
        if (b.t[i] == '\n') {
            b.t[i] = '\0';
            break;
        }
    }

    printf("Enter Author Name: ");
    if (fgets(b.a, sizeof(b.a), stdin) == NULL) {
        printf("Error reading Author Name.\n");
        return 1;
    }
    for (int i = 0; b.a[i] != '\0'; i++) {
        if (b.a[i] == '\n') {
            b.a[i] = '\0';
            break;
        }
    }

    printf("Enter Price: ");
    if (scanf("%f", &b.p) != 1) {
        printf("Invalid input for Price.\n");
        return 1;
    }
    clear_buffer();

    printf("Enter Status (1=Issued, 0=Available): ");
    if (scanf("%d", &b.s) != 1) {
        printf("Invalid input for Status.\n");
        return 1;
    }
    clear_buffer();

    printf("\nBook Details:\n");
    printf("Acc No.: %d\n", b.an);
    printf("Title: %s\n", b.t);
    printf("Author: %s\n", b.a);
    printf("Price: $%.2f\n", b.p);
    printf("Status: %s\n", (b.s == 1 ? "ISSUED" : "AVAILABLE"));

    return 0;
}
