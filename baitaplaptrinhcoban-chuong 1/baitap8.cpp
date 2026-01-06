//8. T?ng ti?n mua hàng
//M?t khách hàng trong m?t c?a hàng mua 5 món d?. Giá c?a các món d? nhu sau:
//- Giá c?a món d? th? nh?t = 15.59 dô la
//- Giá c?a món d? th? hai = 24.59 dô la
//- Giá c?a món d? th? ba = 6.59 dô la
//- Giá c?a món d? th? tu = 12.59 dô la
//- Giá c?a món d? th? nam = 3.59 dô la
//Vi?t m?t chuong trình luu gi? giá c?a nam món d? này trong nam bi?n. Hi?n th? giá 
//c?a m?i món d?, t?ng t?m tính c?a gi? hàng, s? ti?n thu?, và t?ng ph?i tr?. Gi? s?
//thu? bán hàng là 7 ph?n tram.
#include <iostream>
using namespace std;
int main(){
	float a = 15.59, b = 24.59, c = 6.59, d = 12.59, e = 3.59, f = 0.07;
	float t = a + b + c + d + e;
	float q = t * f;
	float h = t + q;
	cout << "gia mon 1 la: "<< a << endl;
	cout << "gia mon 2 la: "<< b << endl;
	cout << "gia mon 3 la: "<< c << endl;
	cout << "gia mon 4 la: "<< d << endl;
	cout << "gia mon 5 la: "<< e << endl;
	cout << "tong tam tinh la: "<< t << endl;
	cout << "tien thue la: "<< q << endl;
	cout << "tong phai tra la: "<< h << endl;
	return 0;
}
