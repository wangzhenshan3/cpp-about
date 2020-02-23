#include <iostream>
using namespace std;
#define SIZE 50
void poi(int *p[SIZE],int q[SIZE*SIZE])
{
	int i;
	int i2;
	int i3 = 0;
	p = new int*[SIZE];
	for(i=0;i<SIZE;i++)
	{
		p[i] = new int[SIZE];
	}
	cout << "打印的结果为：" << endl;
	for (i = 0; i < SIZE; i++)
	{
		for (i2 = 0; i2<SIZE; i2++)
		{
			p[i][i2] = q[i3];
			cout << q[i3] << "\t";
			i3++;
		}
	}
	cout << endl;
}
int main(int argc, char* argv[])
{
	int *p[SIZE] = {0};
	int i;
	int i2;
	int q[SIZE*SIZE];
	cout << "请输入数据(数据总量为" << SIZE*SIZE << "):" << endl;
	for(i=0;i<SIZE*SIZE;i++)
	{
		cin >> q[i];
	}
	poi(p,q);
	system("pause");
}