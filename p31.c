#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 50
#define EXPANDED_SIZE 250

int main() {
    char *article_summary = NULL;
    int current_size = INITIAL_SIZE;

    printf("=== Dynamic Article Summary Manager ===\n");

    article_summary = (char *)calloc(INITIAL_SIZE, sizeof(char));

    if (article_summary == NULL) {
        printf("Error: Initial memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocated for initial short summary (%d bytes).\n", current_size);

    printf("\n--- Initial Short Summary ---\n");
    printf("Enter a brief article summary (max %d characters):\n", INITIAL_SIZE - 1);
    
    if (fgets(article_summary, INITIAL_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        free(article_summary);
        return 1;
    }
    article_summary[strcspn(article_summary, "\n")] = 0;

    printf("\nStored Summary: %s\n", article_summary);
    printf("Current memory size: %d bytes\n", current_size);

    printf("\n--- Expanding Memory for Longer Summary ---\n");
    
    char *temp_ptr = (char *)realloc(article_summary, EXPANDED_SIZE * sizeof(char));

    if (temp_ptr == NULL) {
        printf("Error: Memory reallocation failed. Summary remains unchanged.\n");
    } else {
        article_summary = temp_ptr;
        current_size = EXPANDED_SIZE;
        printf("Memory expanded successfully to %d bytes.\n", current_size);

        printf("\nEnter the new, longer article summary (max %d characters):\n", EXPANDED_SIZE - 1);
        
        if (fgets(article_summary, current_size, stdin) == NULL) {
            printf("Error reading input.\n");
        } else {
            article_summary[strcspn(article_summary, "\n")] = 0;
            
            printf("\nUpdated Summary:\n%s\n", article_summary);
        }
    }

    if (article_summary != NULL) {
        free(article_summary);
        printf("\nMemory successfully freed. Program exiting.\n");
    }

    return 0;
}
