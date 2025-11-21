	#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void sort_prices(double arr[], int n);
void display_prices(double arr[], int n);
int validate_and_read_prices(double arr[], int n);
double calculate_average(double arr[], int n);
void calculate_min_max(double arr[], int n, double *min, double *max);

int main() {
    int n, i;
    double *prices = NULL;
    double min_price, max_price, avg_price;
    int input_success = 0;

    printf("=== Grocery Store Price Sorter and Analyzer ===\n");

    printf("1. Enter the number of items (N): ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input for number of items.\n");
        return 1;
    }
    while (getchar() != '\n');

    if (n <= 0) {
        printf("Error: No items to sort. Number of items must be greater than 0.\n");
        return 1;
    }

    prices = (double *)malloc(n * sizeof(double));
    if (prices == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("2. Enter the price of each item:\n");
    input_success = validate_and_read_prices(prices, n);

    if (input_success) {
        sort_prices(prices, n);

        printf("\nSorting Complete.\n");
        
        printf("Sorted Prices (Ascending): ");
        display_prices(prices, n);

        calculate_min_max(prices, n, &min_price, &max_price);
        avg_price = calculate_average(prices, n);

        printf("\n--- Analysis ---\n");
        printf("Minimum Price: %.2lf\n", min_price);
        printf("Maximum Price: %.2lf\n", max_price);
        printf("Average Price: %.2lf\n", avg_price);
    }

    free(prices);
    return 0;
}

int validate_and_read_prices(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("   Price [%d]: ", i + 1);
        
        if (scanf("%lf", &arr[i]) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            while (getchar() != '\n');
            return 0; 
        }
        
        while (getchar() != '\n');
    }
    return 1;
}

void sort_prices(double arr[], int n) {
    int i, j;
    double temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double calculate_average(double arr[], int n) {
    if (n == 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

void calculate_min_max(double arr[], int n, double *min, double *max) {
    if (n == 0) {
        *min = *max = 0.0;
        return;
    }
    *min = *max = arr[0];
    
    for (int i = 1; i < n; i++) {
        double current_price = arr[i];
        if (current_price < *min) {
            *min = current_price;
        }
        if (current_price > *max) {
            *max = current_price;
        }
    }
}

void display_prices(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
