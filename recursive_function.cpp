

//void la kieu du lieu khong tra ve gia tri
//int la kieu du lieu duoc luu tru cac gia tri





//1.	Lập hàm đệ qui tính 1 + 2 + 3 + … + n-1 + n.


/*
#include<iostream>
using namespace std;
int setup(int n) {
	if (n == 0) {
		return 0; // ket thuc
	}
	else {
		return n + setup(n - 1); //setup(n -1)
		//setup(1) = 1+ 0;
		//setup(2) = 2 + 1;
		//setup(3) = 3+ 3;
		//setup(4) = 4 + 6;
	}

}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int sum = setup(n);
	cout << "tong: " << sum << endl;
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
void setup(int n, int& sum) {
	if (n == 0) {
		sum = 0;
	}
	else {
		setup(n - 1, sum); // du lieu se duoc luu vao bien sum
		sum += n;
	}
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int sum;
	setup(n, sum);
	cout << "tong: " << sum << endl;
	return 0;
}
*/




//2.	Tính giai thừa của một số nguyên dương n :

/*
#include<iostream>
using namespace std;
int setup(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * setup(n - 1);
}
int main() {
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int sum = setup(n);
	cout << "tong: " << sum << endl;
	return 0;
}
*/




/*

#include<iostream>
using namespace std;
void setup(int n, int& G) {
	G = 1;
	for (int i = 1; i <= n; i++) {
		G *= i;
	}
	cout << G << endl;
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int G;
	setup(n, G);
	return 0;
}
*/





//3.	Tính lũy thừa của một số nguyên x mũ n:      





/*
#include<iostream>
using namespace std;
void setup(int x, int n, int& S) {
	if (n == 0) {
		S = 1;
		return;
	}
	else {
		setup(x, n - 1, S);
		S *= x;
	}
}
int main() {
	int x, n;
	cout << "nhap so nguyen x: ";
	cin >> x;
	cout << "nhap so mu n: ";
	cin >> n;
	int S;
	setup(x, n, S);
	cout << "luy thua cua " << x << " mu " <<  n  <<" la " << S << endl;
}
*/




/*
#include<iostream>
using namespace std;
int setup(int x, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return  x * setup(x, n - 1);
	}
}
int main() {
	int x, n;
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap n: ";
	cin >> n;
	int sum = setup(x, n);
	cout << sum << endl;
	return 0;
}*/


//4.	Lập hàm đệ qui để xác định số Fibinaci thứ n.



/*
#include<iostream>
using namespace std;
int fibinaci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibinaci(n - 1) + fibinaci(n - 2);
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int sum = fibinaci(n);
	cout << " ham de quy de xac dinh so fibinaci thu " << n << " la: " << sum << endl;
}
*/





/*#include<iostream>
using namespace std;
void setup(int n, int& S) {
	if (n <= 1) {
		S = n;
	}
	else {
		int a = 0;
		int b = 1;
		for (int i = 2; i <= n; i++) {
			S = a + b;
			a = b;
			b = S;
		}
	}
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int S;
	setup(n, S);
	cout << S << endl;
}*/
