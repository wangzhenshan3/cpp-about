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
		cout << a << "��������" << endl;
	}
	else
	{
		cout << a << "������" << endl;
	}
}
int main(int argc,char*argv[])
{
	int a;
	cout << "�����жϳ���" << endl;
	for(;1;)
	{
		cout << "���������֡�����-1������" << endl;
		cin >> a;
		if(a==-1)
		{
			cout << "�������" << endl;
			break;
		}
		else
		{
			judge(a);
		}
	}
	system("pause");
}