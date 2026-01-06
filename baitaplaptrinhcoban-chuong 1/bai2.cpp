//2. D? doán sale
//Phòng sale The East Coast c?a m?t công ty t?o ra 58 ph?n tram c?a t?ng doanh thu. 
//D?a trên t? l? ph?n tram dó, vi?t m?t chuong trình doán xem Phòng sale The East 
//Coast này s? t?o ra con s? là bao nhiêu n?u công ty có doanh thu là 8.6 tri?u dô trong 
//nam nay.
//phan tich bai toan
//dau vao: doanh thu cua cong ty = 8.6 ty
//tinh toan xu ly: doanh thu cua phong ban hang bang 58% tong doanh thu cua cong ty 
//dau ra: doanh thu cua phong ban hang
//cac buoc
//buoc 1: khai bao bien doanh thu,dtpkd
//buoc 2: tinh dtpkd = (doanhthu * 58 )/ 100
//buoc 3: in ra ket qua dtpkd
#include <iostream>
using namespace std;
int main(){
 //buoc 1: khai bao bien
 float dt; // khai bao dt la doanh thu cua cong ty
 float dtpkd;  // khai vao dtpkd la doanh thu cua phong kinh doanh
 dt = 8.6;// gan gia tri cho bien dt
 // buoc 2: tinh doanh thu cua phong kinh doanh
 // cong thuc tinh dtpkd = (dt * 58 ) /100
 dtpkd = dt * 58/100;
 // buoc 3: in ra ket qua doanh thu cua phong kinh doanh
 cout << "doanh cua phong kinh doanh: "<<dtpkd;
 return 0;
}
