#include <iostream>
using namespace std;

int biltk(int a, int b, int c){
	int terkecil;
	
	if (a < b && a < c )
	{
		cout << "Bilangan terkecil dari bilangan "<<a<<","<<b<<","<<c<<" Tersebut adalah bilangan = "<<a;
	}	
	
	else if (b < a && b < c )
	{
		cout << "Bilangan terkecil dari bilangan "<<a<<","<<b<<","<<c<<" Tersebut adalah bilangan = "<<b;
	}
	
	else
	{
		cout << "Bilangan terkecil dari bilangan "<<a<<","<<b<<","<<c<<" Tersebut adalah bilangan = "<<c;
	}
	return terkecil;
}

int main ()
{
	int x,y,z,hasil;
	
	cout << "--Program Menentukan bilangan terkecil dari 3 bilangan"<<endl;
	
	cout <<"\nMasukan Bilangan pertama = ";
	cin >>x;
	
	cout <<"\nMasukan Bilangan kedua = ";
	cin >>y;
	
	cout <<"\nMasukan Bilangan ketiga = ";
	cin >>z;
	
	hasil = biltk(x,y,z);
	
	return 0;
}
