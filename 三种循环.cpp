#include <iostream>
using namespace std;
void get_for(int*score,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin >> score[i];
		if(score[i]<0)
		{
			cout << "输入了负数，请从头开始输入" << endl;
			i = -1;
		}
		else if(score[i]>150)
		{
			cout << "输入了超过150的值，请重新输入当前值" << endl;
			i--;
		}
		else
		{
			;
		}
	}
}
void get_while(int*score,int n)
{
	int i=0;
	while(i<n)
	{
		cin >> score[i];
		if (score[i]<0)
		{
			cout << "输入了负数，请从头开始输入" << endl;
			i = -1;
		}
		else if (score[i]>150)
		{
			cout << "输入了超过150的值，请重新输入当前值" << endl;
			i--;
		}
		else
		{
			;
		}
		i++;
	}
}
void get_do_while(int*score,int n)
{
	int i = 0;
	do
	{
		cin >> score[i];
		if (score[i]<0)
		{
			cout << "输入了负数，请从头开始输入" << endl;
			i = -1;
		}
		else if (score[i]>150)
		{
			cout << "输入了超过150的值，请重新输入当前值" << endl;
			i--;
		}
		else
		{
			;
		}
		i++;
	} while (i < n);
}
float get_average(int*score,int n)
{
	float average;
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum += score[i];
	}
	average = sum / n;
	return average;
}
int main(int argc,char*argv[])
{
	int n;
	float average;
	cout << "请输入输入成绩的门数" << endl;
	cin >> n;
	int*score = new int(n);
	cout << "请输入成绩：" << endl;
	get_for(score,n);
	//get_while(score, n);
	//get_do_while(score, n);
	average = get_average(score, n);
	cout << "平均成绩为" << average << endl;
	system("pause");
}