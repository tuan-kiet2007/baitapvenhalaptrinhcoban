//4. Hóa don nhà hàng
//Vi?t m?t chuong trình tính thu? và tip trên m?t hóa don nhà hàng cho v? khách quen 
//v?i s? ti?n ph?i tr? cho b?a an là 88.67 dô. Thu? là 6.75 ph?n tram chi phí b?a an. 
//Ti?n tip là 20 ph?n tram t?ng ti?n sau khi c?ng thêm thu?. Hi?n th? chi phí b?a an, 
////s? ti?n thu?, s? ti?n tip, và t?ng hóa don ra màn hình.
//phan tich bai toan
//dau vao: cpbabd = 88.67, thue = 0.0675
//xu ly: tthue, ttsthue, ttip, thdcc
//dau ra: cpbabd, tthue, ttsthue, ttip, thdcc
//cac buoc
//buoc 1: gan gia tri chiphi, thue, ttip
//buoc 2: tinh tthue, ttsthue, ttip, thdcc
//buoc 3: in ra man hinh
#include <iostream>
using namespace std;
int main(){
	float chiphi = 88.67, thue = 0.0675;
	double tthue, ttsthue, ttip, thd;
	tthue = chiphi * thue;
	ttsthue = chiphi + tthue;
	ttip = ttsthue * 0.20;
	thd = ttsthue + ttip;
	cout << "tien thue: "<< tthue<< endl;
	cout << "tien tip: "<< ttip<<endl;
	cout << "tong hoa don: "<< thd <<endl;
	return 0;
}
