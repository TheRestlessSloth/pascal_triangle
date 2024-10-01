#include <iostream>

using namespace std;

unsigned int factorial(int n);

int main()
{
	int n = 10, i, j;
	for (i = 0; i <= n; i++)
	{
		cout << "n = " << i << "|\t";
		int* p = new int [i+1];
		for (j = 0; j <= i; j++)
			cout << factorial(j) << " ";
		delete[] p;
		cout << endl;
	}

	cout << endl << endl;
	
	for (int i = 0; i <= n; i++)
	{
		cout << "n = " << i << "|\t";
		int* p = new int[i+1];
		for (j = 0; j <= i; j++)
			cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
		delete[] p;
		cout << endl;
	}
	return 0;

}

unsigned int factorial(int n)
{
	unsigned int m = 1;
	while (n > 1)
		m *= n--;
	return m;
}
