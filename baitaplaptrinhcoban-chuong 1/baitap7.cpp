//7. M?c nu?c bi?n (B?t bu?c)
//Gi? s? m?c nu?c bi?n hi?n t?i dâng lên kho?ng 1.5 mm m?i nam, vi?t m?t chuong 
//trình hi?n th?:
//- S? mm s? tang lên so v?i m?c nu?c bi?n hi?n t?i sau 5 nam.
//- S? mm s? tang lên so v?i m?c nu?c bi?n hi?n t?i sau 7 nam.
//- S? mm s? tang lên so v?i m?c nu?c bi?n hi?n t?i sau 10 nam.
//phan tich bai toan 
//dau vao: muc nuoc bien tang moi nam va so nam can tinh 
//xu ly: tinh muc nuoc bien dang 
//dau ra: in ra man hinh
//cac buoc 
//buoc 1: khai bao va gan gia tri cho a,b,c,d
//buoc 2: in ra man hinh
#include <iostream>
using namespace std;
int main(){
	// buoc 1: khai boa va gan gia tri cho a,b,c,d
	float a = 1.5, b = a * 5, c = a * 7, d = a * 10;
	// buoc 2: in ra man hinh'
	cout << "muc nuoc bien tang sau 5 nam la: "<< b << endl;
	cout << "muc nuoc bien tang sau 7 nam la: "<< c << endl;
	cout << "muc nuoc bien tang sau 10 nam la: "<< d << endl;
	return 0;
}
