//#include <math.h>
//#include <conio.h>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	float a[20];
//	int i, k;
//	float p, x;
//	cout << "Nhap bac cao nhat cua da thuc: ";
//	cin >> k;
//	cout << "Nhap cac he so \n";
// 	for (i = 0; i <= k; i++)
//  	{
//   		cout << "a[ "<< i <<" ] = ";
//   		cin >> a[i];
//  	}
//  	cout << "Nhap gia tri cua x = ";
//  	cin >> x;
//  	p = 0;
//  	for (int i = 0; i <= k; i++)
//    {           
//    	p = p * x + a[i];
//    }     
//  	cout << "Gia tri cua da thuc = "<< p;
//  	return 0; 
//}

#include <conio.h>
#include <stdio.h>
#define m  10
int main()
  {
    int  k,n;
    float p,x;
    float a[m];

    //clrscr();
    printf("\nCho bac cua da thuc n = ");
    scanf("\%d",&n);
    printf("Vao cac he so a:\n");
    for (k=1;k<=n+1;k++)
      {
            printf("a[%d] = ",k-1);
            scanf("%f",&a[k]);
       };
    printf("Cho gia tri x = ");
    scanf("%f",&x);
    p=0.0;
    for (k=1;k<=n+1;k++)
      p=p*x+a[k];
    printf("Tri so cua da thuc P tai x =%.2f la :%.5f",x,p);
    getch();
  }


