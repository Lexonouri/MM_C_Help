#include <stdio.h>
#include <math.h>

//Zadanie 1
int zad1() {
    //Inicjowanie macieży "A" 2 wiersze 5 kolumn
    int A[2][5];

    //Komunikat dla usera
    printf("Wpisz liczby do obliczenia pierwiastków:\n");

    //Iteracja pobierająca dane od tablicy i wyliczajaca pierwiastki do drugiego wiersza
    for(int i = 0; i < 5; i++) {
        printf("Liczba nr %d: \n", i+1);
        scanf("%d", &A[0][i]);
        A[1][i] = sqrt(A[0][i]);
        printf("\n");
    }

    //Iteracja wyświetlająca dane z tablicy
    for(int j = 0; j < 2; j++) {
        printf("Wiersz nr %d ", j+1);
        for(int k = 0; k < 5; k++) {
            printf("\n");
            printf("%d ", A[j][k]);
        }
        printf("\n");
    }
}

int main() {

    //Wywołanie zadania nr 1
    zad1();

    return 0;

}
