//9. Kích thu?c ki?u d? li?u
//B?n du?c giao công vi?c c?a m?t l?p trình viên trong Cyborg supercomputer. M?t 
//trong các bu?c d? hoàn thành các công vi?c tính toán là b?n c?n ph?i bi?t du?c các 
//ki?u d? li?u s? s? d?ng sau dây có kích thu?c bao nhiêu byte: ki?u char, ki?u int, ki?u 
//float, và ki?u double. Tuy nhiên b?n l?i không có b?t k? tài li?u ki thu?t nào d? tra c?u 
//thông tin này c?. Hãy vi?t chuong trình C++ d? xác d?nh xem không gian b? nh? c?n 
//cho vi?c ch?a các ki?u d? li?u này là bao nhiêu và hi?n th? chúng ta màn hình.
#include <iostream>
using namespace std;
int main(){
	cout << "kich thuoc kieu char: "<< sizeof(char)<< " byte"<< endl;
	cout << "kich thuoc kieu int: "<< sizeof(int)<< " byte"<< endl;
	cout << "kich thuoc kieu float: "<< sizeof(float)<< " byte"<< endl;
	cout << "kich thuoc kieu double: "<< sizeof(double)<< " byte"<< endl;
	return 0; 
}
