//11. Quãng du?ng v?i m?i bình xang (B?t bu?c)
//M?t chi?c xe v?i m?t bình xang 20 gallon trung bình 23.5 d?m cho m?i gallon khi 
//lái xe trong thành ph?, và 28.9 d?m cho m?i gallon khi lái xe trên du?ng cao t?c. 
//Vi?t chuong trình tính toán và hi?n th? quãng du?ng ô tô di du?c v?i m?t bình xang 
//khi di chuy?n trên th? tr?n và khi di chuy?n trên du?ng cao t?c.
#include <iostream>
using namespace std;
int main(){
	int a = 20;
	float b = 23.5, c = 28.9;
	int d = a * b, e = a * c;
	cout << "quang duong di trong thanh pho la: "<< d << " dam"<< endl;
	cout << "quang duong di tren duong cao toc: "<< e << " dam"<< endl;
	return 0;
}
