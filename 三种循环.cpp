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
			cout << "�����˸��������ͷ��ʼ����" << endl;
			i = -1;
		}
		else if(score[i]>150)
		{
			cout << "�����˳���150��ֵ�����������뵱ǰֵ" << endl;
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
			cout << "�����˸��������ͷ��ʼ����" << endl;
			i = -1;
		}
		else if (score[i]>150)
		{
			cout << "�����˳���150��ֵ�����������뵱ǰֵ" << endl;
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
			cout << "�����˸��������ͷ��ʼ����" << endl;
			i = -1;
		}
		else if (score[i]>150)
		{
			cout << "�����˳���150��ֵ�����������뵱ǰֵ" << endl;
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
	cout << "����������ɼ�������" << endl;
	cin >> n;
	int*score = new int(n);
	cout << "������ɼ���" << endl;
	get_for(score,n);
	//get_while(score, n);
	//get_do_while(score, n);
	average = get_average(score, n);
	cout << "ƽ���ɼ�Ϊ" << average << endl;
	system("pause");
}