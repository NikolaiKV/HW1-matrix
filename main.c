#include <stdio.h>
#define N 4

void matrix1();
void matrix2();
void matrix3();
void matrix4();
void printMatrix(int matrix[][N]);


int main() {

    matrix1();
    printf("\n");
    matrix2();
    printf("\n");
    printf("\n");
    matrix3();
    printf("\n");
    matrix4();
    return 0;
}

void printMatrix(int matrix[][N]){
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix1() {
    int matrix[N][N];
    int num = 1;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matrix[i][j] = num++;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix2() {
    int array[N];

    for(int i = 0; i < N; i++) {
        array[i] = i+1;
        printf("%d ", array[i]);
    }

    printf("\n");

    for (int i = N - 1; i > -1; i--)
        printf("%d ",array[i]);
}

void matrix3() {
    int matrix[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matrix[i][j] = 1;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N - 1 - i; j++)
            matrix[i][j] = 0;

    printMatrix(matrix);
}

void matrix4() {

    int matrix[N][N];
    int num = 1;

    for(int i = 0; i < N / 2; i++) {

        for(int j = i; j < N - i; j++)
            matrix[i][j] = num++;

        for(int j = i + 1; j < N - i; j++)
            matrix[j][N-1-i] = num++;

        for(int j = N - 2 - i; j >= i; j--)
            matrix[N - 1 - i][j] = num++;

        for(int j = N - 1 - i; j > i; j--)
            matrix[j][i] = num++;
    }

    matrix[N / 2][N / 2] = N * N;

    printMatrix(matrix);
}