//13. Giá m?t bo m?ch
//M?t công ty di?n t? bán m?t bo m?ch v?i l?i nhu?n là 35 ph?n tram. Vi?t chuong 
//trình tính toán giá bán c?a m?t bo m?ch có chi phí là 14.95 dô la. Hi?n k?t qu? lên 
//màn hình.
#include <iostream>
using namespace std;
int main(){
	float a = 14.95, b = 0.35, c = a * (1 + b);
	cout << "gia ban cua bo mach la: "<< c << " do"<< endl;
	return 0;
}
