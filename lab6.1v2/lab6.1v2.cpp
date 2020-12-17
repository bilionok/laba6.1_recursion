// 6.1.cpp - рекурсія

#include <iostream>
#include<iomanip>

using namespace std;

void format_mas(int* a, int n, int& sum, int& k, int i)
{
    if (i < n)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
        {
            k++;
            sum += a[i];
            a[i] = 0;
        }
        format_mas(a, n, sum, k, i + 1);
    }
    else
    {
        cout << '\n';
        cout << "quantity - " << k << '\n';
        cout << "sum - " << setw(8) << sum << '\n';
        cout << '\n';
    }
}

void print(int* a, const int n, int i)
{
    cout << setw(4) << a[i] << ",";
    if (i < n - 1)
        print(a, n, i + 1);
    else
        cout << '\n';
}

void create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        create(a, size, Low, High, i + 1);
}

int main()
{
    srand(unsigned(time(NULL))); // ініціалізація генератора випадкових чисел

    const int n = 20;
    int c[n];
    int sum = 0;
    int k = 0;
    create(c, n, -20, 50, 0); // створюємо масив

    cout << setw(3) << "a[] = ";
    print(c, n, 0); // виводимо його
    format_mas(c, n, sum, k, 0); // опрацьовуємо

    cout << setw(3) << "a[] = ";
    print(c, n, 0); // виводимо 

    getchar();
}