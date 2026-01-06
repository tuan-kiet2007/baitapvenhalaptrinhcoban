//17. Hoa h?ng ch?ng khoán
//Kathryn dã mua 750 c? phi?u v?i giá 35.00 USD / c? phi?u. Cô ?y ph?i tr? cho ngu?i 
//môi gi?i ch?ng khoán c?a mình kho?n hoa h?ng 2% cho giao d?ch. Vi?t m?t chuong 
//trình tính toán và hi?n th? nhu sau:
//- S? ti?n thanh toán cho c? phi?u (không có hoa h?ng).
//- S? ti?n hoa h?ng.
//- T?ng s? ti?n dã thanh toán (t?ng cho c? phi?u c?ng v?i ti?n hoa h?ng).
#include <iostream>
using namespace std;
int main(){
	int a = 750;
	float b = 35.00;
	int c = a * b, d = c * 0.02, e = c + d;
	cout << "so tien mua co phieu chua hoa hong la: " << c << " USD" << endl;
	cout << "so tien hoa hong la: " << d << " USD" << endl;
	cout << "tong so tien da thanh toan: " << e << " USD" << endl;
	return 0;
}
