//18. Tiêu th? nu?c tang l?c
//M?t công ty nu?c ng?t g?n dây dã kh?o sát 16,500 khách hàng c?a mình và th?y 
//r?ng kho?ng 15% trong s? nh?ng ngu?i du?c kh?o sát mua m?t ho?c nhi?u nu?c 
//tang l?c m?i tu?n. Trong s? nh?ng khách mua nu?c tang l?c, có kho?ng 58% trong 
//s? h? thích nu?c tang l?c có v? cam. Vi?t chuong trình hi?n th? nhu sau:
//S? lu?ng khác hàng g?n dúng trong cu?c kh?o sát mua m?t ho?c nhi?u nu?c tang 
//l?c trong m?i tu?n.
//S? lu?ng khách hàng g?n dúng trong cu?c kh?o sát thích nu?c tang l?c có v? cam.
#include <iostream>
using namespace std;
int main(){
	int a = 16500;
	float b = 0.15, c = 0.58;
	int d = a * b, e = d * c;
	cout << "so khach hang mua nuoc tang luc moi tuan la: " << d << endl;
	cout << "so khach hang thich nuoc tang luc vi cam la: " << e << endl;
	return 0;
}
