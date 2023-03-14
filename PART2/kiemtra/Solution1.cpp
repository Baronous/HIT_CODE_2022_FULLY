#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}

long long factor(int n) // giai thua
{
    if (n == 2)
        return 2;
    return n * factor(n - 1);
}

int main()
{
    int n, x;
    float sum = 1;
    input_integer("n = ", n);
    input_integer("x = ", x);
    
    
    for (int i = 1; i <= n; i++)
        sum += (pow(x, 2*n + 1)) / (factor((2 * i) + 1));
    cout << sum;
}
