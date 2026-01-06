//19. Nhi?t d? cao hàng nam
//Nhi?t d? cao trung bình tháng 7 là 85 d? F ? New York City, 88 d? F ? Denver, và 
//106 d? F ? Phoenix. Vi?t chuong trình tính toán và báo cáo nhi?t d? trung bình m?i 
//trong tháng 7 c?a các thành ph? n?u nhi?t d? ? m?i thành ph? tang lên 2%.
#include <iostream>
using namespace std;
int main(){
	int a = 85, b = 88, c = 106;
	float d = 0.02;
	float e = a * (1 + d), f = b * (1 + d), g = c * (1 + d);
	cout << "nhiet do thang 7 moi tai New York city la : " << e << " F" << endl;
	cout << "nhiet do thang 7 moi tai Denver la: " << f << " F" << endl;
	cout << "nhiet do thang 7 moi tai Phoenix la: " << g << " F" << endl;
	return 0;
}
