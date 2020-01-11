#include <stdio.h>
#include <math.h>

//Zadanie 1
int zad1() {
    //Inicjowanie macierzy "A" 2 wiersze 5 kolumn
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

//Zadanie 2
float zad2() {
    //Inicjowanie macierzy "A" 2 wiersze 5 kolumn
    float T[1][5], max, min;

    //Komunikat dla usera
    printf("Wpisz liczby do tablicy:\n");

    //Iteracja pobierająca dane od tablicy i wyliczajaca pierwiastki do drugiego wiersza
    for(int i = 0; i < 5; i++) {
        printf("Liczba nr %d: \n", i+1);
        scanf("%f", &T[0][i]);
        printf("\n");
    }

    //Przypisywanie wartosci poczatkowych dla min i max
    min = T[0][0];
    max = T[0][0];

    //Iteracja sprawdzająca wartości
    for(int j=1; j<5; j++)
    {
        //Jeżeli aktualny element jest większy
        if(T[0][j] > max)
        {
            max = T[0][j];
        }

        //Jeżeli aktualny element jest mniejszy
        if(T[0][j] < min)
        {
            min = T[0][j];
        }
    }

    //Wyświetlenie wyników
    printf("Najwyższa wartość: %f\n", max);
    printf("Najniższa wartość: %f\n", min);
}

int main() {

    //Wywołanie zadania nr 1
    //zad1();

    //Wywołanie zadania nr 2
    zad2();

    return 0;

}
