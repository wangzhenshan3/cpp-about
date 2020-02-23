#include <iostream>
using namespace std;
int comp(const void*a, const void*b)
{
	return *(int*)a - *(int*)b;
}
void zsort(int b[10000],int p1,int p2)
{
	int a[100][100];
	int i;
	int j;
	int k=0;
	int n;
	for (n=0; n < p1;)
	{
		if (n < ((p1 + p2) / 2 - 1))
		{
			if (k % 2 != 0)
			{
				for (i = 0, j = k; i <= k; i++, j--)
				{
					a[i][j] = b[n];
					n++;
				}
			}
			else for (j = 0, i = k; j <= k; j++, i--)
			{
				a[i][j] = b[n];
				n++;
			}
			k++;
		}
		else
		{
			if (k % 2 != 0)
			{
				for (i = k - p2 + 1, j = p2 - 1; i <= p2 - 1; i++, j--)
				{
					a[i][j] = b[n];
					n++;
				}
			}
			else for (j = k - p2 + 1, i = p2 - 1; j <= p2 - 1; j++, i--)
			{
				a[i][j] = b[n];
				n++;
			}
			k++;

		}
	}
	cout << "Z型排序数组为：" << endl;
	for (i=0; i < p2; i++)
	{
		for (j=0; j < p2; j++)
		{
			cout << a[i][j]<<"\t";
		}
		j = 0;
		cout << "\n";
	}

}
int main()
{
	int a;
	int b;
	int c[10000];
	int i;
	cout << "请输入要排列的数据的行/列数：";
	cin >> a;
	b = a * a;
	cout << "请输入数据：";
	for (i = 0; i < b; i++)
	{
		cin >> c[i];
	}
	qsort(c, 0, sizeof(int),comp);
	zsort(c,b,a);
	system("pause");
}
