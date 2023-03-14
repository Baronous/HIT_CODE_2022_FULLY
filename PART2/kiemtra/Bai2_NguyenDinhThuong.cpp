#include<iostream>
#include<cstdio>
using namespace std;
struct Nhanvien{
	string Ma_Nhan_Vien; 
	string Ten_Nhan_vien;
	int tuoi;	
};
void nhap(int &n)
{
		Nhanvien nv[n];
		if (n < 0 || n > 100)
		{
			cout<<"Gia tri khong hop le, vui long nhap lai.";
		}
		for (int i = 0; i < n; i++)
		{
			cout<<"["<<i<<"]" << "Ma nhan vien: ";
				cin>>nv[i].Ma_Nhan_Vien;
			cout<<"["<<i<<"]" << "Ten nhan vien: ";
				cin>>nv[i].Ten_Nhan_vien;
			cout<<"["<<i<<"]" << "tuoi: ";
				cin>>nv[i].tuoi;	
		}
}
void xuatthongtin(int &n)
{
	Nhanvien nv[n];
	for (int i = 0; i < n; i++)
	{
		cout<<"Ma nhan vien la: " << nv[i].Ma_Nhan_Vien<<endl
		<<"ten nhan vien: " << nv[i].Ten_Nhan_vien << endl 
		<<"Tuoi nhan vien: " << nv[i].tuoi << endl; 
	}
}
void docfile(int arr[],int &n)
{
	freopen("input.txt", "r", stdin);
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}
void xuatfile(int &n, int arr[])
{
	freopen("output.txt", "w", stdout);	
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{	
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	int arr[n];
	nhap(n);
	docfile(arr, n);
	xuatfile(n, arr);
	xuatthongtin(n);
	return 0;
}
