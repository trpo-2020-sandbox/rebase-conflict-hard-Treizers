#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int max_element(int* arr, int size)
{
    int max = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it > max) {
            max = *it;
        }
    }

    return max;
}

void print_array(int* arr, int size)
{
<<<<<<< HEAD
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

<<<<<<< HEAD
    const int max = max_element(arr, 10);
||||||| constructed merge base
    const int max = max_element(arr, 5);
=======
    const int max = max_element(arr, N_ELEMENTS(arr));
>>>>>>> Count array items with macro

||||||| constructed merge base
    int arr[] = {3, 1, 4, 1, 5};

    const int max = max_element(arr, N_ELEMENTS(arr));

=======
>>>>>>> Extract printing array to function
    printf("Array: ");
    int i;
<<<<<<< HEAD
<<<<<<< HEAD
    for (i = 0; i < 10; ++i) {
||||||| constructed merge base
    for (i = 0; i < 5; ++i) {
=======
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
>>>>>>> Count array items with macro
||||||| constructed merge base
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
=======
    for (i = 0; i < size; ++i) {
>>>>>>> Extract printing array to function
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5};

    const int max = max_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Max element: %d\n", max);

    return 0;
}
