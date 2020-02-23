#include <iostream>
using namespace std;
#define SIZE sizeof(struct list)
class poi
{
private:
	struct list
	{
		int num;
		struct list *next;
	};
	struct list *head;
	struct list *p1;
	int mark;
public:
	struct list*A;
	struct list*B;
	struct list* create();
	void print(struct list*head);
	struct list* insert(struct list*head);
	struct list* del(struct list*head);
};
struct poi::list* poi::create()
{
	head = (struct list*)malloc(SIZE);
	head->next = NULL;
	cout << "请输入要插入的数值，输入-1结束输入" << endl;
	while(1)
	{
		cin >> mark;
		if(mark==-1)
		{
			break;
		}
		else
		{
			p1 = (struct list*)malloc(SIZE);
			p1->num = mark;
			p1->next = head->next;
			head->next = p1;
		}
	}
	return head;
}
void poi::print(struct list*head)
{
	head = head->next;
	cout << "该链表为" << endl;
	while(1)
	{
		if(head->next==NULL)
		{
			cout << head->num << '\t';
			break;
		}
		else
		{
			cout << head->num << '\t';
			head = head->next;
		}
	}
}
struct poi::list* poi::insert(struct list*head)
{
	cout << "请输入要插入的数据" << endl;
	cin >> mark;
	p1 = (struct list*)malloc(SIZE);
	p1->num = mark;
	p1->next = head->next;
	head->next = p1;
	cout << "插入完成" << endl;
	return head;
};
struct poi::list* poi::del(struct list*head)
{
	B = head;
	cout << "请输入要删除的数据（仅删除第一个该数据）" << endl;
	cin >> mark;
	while (1)
	{
		if (head->next == NULL)
		{
			cout << "该数据不存在" << endl;
			break;
		}
		else if(head->next->num==mark)
		{
			head->next = head->next->next;
			cout << "删除成功" << endl;
			break;
		}
		else
		{
			head = head->next;
		}
	}
	return B;
};
int main(int argc,char*argv[])
{
	int p;
	poi nico;
	nico.A=nico.create();
	while(1)
	{
		cout << "请输入操作" << endl;
		cout << "1：插入一个新数据" << endl;
		cout << "2：删除一个数据" << endl;
		cout << "3：打印整个链表" << endl;
		cout << "4：程序结束" << endl;
		cin >> p;
		if (p == 1)
		{
			nico.A = nico.insert(nico.A);
		}
		else if (p == 2)
		{
			nico.A = nico.del(nico.A);
		}
		else if (p == 3)
		{
			nico.print(nico.A);
		}
		else if (p == 4)
		{
			break;
		}
	}
	system("pause");
}