
#include<iostream>
#include<iomanip>
#include<locale.h>
#include<Windows.h>

using namespace std;

void FillArray(int A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 0 + rand() % 100;
		cout << A[i] << endl;
	}
}

int SumArray(int A[], int n)
{
	if (n == 0)
	{
		return A[n-1] ;
	}
	return A[n - 1 ] + SumArray(A, n - 1);
}

int MaxNumber(int A[], int n)
{
	static int Max = A[0];
	if (n == 1)
	{
		return A[n - 1];
	}
	if (Max < A[n - 1])
		Max = A[n - 1];

	MaxNumber(A, n - 1);
	return Max;
	

}

int Binary(int A[], int low, int high)
{
	if (low == high)
	{
		return A[low];
	}

	int middle = (low + high) / 2;

	return Binary(A, low, middle);


}

int Diapason(int a , int b)
{
	static int tmp = a;
	if (a == b )
	{
		return -tmp;
	}
	return a + Diapason(a + 1, b);
}

void Star(int n)
{
	if (n == 0)return;
	char c = '*';
	Star(n - 1);
	cout << c << " ";
}

int xy(int x, int y)
{
	int answer;
	if (y == 0)
	{
		return 0;
	}
	answer = xy(x, y - 1) + x;
	return answer;
}

void print(int n)
{
	if (n == 0)return;
	char c;
	cin >> c;
	print(n - 1);
	cout << c << endl;
}

int recPower(double x, int y);

int factr(int n);

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 100;
	int flag;
	int A[5];
	do
	{

		FillArray(A, 5);
		cout << MaxNumber(A, 5) << endl;

		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

}

int factr(int n)
{
	int answer;
	if (n == 1) return 1;
	answer = factr(n - 1)*n;
	cout << answer << endl;
	return(answer);
}

int recPower(double x, int y)
{
	double answer;
	if (pow(x, y) == 1)
	{
		return 1;
	}

	answer = x * recPower(x, y - 1);
	return answer;

}