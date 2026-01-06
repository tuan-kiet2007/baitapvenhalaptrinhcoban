//20. Bao nhiêu son
//M?t nhãn hi?u son qu?ng cáo r?ng son c?a h? có th? ph? du?c 340 feet vuông trên 
//m?i gallon. Vi?t chuong trình xác d?nh và báo cáo x?p x? s? lu?ng gallon son c?n 
//thi?t d? son cho hai l?p áo trên hàng rào b?ng g? cao 6 feet và dài 100 feet.
#include <iostream>
using namespace std;
int main(){
	int a = 6, b = 100, c = 340; // a la chieu cao, b la chieu dai, c la do phu cua son
	float d = a * b, e = d * 2, f = e / c; // d la dien tich hang rao, e la tong dien tich can son la, f la so gallon son can thiet
	cout << "dien tich hang rao la: " << d << endl;
	cout << "tong dien tich can son la: " << e << endl;
	cout << "so gallon son can thiet la: " << f << " gallon" << endl;
	return 0;
}
