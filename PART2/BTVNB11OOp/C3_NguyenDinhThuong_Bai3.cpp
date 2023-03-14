#include <iostream>

using namespace std;

class HANG {
    private:
        string mahang;
        string tenhang;
        float dongia;
    public:
    	HANG(){
    		
		}
		HANG(string mahang2, string tenhang2, int dongia2){
			mahang = mahang2;
			tenhang = tenhang2;
			dongia = dongia2;
		}
        void NHAP() {
            cout << "Nhap ma hang: ";
        	cin >> mahang;
            cin.ignore();
            cout << "Nhap ten hang: ";
            getline(cin, tenhang);
            cout << "Nhap don gia: ";
            cin >> dongia;
        }
        void XUAT() {
            cout << "- Ma hang la: " << mahang << endl 
				 << "- Ten hang la: " << tenhang << endl 
				 << "- Don gia la: " << dongia << endl << endl;
        }
};

class PHIEU {
    private:
        string maphieu;
        HANG *x;
        int n;
    public:
    	PHIEU(){
    		
		}
		PHIEU(string maphieu2){
			maphieu = maphieu2;
		}
        void NHAP() {
            cout << "Nhap ma phieu: ";
            getline(cin, maphieu);
            cout << "Nhap so mat hang: ";
            cin >> n;
            x = new HANG[n];
            for (int i = 0; i < n; i++) {
                cout << "Mat hang thu " << i + 1 << endl;
                x[i].NHAP();
            }
        }
        void XUAT() {
            cout << "Ma phieu: " << maphieu << endl << "Thong tin mat hang:" << endl << endl ;
			for (int i = 0; i < n; i++) 
			{
                x[i].XUAT();             
			}
		}
};
int main() {
    PHIEU p;
    p.NHAP();
    p.XUAT();
    return 0;
}