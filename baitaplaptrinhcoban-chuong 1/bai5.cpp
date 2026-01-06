//5. Giá tr? trung bình
//Ð? có du?c giá tr? trung bình c?a m?t lo?t các giá tr?, b?n c?ng các giá tr? l?i sau dó 
//chia cho t?ng s? các giá tr? d?m du?c. Vi?t m?t chuong trình d? luu tr? các giá tr?
//sau trong nam bi?n khác nhau: 28, 32, 37, 24, và 33. Chuong trình tru?c h?t ph?i 
//tính du?c t?ng c?a nam bi?n và luu k?t qu? vào trong m?t bi?t sum riêng bi?t. Sau 
//dó, chuong trình l?y bi?n sum chia cho 5 d? l?y du?c giá tr? trung bình. Hi?n th? nó 
//giá tr? trung bình ra màn hình.
//dau vao: 5 bien
//xu ly: sum, average
//dau ra: tong va gia tri trung binh
//cac buoc
//buoc 1: khai bao va gan gia tri
//buoc 2: tinh tong 5 bien va tinh trung binh
//buoc 3: in ra man hinh
#include <iostream>
using namespace std;
int main(){
//	buoc 1: khai bao va gan gia tri cho 5 bien
	double a = 28, b = 32, c = 37, d = 24, e = 33;
	// buoc 2: tinh tong 5 bien va tinh trung binh
	double sum = a + b + c + d + e;
	double average = sum / 5;
	// buoc 3: in ra man hinh
	cout << "tong cua 5 bien la: "<< sum << endl;
	cout << "gia tri trung binh la: "<< average<<endl;
	return 0;
}

