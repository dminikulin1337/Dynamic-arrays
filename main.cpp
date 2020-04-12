#include<iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int* arr, const int n);
void Odd(int* arr, const int n);
void Even(int* arr, const int n);

void main() 
{
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Odd(arr, n);
	cout << endl;
	Even(arr, n);
	delete[] arr;
}

void FillRand(int* arr, const int n)
{
	for (int i = 0; i < n; i++) 
	{
		arr[i] = rand() % 100;
	}
}

void Print(int* arr, const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Odd(int* arr, const int n) 
{
	int on = 0;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] % 2 == 1) 
		{
			on++;
		}
	}
	int* orr = new int[on];
	int oid = 0;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] % 2 == 1) 
		{
			orr[oid] = arr[i];
			oid++;
		}
	}
	Print(orr, on);
	delete[] orr;
}

void Even(int* arr, const int n) 
{
	int en = 0;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] % 2 == 0) 
		{
			en++;
		}
	}
	int* err = new int[en];
	int eid = 0;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] % 2 == 0) 
		{
			err[eid] = arr[i];
			eid++;
		}
	}
	Print(err, en);
	delete[] err;
}
