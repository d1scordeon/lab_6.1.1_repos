#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <Windows.h> 

using namespace std;

//Ітераційний спосіб 

void range(int* a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int sum(int* a, const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int quantity(int* a, const int n)
{
    int quantity = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && !(i % 5 == 0))
        {
            quantity++;
        }
    }
    return quantity;
}

void zero(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && !(i % 5 == 0))
            a[i] = 0;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];

    int Low = -20;
    int High = 50;

    range(a, n, Low, High);
    print(a, n);

    cout << "Сума = " << sum(a, n) << endl;
    cout << "Кількість = " << quantity(a, n) << endl;

    zero(a, n);
    print(a, n);

    return 0;
}