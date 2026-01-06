//3. Thu? bán hàng (B?t bu?c)
//Vi?t m?t chuong trình tính t?ng thu? bán hàng trên m?t gi? hàng 95 dô. Gi? s? thu? bán 
//hàng c?a m?t ti?u bang là 4 ph?n tram, và thu? bán hàng c?a qu?n là 2 ph?n tram.
//phan tich bai toan
//dau vao: gia tri hang hoa = 95, thue tieu bang = 0.04, thue quan = 0.02
//xu ly: thue tieu bang = gia * 0.04, thue quan gia = gia * 0.02, tong thue = thue tieu bang + thue quan, tong tien = gia + tong the
//dau ra: thue tieu bang phai tra, thue quan phai tra, tong thue, tong tien thanh toan
//cac buoc
//buoc 1: gan gia tri gia = 95, ttb = 0.04, tq =0.02
//buoc 2: tttb = gia * ttb, ttq = gia * tq
//buoc 3: tthue = tttb + ttq
//buoc 4: ttien = gia + tt
//buoc 5: in ket qua
#include <iostream>
using namespace std;
int main(){
	int gia = 95;
	float ttb = 0.04, tq = 0.02, tttb, ttq, tthue, ttien;
	tttb = gia * ttb;
	ttq = gia * tq ;
	tthue = tttb + ttq;
	ttien = gia + tthue;
	cout << "tong thue tieu bang: "<< tttb<< endl;
	cout << "tong thue quan: "<< ttq << endl;
	cout << "tong thue: " << tthue << endl;
	cout << "tong tien: " << ttien << endl;
	return 0;
}

