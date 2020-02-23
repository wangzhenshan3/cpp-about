#include <iostream>
#include<cstring>
using namespace std;
class complex
{
private:
	double real;
	double imag;
public:
	void print();
	complex(double A,double B)
	{
		real = A;
		imag = B;
	}
	complex() 
	{
		cout << "请输入该复数的实数和虚数" << endl;
		cin >> real;
		cin >> imag;
	};
	complex operator +(complex &c);
	complex operator -(complex &c);
	complex operator *(complex &c);
	complex operator /(complex &c);

};
void complex::print()
{
	if (imag < 0) 
	{ 
		cout << real << imag << "i"<<endl; 
	}
	else if (imag > 0) 
	{
		cout << real << "+"<< imag << "i"<<endl; 
	}
	else 
	{
		cout << real << endl; 
	}

}
complex complex::operator+(complex &c)
{
	return complex(real + c.real, imag + c.imag);
}
complex complex::operator -(complex &c)
{
	return complex(real - c.real, imag - c.imag);
}

complex complex::operator *(complex &c)
{
	return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

complex complex::operator /(complex &c)
{
	return complex((real * c.real + imag + c.imag) / (c.real * c.real + c.imag * c.imag),
		(imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag));
}
class str
{
private:
	char *p;
public:
	str(char *s)
	{
		p = new char[strlen(s) + 1];
		strcpy_s(p, 10,s);
	}
	str()
	{
		p = 0;
	}
	str& operator =(char*p);

	int operator <(str&s)
	{
		return strcmp(p, s.p) > 0;
	}
	int operator >(str&s)
	{
		return strcmp(p, s.p) < 0;
	}
	int operator==(str&s)
	{
		return strcmp(p, s.p) == 0;
	}
};
str& str::operator=(char*p)
{
	*this = str(p);
	return *this;
}

int main(int argc,char*argv[])
{
	string s1("study"), s2("C++"), s3, s4;
	s3 = s1;
	s4 = s2;
	int mark;
	complex c1, c2, c3(0,0);
	cout << "请输入对这两个复数进行的操作" << endl;
	cout << "1：加" << endl;
	cout << "2：减" << endl;
	cout << "3：乘" << endl;
	cout << "4：除" << endl;
	cin >> mark;
	if(mark==1)
	{
		c3 = c1 + c2;
	}
	else if(mark==2)
	{
		c3 = c1 - c2;
	}
	else if(mark==3)
	{
		c3 = c1 * c2;
	}
	else
	{
		c3 = c1 / c2;
	}
	c3.print();
	system("pause");
}