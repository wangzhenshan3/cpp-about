#include <iostream>
using namespace std;
class count2{
public:
	double add(double a, double b);
	double minus(double a, double b);
	double multiply(double a, double b);
	double divide(double a, double b);
	double cube(double a);
};
double count2::add(double a, double b) {
	return(a + b);
}
double count2::minus(double a, double b) {
	return(a - b);
}
double count2::multiply(double a, double b) {
	return(a*b);
}
double count2::divide(double a, double b) {
	return(a / b);
}
double count2::cube(double a) {
	return(a*a*a);
}
int main(int argc, char*argv[]) {
	int a, b,i;
	char sign;
	cout <<"输入1进行四则运算，输入2进行立方运算 "<< endl;
	cin >> i;
	count2 p;
	if (i == 1) {
		cin >> a;
		cin >> sign;
		cin >> b;
		if (sign == '+') {
			cout << p.add(a, b) << endl;
		}
		if (sign == '-') {
			cout << p.minus(a, b) << endl;
		}
		if (sign == '*') {
			cout << p.multiply(a, b) << endl;
		}
		if (sign == '/') {
			cout << p.divide(a, b) << endl;
		}
	}
	if (i == 2) {
		cin >> a;
		cout << p.cube(a) << endl;
	}
	system("pause");
}