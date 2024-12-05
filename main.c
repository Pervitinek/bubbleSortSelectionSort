#include <stdio.h>

void bubbleSort() {
    printf("Bubble sort: ");
    int INeedToSortThis[10] = {1, 5, 2, 0, 40, 5, 8, 7, 4, -1};
    int size = sizeof(INeedToSortThis) / sizeof(INeedToSortThis[0]);
    int changed = 1;

    while (changed) {
        changed = 0;
        for (int i = 0; i < size - 1; i++) {
            if (INeedToSortThis[i] > INeedToSortThis[i + 1]) {
                int chosen = INeedToSortThis[i];
                INeedToSortThis[i] = INeedToSortThis[i + 1];
                INeedToSortThis[i + 1] = chosen;

                changed = 1;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", INeedToSortThis[i]);
    }
    printf("\n");
}

void selectionSort() {
    printf("Selection sort: ");
    int INeedToSortThis[10] = {1, 5, 2, 0, 40, 5, 8, 7, 4, -1};
    int size = sizeof(INeedToSortThis) / sizeof(INeedToSortThis[0]);

    for (int i = 0; i < size - 1; i++) {
        int smolNum = i;
        for (int j = i + 1; j < size; j++) {
            if (INeedToSortThis[j] < INeedToSortThis[smolNum]) {
                smolNum = j;
            }
        }

        if (smolNum != i) {
            int chosen = INeedToSortThis[i];
            INeedToSortThis[i] = INeedToSortThis[smolNum];
            INeedToSortThis[smolNum] = chosen;
        }
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", INeedToSortThis[i]);
    }
    printf("\n");
}

int main() {
    bubbleSort();
    selectionSort();
    return 0;
}