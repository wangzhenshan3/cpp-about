#include <iostream>
using namespace std;
void swap(int* p,int i,int j)
{
	int temp;
	temp = p[i];
	p[i] = p[j];
	p[j] = temp;
}
int* qsort(int* p,int left,int right) 
{
	int i, last;
	void swap(int* p, int i, int j);
	if (left >= right) 
	{
		return p;
	}
	else
	{
		swap(p, left, (left + right) / 2);
		last = left;
		for (i = left + 1; i <= right; i++)
		{
			if (p[i]<p[left])
			{
				swap(p, ++last, i);
			}
		}
		swap(p, left, last);
		qsort(p, left, last - 1);
		qsort(p, last + 1, right);
	}
}
int main(int argc, char*argv[]) 
{
	int n;
	cout << "请输入数据的个数:" ;
	cin >> n;
	cout << "请输入数据：" << endl;
	int* mount=new int[n];
	int i;
	int *p;
	for(i=0;i<n;i++)
	{
		cin >> mount[i];
	}
	p = qsort(mount,0,n-1);
	for(i=0;i<n;i++)
	{
		cout << *(p+i) << endl;
	}
	delete[]mount;
	system("pause");
}