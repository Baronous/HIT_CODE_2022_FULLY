#include<iostream>;
using namespace std;
int main()
{
    //nhap vao so nguyen n, nhap mang n phan tu, tinh tong tich cac phan tu in ra man hinh
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i < n; i++){//in ra so phan tu mang
        cin>>a[i];
    }
    int tong = 0, tich = 1;
    for (int i = 0; i < n; i++){
        tong += a[i];
        tich *= a[i];
    }
    cout<<"Tong la: " << tong << endl;
    cout<<"Tich la: " << tich;
    return 0;
}
