#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    char n;
    cin>>n;
    int temp = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i] == n)
            ++temp;
    }
    cout<<temp;
    return 0;
}

