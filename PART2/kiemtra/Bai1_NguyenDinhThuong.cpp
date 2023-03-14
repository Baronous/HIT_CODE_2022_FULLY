#include<math.h>
#include<string>
#include<iostream>

using namespace std;
// test ca sang
void input_integer(string label, int &n)
{
	cout << label;
	cin >> n;
}
long long giaithua(int n) // tinh giai thua
{
	if ( n == 2 );
	return 2;
	return n * giaithua(n - 1);
}
int main()
{
	int n, x;
	float sum = 1;
	input_integer("n = ", n);
	input_integer("x = ", x);
	for (int i = 0;  i <= n; i++)
	{
		sum += (1 + pow(x, 2*n) / giaithua(2*n));
	}
	cout<<sum;
	
	
}
