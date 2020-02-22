#include <iostream>
using namespace std;
#define size sizeof(struct num)
int gay;
struct num
{
	int number;
	struct num*next;
};
struct num*create_0()
{
	struct num*head;
	head = (struct num*)malloc(size);
	if(head==NULL)
	{
		cout << "Initialization failure!" << endl;
		exit(-1);
	}
	else
	{
		head->next = NULL;
	}
	return head;
}
void set(struct num*head,int c)
{
	struct num*c1;
	struct num*c2;
	c1 = head;
	while (c1->next!= NULL)
	{
		c1 = c1->next;
	}
	c2 = (struct num*)malloc(size);
	c2->number = c;
	c1->next = c2;
	c2->next = NULL;
}
void show(struct num*p)
{
	while(1)
	{
		if(p==NULL)
		{
			break;
		}
		else
		{
			cout << p->number << " ";
			p=p->next;
		}
	}
	cout << endl;
}
struct num*create()
{
	struct num*head;
	struct num*p1;
	struct num*p2;
	gay = 0;
	head = (struct num*)malloc(size);
	if(head==NULL)
	{
		cout << "Initialization failure!" << endl;
		exit(-1);
	}
	else
	{
		head->next = NULL;
		p1 = head;
	}
	while(1)
	{
		p2 = (struct num*)malloc(size);
		cin >> p2->number;
		if (p2->number==-1) 
		{
			break;
		}		
		p1->next = p2;
		p1 = p2;
		gay++;
	}
	return head;
}
int main(int argc,char*argv[])
{
	struct num*A;
	struct num*B;
	struct num*C;
	struct num*D;
	struct num*gaygay;
	int mark1;
	int mark2;
	int i;
	int i2;
	int n;
	int p = 0;
	cout << "Please input the elements of list A:" << endl;
	A=create();
	mark1 = gay;
	cout << "Please input the elements of list B:" << endl;
	B=create();
	mark2 = gay;
	A = A->next;
	B = B->next;
	C = create_0();
	D = create_0();
	gaygay = B;
	for (i = 0; i<mark1; i++)
	{
		B = gaygay;
		for(i2=0;i2<mark2;i2++)
		{
			if(A->number==B->number)
			{
				p = 1;
				n = A->number;
				set(C, n);
				break;
			}
			else
			{
				;
			}
			B = B->next;
		}
		if(p==0)
		{
			n = A->number;
			set(D, n);
		}
		A = A->next;
		p = 0;
	}
	if(D->next==NULL)
	{
		cout << "There is no item in C1 list." << endl;
	}
	else
	{
		D = D->next;
		cout << "The list C1:" << endl;
		show(D);
	}
	if(C->next==NULL)
	{
		cout << "There is no item in C2 list." << endl;
	}
	else
	{
		C = C->next;
		cout << "The list C2:" << endl;
		show(C);
	}
	system("pause");
}