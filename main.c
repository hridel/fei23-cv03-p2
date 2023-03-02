#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5

int main() {
    int i, myArray[ARRAY_SIZE], menu = 0;
    int max, min, helper, idxMax, idxMin;

    while (menu != 1 && menu != 2) {
        printf("Zvolte způsob zadání hodnot 1 – z klávesnice, 2 – generovat: ");
        scanf("%d", &menu);
    }

    printf("\nNačtení hodnot do pole\n---------------\n");
    if (menu == 1) {
        for (i = 0; i < ARRAY_SIZE; i++) {
            printf("Zadej %d. prvek: ", i + 1);
            scanf("%d", myArray + i);
        }
    } else if (menu == 2) {
        srand(time(NULL));
        printf("generování hodnot...\n");
        for (i = 0; i < ARRAY_SIZE; i++) {
            myArray[i] = rand() % 100;
        }
    }

    printf("\n\nVýpis pole\n---------------\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("myArray[%d] = %d\n", i, *(myArray + i));
    }

    printf("\n\nHledání maxima\n---------------\n");
    idxMax = 0;
    max = myArray[idxMax];

    for (i = 1; i < ARRAY_SIZE; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
            idxMax = i;
        }
    }
    printf("Maximum je %d a je na indexu %d\n", max, idxMax);


    printf("\n\nHledání minima\n---------------\n");
    idxMin = 0;
    min = myArray[idxMin];

    for (i = 1; i < ARRAY_SIZE; i++) {
        if (myArray[i] < min) {
            min = myArray[i];
            idxMin = i;
        }
    }
    printf("Minimum je %d a je na indexu %d\n", min, idxMin);

    printf("\n\nProhození hodnot\n---------------\n");

    helper = myArray[idxMax];
    myArray[idxMax] = myArray[idxMin];
    myArray[idxMin] = helper;

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("myArray[%d] = %d\n", i, *(myArray + i));
    }

    printf("\n\nVelikost pole\n---------------\n");
    printf("Velikost pole %lu\n", sizeof(myArray));
    printf("Počet prvků v poli %lu", sizeof(myArray) / sizeof(myArray[0]));
    return 0;
}
