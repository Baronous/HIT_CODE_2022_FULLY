#include<iostream>
using namespace std;
int songuyenduong(int *arr, int n)
{
	cout<<"Nhap vao so nguyen duong n: ";
	cin>>n;
	if(n <=0 || n >= 50)
	{
		cout<<"Gia tri khong hop le, vui long nhap lai.";
	}
}
int nhapmang(int*arr, int n)
{
	cout<<"\nNhap vao so luong phan tu cua mang: ";
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>*(arr+i);
	}
}
void xuatmang(int*arr, int n)
{
	cout<<"\n";
	for (int i = 0; i < n; i++)
	{
		cout<<*(arr+i);
	}
}
int main()
{
	int n;
	int *arr = new int[n];
	int menu;
	while(true)
	{
		cout<<"\nNhap vao lua chon: ";
		cin>>menu;
		switch(menu)
		{
			case(1):
				{
					songuyenduong(arr, n);
					break;
				}
			case(2):
				{
					nhapmang(arr, n);
					break;
				}
			case(3):
				{
					xuatmang(arr, n);
					break;
				}
			case(0):
				{
					return 0;
				}
			default:
				{
					cout<<"\nLua chon khong hop le, vui long nhap lai.";
				}
		}
	}	
	return 0;
}
