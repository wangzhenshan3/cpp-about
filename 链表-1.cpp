#include <iostream>
using namespace std;
#define size sizeof(struct student)
int main(int argc,char*argv[])
{
	struct student
	{
		char name[20];
		int num;
		int score;
		struct student*next;
	};
	int n = 0;
	int i = 0;
	int p = 0;
	struct student*head;
	struct student*p1;
	struct student*p2;
	struct student*p3;
	struct student*p4;
	head = (struct student*)malloc(size);
	if(head==NULL)
	{
		cout << "Initialization failure!" << endl;
		exit(-1);
	}
	else
	{
		head->next = NULL;
		p1 = head;
		cout << "Please input the informnation of the students:" << endl;
	}
	while(1)
	{
		p2 = (struct student*)malloc(size);
		cin >> p2->name;
		if (string(p2->name) == "#####") 
		{
			break;
		}
		cin >> p2->num; 
		cin >> p2->score;		
		p1->next = p2;
		p1 = p2;
		n++;
		i = 0;
	}
	p3 = head;
	p3 = p3->next;
	p4 = p3;

	for (i = 0; i<n; i++)
	{
		if (p3->score < 1400) {
			p4 = p3->next;
		}
		else
		{
			p4->next = p3->next;
			p++;
			p4 = p4->next;
		}
		p3 = p3->next;
	}
	cout << "There are " << p << " students'score higher than 1400. They are:" << endl;
	p3 = head;
	p3 = p3->next;
	p4 = p3;
	for(i=0;i<n;i++)
	{
		if (p3->score < 1400) {
			p4= p3->next;
		}
		else
		{
			p4->next = p3->next;
			cout << "Name:" << p4->name << endl;
			cout << "ID:" << p4->num << endl;
			cout << "Score:" << p4->score << endl;
			p4 = p4->next;
		}
		p3 = p3->next;
	}
	system("pause");
}