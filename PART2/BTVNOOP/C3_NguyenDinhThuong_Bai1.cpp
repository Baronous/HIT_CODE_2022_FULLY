#include<iostream>

using namespace std;

class Hinh_chu_nhat{
	private:
		float dai;
		float rong;
	public:
		void nhap(){
			cout<<"Nhap vao chieu dai: ";
			cin >> dai;
			cout<<"Nhap vao chieu rong: ";
			cin >> rong;
		}
		float DIENTICH(){
			return dai * rong;
		}
		float CHUVI(){
			return (dai + rong) * 2;
		}
		void hienthi(){
			cout << "Dien tich la: " << DIENTICH() <<endl;
			cout << "Chu vi la: " << CHUVI() << endl;
		}
		void ve_hinh_chu_nhat(){
			for(size_t i = 0; i < dai; i++)
			{
				for (size_t j = 0; j < rong; j++)
				{
					cout<<" * ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	Hinh_chu_nhat a;
	a.nhap();
	a.hienthi();
	a.ve_hinh_chu_nhat();
	return 0;
}
