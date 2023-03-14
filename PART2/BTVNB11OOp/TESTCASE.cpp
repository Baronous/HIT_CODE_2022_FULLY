#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        float temp = 1;
        for (int j = 1; j <= i; j++)
        {
            temp += j;
        }
        sum += 1 / temp;
    }
    cout << "Tong la: " << sum;
    return 0;
}