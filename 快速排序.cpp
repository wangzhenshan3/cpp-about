#include <iostream>
using namespace std;
class two {
public:
	int change(int a);
};
int two::change(int a)
{
	int p1;
	int now;
	int max = 0;
	int i;
	for (i = 10;i;i *= 10)
	{
		p1 = a / 2;
		a = p1;
		now = i*(p1%2);
		max += now;
		if (p1 == 1) 
		{
			break;
		}
	}
	return max;
}
int main(int argc,char*argv[])
{
	char k;
	int p;
	two c;
	cout << "���������֡���ĸ���߻س�����";
	k = cin.get();
	p = k;
	cout << "2����Ϊ";
	cout << c.change(p) << endl;
	cout << "8����Ϊ";
	cout << oct << p << endl;
	cout << "10����Ϊ";
	cout << dec << p << endl;
	cout << "16����Ϊ";
	cout << hex << p << endl;
	system("pause");
}