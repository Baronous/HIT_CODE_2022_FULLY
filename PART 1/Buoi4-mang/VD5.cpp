#include<iostream>
using namespace std;
int main()
{
	//nhap vao n
	//nhap mang n phan tu	
	//xoa phan tu thu k trong mang 
	//neu khong ton tai phan tu thu k in ra thong bao
	//a[i] = a[i + 1]
	int n;
	cout<<"Nhap vao so phan tu mang: ";
	cin>>n;// so phan tu cua mang
	int a[n+1] ;//khai bao mang
	for(int i = 0; i < n; i++){
		cin >> a[i] ;
	}
	int k;
	cout<<"Nhap vao k: ";
	cin>>k;
	if (k < 0 || k>n ){//kiem tra dieu kien mang
		cout<<"Khong ton tai";
	}else{
		for (int i = (k-1); i < n ; i++){
			a[i] = a[i + 1];
		}
		for (int i = 0; i < (n-1) ; i++){
			cout<< a[i] <<" ";
		}
	return 0;
	}
}
