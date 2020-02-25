#include<iostream>
#include<ctime>
using namespace std;
#define MAX_NUM 250000
void prime_generator_3(void)
{
	int primes[MAX_NUM];
	int primeIndex = 2;
	bool isPrime;

	primes[0] = 2;
	primes[1] = 3;

	for (int p = 5; p <= MAX_NUM; p += 2)
	{
		isPrime = true;

		for (int i = 1; isPrime && primes[i] <= sqrt(p); ++i)
		{
			if (p % primes[i] == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime == true)
		{
			primes[primeIndex++] = p;
		}
	}

	for (int i = 0; i < primeIndex; ++i)
	{
		printf("%i ", primes[i]);
	}
	printf("\n");
}

int main()
{
	clock_t starttime, endtime;
	starttime = clock();
	prime_generator_3();
	endtime = clock();
	cout <<" 程序运行的时间为"<<(double)(endtime - starttime) <<"ms"<< endl;
	system("pause");
}