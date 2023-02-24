#include <iostream>
#include <string>
using namespace std;

long lucky_tickets(long size) {
	long count = 0;

	long start = pow(10, size / 2);
	long end = pow(10, size / 2) * 2;

	for (long i = start; i < end; i++)
	{
		for (long j = start; j < end; j++)
		{
			if (i % 10 + (i % 100) / 10 + (i / 100) % 10 == j % 10 + (j % 100) / 10 + (j / 100) % 10) {
				count++;
			}
		}
	}
	return count;
}



int main()
{
	string str;

	cout << "Enter tiraj: "; cin >> str;
	int size = str.length() - 1;
	cout << "Amount of lucky tickets: " << lucky_tickets(size) << endl;
	cout << endl << "Veroyatnost': kajdiy " << pow(10, size) / lucky_tickets(size) << " bilet, bilet bydet s4astlivym" << endl;
}
