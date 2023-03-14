#include<iostream>

using namespace std;

class HANG{
	private:
		string ma_hang;
		string ten_hang;
		int don_gia;
		int so_luong;
		int n;
	public:
		void NHAP(){
			int n;
			cout<<"Nhap vao so luong mat hang: ";
			cin>>n;
			HANG hang[n];
			for (int i = 0; i < n; i++)
			{
				cout<<"Nhap vao ma hang: ";
					cin>>hang[i].ma_hang;
				cout<<"Ten hang: ";
					cin>>hang[i].ten_hang;
				cout<<"Don gia san pham: ";
					cin>>hang[i].don_gia;
				cout<<"So luong san pham la: ";
					cin>>hang[i].so_luong;
			}
		}	
		void XUAT(){
			cout<<"..............................\n";
			int n;
			HANG hang[n];
			for (int i = 0; i < n; i++)
			{
				cout<<"Ma hang la: " << hang[i].ma_hang <<endl<< "Ten hang la: " << hang[i].ten_hang
	 			<< endl << "Don gia san pham: " << hang[i].don_gia << endl << "So luong san pham la: " << hang[i].so_luong<<endl;
				 cout<< "..............................\n";
			}
		}
			
};
int main()
{
	HANG a;
	a.NHAP();
	a.XUAT();
	return 0;
}
