#include <iostream>
using namespace std;
void judge(int a)
{
	int i;
	int b;
	int mark=0;
	for (i = 2; i <= sqrt(a); i++)
	{
		b = a % i;
		if (b == 0)
		{
			mark = 1;
			break;
		}
	}
	if (a == 1)
	{
		mark = 1;
	}
	else
	{
		;
	}
	if(mark==1)
	{
		cout << a << "不是素数" << endl;
	}
	else
	{
		cout << a << "是素数" << endl;
	}
}
int main(int argc,char*argv[])
{
	int a;
	cout << "素数判断程序" << endl;
	for(;1;)
	{
		cout << "请输入数字【输入-1结束】" << endl;
		cin >> a;
		if(a==-1)
		{
			cout << "程序结束" << endl;
			break;
		}
		else
		{
			judge(a);
		}
	}
	system("pause");
}