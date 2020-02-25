#include <iostream>
#define HASH_TABLE 30
#define ARR_LEN 20

void print_hash_table(int hash_table[], int hash_len)
{
	for (int i = 0; i < hash_len; i++)
	{
		std::cout << "hash_table[" << i << "]:" << hash_table[i] << std::endl;
	}
}

void linear_probing(int arr[], int len)
{
	int hash_table[HASH_TABLE] = { 0 };
	for (int i = 0; i < len; i++)
	{
		int index = arr[i] % 10;
		if (hash_table[index] == 0)
			hash_table[index] = arr[i];
		else
		{
			index = (index + 1) % HASH_TABLE;
			while (hash_table[index] != 0)
			{
				index = (index + 1) % HASH_TABLE;
			}
			hash_table[index] = arr[i];
		}
	}

	std::cout << "����̽�ⷨ��" << std::endl;
	print_hash_table(hash_table, HASH_TABLE);
}



void quadratic_probing(int arr[], int len)
{
	int hash_table[HASH_TABLE] = { 0 };
	for (int i = 0; i < len; i++)
	{
		int index = arr[i] % 10;
		if (hash_table[index] == 0)
			hash_table[index] = arr[i];
		else
		{
			int k = 1;
			while (hash_table[index] != 0)
			{
				index = (index + (int)pow(k, 2)) % HASH_TABLE;
				k++;
			}
			hash_table[index] = arr[i];
		}
	}

	std::cout << "ƽ��̽�ⷨ��" << std::endl;
	print_hash_table(hash_table, HASH_TABLE);
}


#define R 7
void double_hashing(int arr[], int len)
{
	//hash2 = R-(x mod R)
	int hash_table[HASH_TABLE] = { 0 };
	for (int i = 0; i < len; i++)
	{
		int index = arr[i] % 10;
		if (hash_table[index] == 0)
			hash_table[index] = arr[i];
		else
		{
			int k = 1;
			while (hash_table[index] != 0)
			{
				index = (k* (R - (arr[i] % R))) % HASH_TABLE;
				k++;
			}
			hash_table[index] = arr[i];
		}
	}

	std::cout << "��ɢ�з���" << std::endl;
	print_hash_table(hash_table, HASH_TABLE);
}




void separate_chain(int arr[], int len)
{
	struct hash_node
	{
		hash_node * next;
		int key;
		hash_node()
		{
			next = NULL;
			key = 0;
		}
	};
	using hash_node = struct hash_node;
	hash_node hash_table[HASH_TABLE];

	for (int i = 0; i < len; i++)
	{
		int index = arr[i] % 10;
		hash_node * node = new hash_node;;
		node->key = arr[i];
		node->next = hash_table[index].next;
		hash_table[index].next = node;
	}

	std::cout << "��������" << std::endl;
	for (int i = 0; i < HASH_TABLE; i++)
	{
		if (hash_table[i].next != NULL)
		{
			hash_node * node = hash_table[i].next;
			std::cout << "hash_table[" << i << "]:";
			while (node != NULL)
			{
				std::cout << node->key << " ";
				node = node->next;
			}
			std::cout << std::endl;
		}
	}

}
int main()
{
	int arr[ARR_LEN] = { 7,134,23,623,81,22,17,208,45,70,
1,6,14,25,22,14,65,3,59,44 };

	linear_probing(arr, ARR_LEN);
	quadratic_probing(arr, ARR_LEN);
	double_hashing(arr, ARR_LEN);
	separate_chain(arr, ARR_LEN);
	system("pause");
	return 0;
}