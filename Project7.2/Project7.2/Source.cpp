#include <iostream>
#include <list>
#include <ctime>

using namespace std;

void create(list <double> &list, int n)
{
	for (double i = 0; i < n; i++)
		list.push_back(rand() % 100 - 50);
}

void print(list <double> list, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		list.pop_front();
		cout << k << " ";
		list.push_back(k);
	}
	cout << endl;
}

double count(list <double> list, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		list.pop_front();
			if (k % 2 != 0)
			{
				count++;
			}
		list.push_back(k);
	}
	return count;
}

int main()
{
	srand((unsigned int)time(NULL));

	int n;
	cout << "n = "; cin >> n;

	list<double> arr;
	create(arr, n);
	print(arr, n);
	cout << "count = " << count(arr, n) << endl;

	return 0;
}
