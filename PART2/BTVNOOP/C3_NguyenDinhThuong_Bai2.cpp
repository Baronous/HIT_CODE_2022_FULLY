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
			cout<<"Nhap vao ma hang: ";
				cin>>ma_hang;
			cout<<"Ten hang: ";
				cin>>ten_hang;
			cout<<"Don gia san pham: ";
				cin>>don_gia;
			cout<<"So luong san pham la: ";
				cin>>so_luong;
		}
		void XUAT(){
			cout<<ma_hang<<"----"<<ten_hang<<"----"<<don_gia<<"----"<<so_luong;
			cout<<"-----> THANH TIEN: "<< don_gia * so_luong<<endl;
		}
		void Nhap(){
			int n;
			cout<<"Nhap vao so luong mat hang: ";
			cin>>n;
			cout<<endl;
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
				cout<<endl;
			}
			cout<<"..............................\n";
			for (int i = 0; i < n; i++)
			{
				cout<<"Ma hang la: " << hang[i].ma_hang <<" ______ "<< "Ten hang la: " << hang[i].ten_hang
	 			<< " ______ " << "Don gia san pham: " << hang[i].don_gia << " ______ " << "So luong san pham la: " << hang[i].so_luong<<endl<<endl;
	 			cout<<"THANH TIEN: "<<hang[i].don_gia * hang[i].so_luong<<endl;
				 cout<< "..............................\n";
			}
		}
};
int main()
{
	HANG a;
	a.Nhap();
	return 0;
}
