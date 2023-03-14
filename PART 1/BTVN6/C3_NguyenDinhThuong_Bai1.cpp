#include<iostream>
#include<climits>
using namespace std;
//viet ham nhap n va mang n so nguyen
int nhap_n(int &n, int a[])
{
	cout<<"Nhap vao so luong phan tu cua mang: ";
	cin >> n;
	if (n <= 0)
	{
		cout<<"Gia tri khong hop le";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<"\nPhan tu a["<<i<<"] = ";
		cin >> a[i];
	}
}
//xuat phan tu cua mang
int xuat_n(int a[], int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout<< a[i] << " ";
	}
}
//dem so nguyen duong cua mang
int so_nguyen_duong(int a[] , int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			++temp;
		}
	}return temp;
}
//tinh trung binh cong cua mang
float trung_binh_cong(int a[], int n)
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}return tong / n;
}
//tra ve so nho nhat va lon nhat
int min_max(int a[], int n)
{
	int max = INT_MIN, min = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout<<"Max = " << max;
	cout<<"Min = " << min;
}
//xoa phan tu trong mang
void xoaphantu( int a[], int vitrixoa, int &n)
{
	for( int i = vitrixoa; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	--n;
}
int main(){
	int n;
	int a[n];
	int menu;
	while(true)
	{
		cout<<"Nhap vao lua chon: ";
		cin>>menu;
		switch(menu)
		{
			case(1):
				{
					nhap_n(a, n);
					break;
				}
			case (2);
			{
				xuat_n(a, n);
				break;
			}
			case(3):
				{
					cout<<"Mang vua nhap co " << so_nguyen_duong(a, n);
					break;
				}
			case(4):
				{
					cout<<trung_binh_cong(a, n);
					break;
				}
			case(5):
				{
					min_max(a, n);
					break;
				}
			case(6):
				{
					xoaphantu(a, n, 2);
					break;
				}
			case(0):
				{
					return 0;
				}
			default:
				{
					cout<<"Gia tri khong hop le";
				}
		}
	}
	return 0;
}



