#include <iostream>
using namespace std;
int main () {
	double so ,tong = 0;
	cout << " nhap so vao day:";
	cin >> so;tong = so;
	while (so != 0) {
		cout << "nhap so vao day"; cin >> so;
		tong += so;
	}
	cout << " tong =" << tong  << endl;
	return 0;
	
}

