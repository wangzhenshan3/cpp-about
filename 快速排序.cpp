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
	cout << "请输入数字、字母或者回车符：";
	k = cin.get();
	p = k;
	cout << "2进制为";
	cout << c.change(p) << endl;
	cout << "8进制为";
	cout << oct << p << endl;
	cout << "10进制为";
	cout << dec << p << endl;
	cout << "16进制为";
	cout << hex << p << endl;
	system("pause");
}