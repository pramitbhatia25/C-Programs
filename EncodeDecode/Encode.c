#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int code[26] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};

int** obtain(int dx);
int** multiply(int ** matrix1, int ** matrix2, int dx, int n);

int main(void)
{

    // Obtain a key matrix from the user

    printf("Enter dimensions for key matrix (has to be square): x\n");
    int dx;
    scanf("%d", &dx);
    int **key1 = obtain(dx);


    // Obtain a phrase to encode

    printf("Enter a phrase to encode: \n");
    char *m = malloc(sizeof(char) * 50);
    scanf("%s", m);


    // Convert the phrase to lowercase

    int n = strlen(m);

    for(int i = 0; i <= n; i++)
    {
        if(m[i] < 'a')
            m[i] = (char) (m[i] + 'a' - 'A');
    }


    //Convert the phrase to encoded matrix

    int ** encodedmatrix = malloc(sizeof(int) * dx);

    for(int i = 0; i < dx; i++)
        encodedmatrix[i] = malloc(sizeof(int) * n/dx);

    for(int i = 0, count = 0; i < n / dx; i++)
    {
        for(int j = 0; j < dx; j++)
        {
            encodedmatrix[j][i] = (int) (m[count++] - 'a' +1);
        }
    }

    printf("Encoded wala\n");
    for(int i = 0; i < dx; i++)
    {
        for(int j = 0; j < n / dx; j++)
        {
            printf("%d - ", encodedmatrix[i][j]);
        }
        printf("\n");
    }


    // Multiply encoded matrix with the key matrix

    int **multipliedmatrix = multiply(key1, encodedmatrix, dx, n);


    printf("final ans\n");
    for(int i = 0; i < dx; i++)
    {
        for(int j = 0; j < n / dx; j++)
        {
            printf("%d - ", multipliedmatrix[i][j]);
        }
        printf("\n");
    }

    //Send the encoded matrix to receiver to decode

}




int** obtain(int dx)
{
    int **key = malloc(sizeof(int*) * dx); // allocating memory for no of rows

    for(int i = 0; i < dx; i++)
        key[i] = malloc(sizeof(int*) * dx); // allocating memory for each row to have columns

    for(int i = 0; i < dx; i++)
    {
        for(int j = 0; j < dx; j++)
        {
            printf("Enter element %d, %d :\n", i, j);
            scanf("%i", &key[i][j]);
        }
    }

    return key;
}



int** multiply(int ** matrix1, int ** matrix2, int dx, int n)
{

    int **multiplied = malloc(sizeof(int*) * dx); // allocating memory for no of rows

    for(int i = 0; i < dx; i++)
        multiplied[i] = malloc(sizeof(int*) * n/dx); // allocating memory for each row to have columns

    for(int i = 0, sum = 0; i < dx; i++)
    {
        for(int j = 0; j < n/dx; j++)
        {
            for(int k = 0; k < dx; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            multiplied[i][j] = sum;
            sum = 0;
        }
    }


    return multiplied;
}









/*
bugs
- only works for even no of digits
- doesnt accept strings yet
- cusstom code for alphabets
*/
