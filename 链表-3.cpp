#include <iostream>
using namespace std;
#define size sizeof(struct num)
struct num
{
	int number;
	struct num*next;
};
struct num*create()
{
	struct num*head;
	struct num*p1;
	struct num*p2;
	head = (struct num*)malloc(size);
	if (head == NULL)
	{
		cout << "Initialization failure!" << endl;
		exit(-1);
	}
	else
	{
		head->next = NULL;
		p1 = head;
	}
	while (1)
	{
		p2 = (struct num*)malloc(size);
		cin >> p2->number;
		if (p2->number == -1)
		{
			break;
		}
		p1->next = p2;
		p1 = p2;
		p2->next = NULL;
	}
	return head;
}
void show(struct num*p)
{
	while (1)
	{
		if (p == NULL)
		{
			break;
		}
		else
		{
			cout << p->number <<" ";
			p = p->next;
		}
	}
}
int main(int argc,char*argv[])
{
	struct num*A;
	struct num*AA;
	struct num*B1;
	struct num*B2;
	struct num*B3;
	struct num*B4;
	struct num*B5;
	struct num*B6;
	struct num*B7;
	struct num*B8;
	int a;
	int b;
	int c;
	int d;
	int i;
	cout << "Please input a list (end by -1):" << endl;
	A=create();
	cout << "Please input four integers:" << endl;
	cin >> a >> b >> c >> d;
	AA = A;
	for (i = 0; i<a-1 ; i++)
	{
		A = A->next;
	}
	B1 = A;//p1的原前趋结点
	A = A->next;
	B2 = A;//p1前

	A = AA;
	for (i = 0; i<b  ; i++)
	{
		A = A->next;
	}
	B3 = A;//p1后
	A = A->next;
	B4 = A;//p1的原后继结点

	A = AA;
	for (i = 0; i< c-1 ; i++)
	{
		A = A->next;
	}
	B5 = A;//p2的原前趋结点
	A = A->next;
	B6 = A;//p2前

	A = AA;
	for (i = 0; i<d; i++)
	{
		A = A->next;
	}
	B7 = A;//p2后
	A = A->next;
	B8 = A;//p2的原后继结点
	if(c-b!=1)
	{
		B1->next = B6;
		B3->next = B8;
		B5->next = B2;
		B7->next = B4;
	}
	else
	{
		B1->next = B6;
		B3->next = B8;
		B7->next = B2;
	}
	cout << "The new list is:" << endl;
	AA = AA->next;
	show(AA);
	system("pause");
}