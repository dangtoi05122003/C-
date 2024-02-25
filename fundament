
/*
1. Xác định một số nguyên dương a có phải là số nguyên tố
không ?
*/


/*
#include<iostream>
using namespace std;
bool setup(int a) {// bool bieu dien gia tri true hoac false
	if (a <= 1) {
		return false;
	}
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a;
	cout << "nhap mot so nguyen duong: ";
	cin >> a;
	if (setup(a)) {
		cout << a << " la so nguyen to";
	}
	else {
		cout << a << " khong phai la so nguyen to";
	}
	return 0;
}
*/




/*
2. Tính tổng các chữ số của một số nguyên dương n.
*/



/*
#include<iostream>
using namespace std;
void setup(int n) {
	int S = 0;
	while (n > 0) {
		int sum = n % 10; // chia phan du
		S += sum;
		n /= 10; // chia phan nguyen
	}
	cout << " tong cua so nguyen duong la: " << S << endl;
}
int main() {
	int n;
	cout << "nhap mot so nguyen duong: ";
	cin >> n;
	setup(n);
	return 0;
}
*/




/*
3. Tính thể tích của hình hộp chữ nhật.
*/

// V = d* r * c;


/*
#include <iostream>
using namespace std;
void thetich(int d, int r, int c, int& V) {
	V = d * r * c;
	cout << " the tich cua hinh hop chu nhat la: " << V << endl;
}
int main() {
	int d, r, c;
	cout << "nhap chieu dai: ";
	cin >> d;
	cout << "nhap chieu rong: ";
	cin >> r;
	cout << "nhap chieu cao: ";
	cin >> c;
	int V;
	thetich(d, r, c, V);
	return 0;

}
*/





/*
4. Tìm giá trị lớn nhất và giá trị bé nhất của một dãy số thực.
*/


#include<iostream>
/*
#include<limits>
using namespace std;
void giatri(int a, double& min, double& max) {
	max = numeric_limits<double>::min();
	min = numeric_limits<double>::max();
	for (int i = 0; i < a; i++) {
		double sum;
		cout << "nhap gia tri thu " << i + 1 << ": ";
		cin >> sum;
		if (sum < min) {
			min = sum;
		}
		if (sum > max) {
			max = sum;
		}
	}

}
int main() {
	int a;
	cout << " nhap day so thuc: ";
	cin >> a;
	double min, max;
	giatri(a, min, max);
	cout << "gia tri lon nhat: " << max << endl;
	cout << "gia tri nho nhat: " << min << endl;
	return 0;
}
*/






/*
5. Đếm số lần xuất hiện của ký tự X trong xâu ký tự S.
*/



/*
#include<iostream>
#include<string>
using namespace std;
void xau(char x, const string& S) { // const string giup khong thay doi gia tri
	int count = 0;
	for (char c : S) {
		if (c == x) {
			count++;
		}
	}
	cout << " so lan xuat hien cua ky tu" << x << " trong sau ky tu " << S << " la " << count << endl;
}
int main() {
	string S;
	char x;
	cout << "nhap sau ky tu S: ";
	//getline(cin, S); // doc mot dong van ban da duoc nhap  va luu tru vao mot doi tuong string bao gom dau cach  va ky tu cho den khi xuong dong
	cin >> S; // doc du lieu tu luong nhap cho den khi gap khoang trang( dau cach, xuong dong<...) , thuong doc gia tri nhu so nguyen, so thuc, ky tu char,...
	// du lieu duoc luu truc tiep vao bien tuong ung ma k can phai tao bat cu chuoi string trung gian
	cout << "nhap ky tu x: ";
	cin >> x;
	xau(x, S);
	return 0;
}
*/

















