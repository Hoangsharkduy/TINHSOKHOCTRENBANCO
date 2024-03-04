
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int so0, soThoc = 0;
	cout << "Nhap so 0:"; cin >> so0;
	for (int i = 0; i < so0; i++)
	{
		cout << "0 so" << i
			<< "co so Thoc la" << pow(2, i) << endl;
		soThoc += pow(2, i);
	}
	cout << "trong so Thoc chua trong" << so0 << "la" << soThoc << "hat\n";
	return 0;
}