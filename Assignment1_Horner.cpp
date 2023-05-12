#include <math.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	float a[20];
	int i, k;
	float p, x;
	cout << "Nhap bac cao nhat cua da thuc: ";
	cin >> k;
	cout << "Nhap cac he so \n";
 	for (i = 0; i <= k; i++)
  	{
   		cout << "a[ "<< i <<" ] = ";
   		cin >> a[i];
  	}
  	cout << "Nhap gia tri cua x = ";
  	cin >> x;
  	p = 0;
  	for (int i = 0; i <= k; i++)
    {           
    	p = p * x + a[i];
    }     
  	cout << "Gia tri cua da thuc = "<< p;
  	return 0; 
}

