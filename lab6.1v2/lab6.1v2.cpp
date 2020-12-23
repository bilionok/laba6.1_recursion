// 6.1.cpp - рекурсія

#include <iostream>
#include<iomanip>

using namespace std;

void q(int* a, int n, int& k, int i)
{
    if (i < n)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
        {
            k++;
        }
        q(a, n, k, i + 1);
    }
    else
    {

        cout << "quantity - " << k << '\n';
        cout << '\n';
    }
}

void s(int* a, int n, int& sum, int i)
{
    if (i < n)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
        {
            sum += a[i];
        }
        s(a, n, sum, i + 1);
    }
    else
    {
        cout << '\n';
        cout << "sum - " << setw(8) << sum << '\n';

    }
}

void format_mas(int* a, int n, int& sum, int& k, int i)
{
    if (i < n)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
        {
            a[i] = 0;
        }
        format_mas(a, n, sum, k, i + 1);
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
    s(c, n, sum, 0); // сума
    q(c, n, k, 0); // кількість
    format_mas(c, n, sum, k, 0); // опрацьовуємо
    cout << setw(3) << "a[] = ";
    print(c, n, 0); // виводимо 

    getchar();
}