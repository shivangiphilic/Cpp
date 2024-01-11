#include <iostream>
using namespace std;

template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

template <typename T, size_t size> void print(const T (&array)[size])
{
    for(size_t i = 0; i < size; ++i)
        std::cout << array[i] << " ";
}

int main()
{
    int n = 5;
    int a[5] = { 10, 50, 30, 40, 20 };
    bubbleSort<int>(a, n);
    cout << " Sorted array : ";
    print(a);
    printf("\n");
    char chars[5] = {'S','V','N','M','A'};
    bubbleSort<char>(chars, n);
    cout << " Sorted array : ";
    print(chars);

    return 0;
}
