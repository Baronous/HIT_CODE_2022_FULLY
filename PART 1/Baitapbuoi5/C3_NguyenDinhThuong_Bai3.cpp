#include<iostream>
using namespace std;
int main()
{
	int temp = 0;
	string str1;
	getline(cin,str1);
	str1 += ' ';
	for (int i = 0; i < str1.size() - 1;++i)
	{
		if ( str1[i] != ' ' && str1[i + 1] == ' ')
		{
			++temp;
		}
	}
	cout<<temp;
}
