#include<stdio.h>
#include<iostream> 
#include<conio.h>

using namespace std; 

int a[100],W, c[100], f[100][100];

int n,i,j,GT;

void nhap( ){
	printf(" Nhap so luong do vat = "); 
	scanf("%d", &n);
	cout << " Nhap khoi luong gioi han do vat = ";
	cin >> W; 

	for ( int i = 1; i <= n; i++ ) {
		printf("\n Nhap khoi luong do vat thu %d = ",i);
		cin >> a[i]; 
//scanf(�%d�, &a[i]);
	}

	for ( int i = 1; i <= n; i++ ) {
		printf("\n Nhap khoi so cong dung cua do vat thu %d = ",i);
		//cout << "Nhap vao so cong dung cua do vat thu " << a[i] << "= " << i;
		scanf("%d", &c[i]);
	}
}

void xuat(){
	cout << endl << endl <<"               ********** BANG TINH**********\n";
	for(i = 1; i <= n; i++){
		for(j = 0; j <= W; j++){
			printf("%5d", f[i][j]);
		}
	cout << endl; 
	}
}

// tim gia tri lon nhat

int max(int a, int b){
	return (a>b)?a:b;
}

// h�m tinh gia tri cua bang

int bangphuongan(){

	for(i = 0; i <= n; i++){
		f[i][0]=0;
	}
	for(j = 0; j <= W; j++){
		f[0][j]=0;
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= W; j++){
			if (a[i] <= j){
				f[i][j] = max(f[i-1][j],f[i-1][j-a[i]]+c[i]);
			}
			else{
				f[i][j] = f[i-1][j];
			}
		}
	}
}

// h�m tim ket qua cua bai toan

int truyvet(){
	i = n;
	j = W;
	while ((i != 0) && (j != 0)){
		if (f[i][j]!=f[i-1][j]){
			printf("%2d ",i);
			GT += c[i];
			j -= a[i];
		}
		i--;
	}
}

int main(){
	nhap();
	printf("\n ********** CAC GIA TRI SAU KHI NHAP**********\n");
	printf("\n Trong luong gioi han cua tui la = %d\n",W);
	printf("\n Trong luong cua do vat: \n");
	for(i = 1; i <= n; i++){
		printf("%4d", c[i]);
	}
	cout << "\n Gia tri cua do vat: " << endl;
	for(i = 1; i <= n; i++){
		printf("%4d", a[i]);
	}
	bangphuongan();
	xuat();
	printf("\n\n Cac do vat duoc cho vao tui la: ", i);
	truyvet();
	printf("\n\n Tong gia tri toi da cua tui la = %d",W);
	printf("\n\n Tong trong luong cua do vat duoc cho vao tui la = %d", GT);
	getch();
	return 0; 
}
