//��������79��66��78��85��87��83
//�������79.6667
#include <iostream>
#include <stdlib.h>
using namespace std;
class data {
private:
	double english, math, algebra, history, politics, information, average;
public:
	double getaverage(double a, double b, double c, double d, double e,double f);
};
double data::getaverage(double a, double b, double c, double d, double e,double f) {
	double i;
	english = a;
	math = b;
	algebra = c;
	history = d;
	politics = e;
	information = f;
	i = (a + b + c + d + e + f) / 6;
	average = i;
	return i;
}
int main(int argc, char*argv[]) {
	double score[5];
	float score2[5];
	char score3[5][2];
	long score4[5];
	int score5[5];
	int i,i2;
	cout << "������Ӣ��ɼ�" << endl; 
	cin >> score[0];
	cout << "����������ɼ�" << endl;
	cin >> score[1];
	cout << "�������ߴ��ɼ�" << endl;
	cin >> score[2];
	cout << "��������ʷ�ɼ�" << endl;
	cin >> score[3];
	cout << "���������γɼ�" << endl;
	cin >> score[4];
	cout << "��������Ϣ�ɼ�" << endl;
	cin >> score[5];
	for (i = 0; i <= 5; i++) {
		score2[i] = float(score[i]);
		score4[i] = long(score[i]);
		score5[i] = int(score[i]);
		itoa(score5[i],score3[i],10);
	}
	cout << "˫���ɼ�" << endl;
	for (i = 0; i <= 5; i++) {
		cout << score[i] << "";
		cout << endl;
	}
	cout << "����ɼ�" << endl;
	for (i = 0; i <= 5; i++) {
		cout << score2[i] << "";
		cout << endl;
	}
	cout << "�ַ��ɼ�" << endl; 
	for (i= 0; i<= 5; i++){
	for(i2=0;i2<=1;i2++){
	
		cout << score3[i][i2] << "";
    }
    cout<<endl;
	}
	cout << "���ͳɼ�" << endl; 
	for (i = 0; i <= 5; i++) {
		cout << score4[i] << "";
		cout << endl;
	}
	cout << "����ɼ�" << endl; 
	for (i = 0; i <= 5; i++) {
		cout << score5[i] << "";
		cout << endl;
	}
	data p;
	cout << "ƽ���ɼ�" << endl;
	cout << p.getaverage(score[0], score[1], score[2], score[3], score[4], score[5]) << endl;
}

