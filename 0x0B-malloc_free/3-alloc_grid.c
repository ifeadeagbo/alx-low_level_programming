#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height) {
    int **gridout;
    int i, j;

    // Check for invalid dimensions
    if (width < 1 || height < 1) {
        return NULL;
    }

    // Allocate memory for rows
    gridout = (int **)malloc(height * sizeof(int *));
    if (gridout == NULL) {
        free(gridout);
        return NULL;
    }

    // Allocate memory for columns in each row
    for (i = 0; i < height; i++) {
        gridout[i] = (int *)malloc(width * sizeof(int));
        if (gridout[i] == NULL) {
            // If column allocation fails, free previously allocated memory and return NULL
            for (i--; i >= 0; i--) {
                free(gridout[i]);
            }
            free(gridout);
            return NULL;
        }
    }

    // Initialize all elements to 0
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            gridout[i][j] = 0;
        }
    }

    return gridout;
}
