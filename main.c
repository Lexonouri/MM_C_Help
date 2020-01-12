#include <stdio.h>
#include <math.h>

//Zadanie 1
int zad1() {
    //Inicjowanie macierzy "A" 2 wiersze 5 kolumn
    float A[2][5];

    //Komunikat dla usera
    printf("Wpisz liczby do obliczenia pierwiastków:\n");

    //Iteracja pobierająca dane od usera i wyliczajaca pierwiastki do drugiego wiersza
    for(int i = 0; i < 5; i++) {
        printf("Liczba nr %d: \n", i+1);
        scanf("%f", &A[0][i]);
        A[1][i] = sqrt(A[0][i]);
        printf("\n");
    }

    //Iteracja wyświetlająca dane z tablicy
    for(int j = 0; j < 2; j++) {
        printf("Wiersz nr %d ", j+1);
        for(int k = 0; k < 5; k++) {
            printf("\n");
            printf("%f ", A[j][k]);
        }
        printf("\n");
    }
}

//Zadanie 2
float zad2() {
    //Inicjowanie macierzy "T" 2 wiersze 5 kolumn
    float T[1][5], max, min;

    //Komunikat dla usera
    printf("Wpisz liczby do tablicy:\n");

    //Iteracja pobierająca dane od usera i wyliczajaca pierwiastki do drugiego wiersza
    for(int i = 0; i < 5; i++) {
        printf("Liczba nr %d: \n", i+1);
        scanf("%f", &T[0][i]);
        printf("\n");
    }

    //Przypisywanie wartosci poczatkowych dla min i max
    min = T[0][0];
    max = T[0][0];

    //Iteracja sprawdzająca wartości
    for(int j=0; j<5; j++)
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

//Zadanie 3
int zad3() {

    //Inicjowanie macierzy 4x3
    int M[3][4], min, max, sum = 0, chosen_number = 0;

    //Komunikat dla usera
    printf("Wpisz liczby do macierzy:\n");

    //Iteracja pobierająca dane do macierzy
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Liczba o indeksie %d x %d\n", i, j);
            scanf("%d", &M[i][j]);
            printf("\n");
        }
    }

    //Wyświetlenie danych
    printf("Wizualizacja macierzy:\n");
    printf("[ %d  %d  %d  %d ]\n", M[0][0], M[0][1], M[0][2], M[0][3]);
    printf("[ %d  %d  %d  %d ]\n", M[1][0], M[1][1], M[1][2], M[1][3]);
    printf("[ %d  %d  %d  %d ]\n\n", M[2][0], M[2][1], M[2][2], M[2][3]);

    //Pobieranie numeru wiersza do obliczeń
    printf("Wpisz numer wiersza (0, 1, 2) na którym chcesz wykonać obliczenia\n");
    scanf("%d", &chosen_number);

    //Test na dzbana
    if(chosen_number >= 0 && chosen_number < 3) {

        //Komunikat
        printf("Wybrałeś wiersz numer: %d\n\n", chosen_number);

        //Przypisywanie wartosci poczatkowych dla min i max
        min = M[chosen_number][0];
        max = M[chosen_number][0];

        //Iteracja sprawdzająca wartości
        for(int l=0; l<4; l++) {

            //sumowanie wybranego wiersza
            sum += M[chosen_number][l];

            //Jeżeli aktualny element jest większy
            if(M[chosen_number][l] > max)
            {
                max = M[chosen_number][l];
            }

            //Jeżeli aktualny element jest mniejszy
            if(M[chosen_number][l] < min)
            {
                min = M[chosen_number][l];
            }
        }

        //Podawanie wyników
        printf("Najwyższa wartość dla wiersza nr %d: %d\n", chosen_number, max);
        printf("Najniższa wartość dla wiersza nr %d: %d\n\n", chosen_number, min);
        printf("Suma dla wiersza nr %d: %d\n\n", chosen_number, sum);

    } else {

        printf("Wpisano złą liczbe, wiesz o tym...");

    }

}

int zad7() {
//Inicjowanie macierzy 4x3
    int M[2][3], sum = 0, chosen_number = 0, parts[2];

    //Komunikat dla usera
    printf("Wpisz liczby do macierzy:\n");

    //Iteracja pobierająca dane do macierzy
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Liczba o indeksie %d x %d\n", i, j);
            scanf("%d", &M[i][j]);
            printf("\n");
        }
    }

    //Wyświetlenie danych
    printf("Wizualizacja macierzy:\n");
    printf("[ %d  %d  %d ]\n", M[0][0], M[0][1], M[0][2]);
    printf("[ %d  %d  %d ]\n", M[1][0], M[1][1], M[1][2]);

    //Pobieranie numeru kolumny do obliczeń
    printf("Wpisz numer kolumny (0, 1, 2) który chcesz zsumowawć\n");
    scanf("%d", &chosen_number);

    //Test na dzbana
    if(chosen_number >= 0 && chosen_number < 3) {

        //Komunikat
        printf("Wybrałeś kolumnę numer: %d\n\n", chosen_number);

        //Iteracja sprawdzająca wartości
        for(int l=0; l<2; l++) {
            //sumowanie wybranego wiersza
            parts[l] = M[l][chosen_number];
            sum += M[l][chosen_number];
        }

        //Podawanie wyników
        printf("Suma dla kolumny nr %d: %d\n\n", chosen_number, sum);

        printf("W zapisie wektorowym:\n[");
        for(int m = 0; m<2; m++) {
            if(m == 1) {
                printf("%d",parts[m]);
            } else {
                printf("%d,",parts[m]);
            }
        }
        printf("]\n");

    } else {

        printf("Wpisano złą liczbe, wiesz o tym...");

    }
}

int main() {

    //Wywołanie zadania nr 1
    zad1();

    //Wywołanie zadania nr 2
    //zad2();

    //Wywołanie zadania nr 3
    //zad3();

    //Wywołanie zadania nr 7
    //zad7();

    return 0;

}
