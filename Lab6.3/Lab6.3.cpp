#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void create(int* arr, int size)
{
    int MIN = -20;
    int MAX = 30;
    for (int i = 0; i < size; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}




void Sort(int* a, const int size) // метод обміну (бульбашки)
{
    for (int i = 1; i < size; i++) // лічильник ітерацій
        for (int j = 0; j < size - i; j++) // номер поточного елемента
            if (!(a[j] > a[j + 1])) // якщо порушено умову впорядкування
            { // - обмін елементів місцями
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
}




int main()
{
    srand((unsigned)time(NULL));

    const int size = 10;
    int arr[size];
    create(arr, size);
    Print(arr, size);   
    Sort(arr, size);
    Print(arr, size);
    return 0;
}