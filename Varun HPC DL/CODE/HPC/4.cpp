#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <omp.h>
using namespace std;

#define MAX 5

int main()
{
    int a[MAX], b[MAX], c[MAX], i;

    printf("\n First Vector:\t");
    #pragma omp parallel for
    for(i = 0; i < MAX; i++)
    {
        a[i] = rand() % 1000;
    }

    for(i = 0; i < MAX; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n Second Vector:\t");
    #pragma omp parallel for
    for(i = 0; i < MAX; i++)
    {
        b[i] = rand() % 1000;
    }

    for(i = 0; i < MAX; i++)
    {
        printf("%d\t", b[i]);
    }

    printf("\n Parallel-Vector Addition:(a, b, c)\t");
    #pragma omp parallel for
    for(i = 0; i < MAX; i++)
    {
        c[i] = a[i] + b[i];
    }

    for(i = 0; i < MAX; i++)
    {
        printf("\n%d\t%d\t%d", a[i], b[i], c[i]);
    }

    return 0;
}

