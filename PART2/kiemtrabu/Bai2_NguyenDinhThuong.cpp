#include<iostream>
#include<cstdio>

using namespace std;

struct Giaovien{
	string Ten_giao_vien;
	int Nam_sinh;
	float He_so_luong;
};
void nhap(int &n)
{
		Giaovien gv[n];
		if (n <= 0 )
		{
			cout<<"Gia tri khong hop le, vui long nhap lai.";
		}
		for (int i = 0; i < n; i++)
		{
			cout<<"["<<i<<"]" << "Ten giao vien: ";
				cin>>gv[i].Ten_giao_vien;
			cout<<"["<<i<<"]" << "Nam sinh: ";
				cin>>gv[i].Nam_sinh;
			cout<<"["<<i<<"]" << "He so luong: ";
				cin>>gv[i].He_so_luong;
		}
}
void xuatthongtin(int &n)
{
	Giaovien gv[n];
	for (int i = 0; i < n; i++)
	{
		cout<<"Ten giao vien la: " << gv[i].Ten_giao_vien<<endl
		<<"Nam sinh: " << gv[i].Nam_sinh << endl 
		<<"He so luong: " << gv[i].He_so_luong<< endl; 
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
	cout<<"Nhap so luong giao vien: ";
	cin>>n;
	int arr[n];
	Giaovien gv[n];
	for (int i = 0; i < n; i++)
	{
			cout << "["<<i<<"]" << "Ten giao vien: "; 
				cin>> gv[i].Ten_giao_vien;
			cout << "["<<i<<"]" << "Nam sinh: "; 
				cin>> gv[i].Nam_sinh;
			cout << "["<<i<<"]" << "He so luong: "; 
				cin>> gv[i].He_so_luong;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Ten giao vien: " << gv[i].Ten_giao_vien<<endl
		<< "Nam sinh: " << gv[i].Nam_sinh<< endl << "He so luong: " << gv[i].He_so_luong<<endl; 
	}
	nhap(n);
	docfile(arr, n);
	xuatfile(n, arr);
	xuatthongtin(n);
	return 0; 
}

	



