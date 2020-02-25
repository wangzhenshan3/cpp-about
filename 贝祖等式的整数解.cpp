#include<iostream>
using namespace std;

int exgcd(int Coprime_Number1, int Coprime_Number2, int &Inverse_Of_X, int &Inverse_Of_Y);

int main()
{
	int Coprime_Number1, Coprime_Number2;
	int Inverse_Of_X, Inverse_Of_Y;   
	printf("������������������\n");
	scanf_s("%d%d", &Coprime_Number1, &Coprime_Number2);
	int Greatest_Common_Divisor = exgcd(Coprime_Number1, Coprime_Number2, Inverse_Of_X, Inverse_Of_Y);
	printf("%d��%d�����Լ���ǣ�%d\n", Coprime_Number1, Coprime_Number2, Greatest_Common_Divisor);
	while (Inverse_Of_X < 0)
	{
		Inverse_Of_X += Coprime_Number2;	
	}
	Inverse_Of_Y = (1 - Coprime_Number1 * Inverse_Of_X) / Coprime_Number2;
	printf("%d��%d���ɵı����ʽ��һ��������Ϊ��%d,%d", Coprime_Number1, Coprime_Number2, Inverse_Of_X, Inverse_Of_Y);
	system("pause");
}

int exgcd(int Coprime_Number1, int Coprime_Number2, int &Inverse_Of_X, int &Inverse_Of_Y)	
{
	if (Coprime_Number2 == 0)     
	{
		Inverse_Of_X = 1;
		Inverse_Of_Y = 0;
		return Coprime_Number1;    
	}

	int Greatest_Common_Divisor = exgcd(Coprime_Number2, Coprime_Number1%Coprime_Number2, Inverse_Of_X, Inverse_Of_Y);
	int Middle_Number = Inverse_Of_Y;
	Inverse_Of_Y = Inverse_Of_X - (Coprime_Number1 / Coprime_Number2) * Inverse_Of_Y;
	Inverse_Of_X = Middle_Number;

	return Greatest_Common_Divisor;   
}