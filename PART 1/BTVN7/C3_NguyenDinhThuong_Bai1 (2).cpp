#include<iostream>
using namespace std;
void nhapmang(int*arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\nPhan tu thu a["<<i<<"] = ";
		cin>>arr[i];
	}
}
int tim_max(int*arr, int n)
{
	int max = arr[0];
	int tmax;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			tmax = i;
		}
	}
	return max;
}
int tim_min(int*arr, int n)
{
	int min = arr[0];
	int tmin;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			tmin = i;
		}
	}
	return min;
}
void hoandoi(int*arr, int n)
{
	int temp;
	int tmax, tmin;
	temp = arr[tmax];
	arr[tmax] = arr[tmin];
	arr[tmin] = temp;
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<< " ";
	}
}
int main()
{
	int n; 
	cout<<"Nhap vao so phan tu cua mang: ";
	cin>>n;
	int*arr = new int[n];
	nhapmang(arr, n);
	int min = tim_min(arr, n);
	int max = tim_max(arr, n);
	cout<<"min = " << min;
	cout<<endl;
	cout<<"max = " << max;
	cout<<endl;
	hoandoi(arr, n);
	return 0;
}
