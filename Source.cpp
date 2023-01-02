#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}


void sortArray(int A[], int size)
{
	int i, j, temp,min;
	for (i = 0;i < size - 1;i++)
	{
		min = i;
		for (j = i + 1;j < size;j++)
			if (A[j] < A[min])
				min = j;
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
	}
}
/*elect top 1 e.name,d.salary from dbo.emp e 
 inner join on dbo.detail d 
 on d.empid=e.empid
  where empid in 
 (select top 2 name,d.salary from dbo.emp 
 inner join on dbo.detail d
  on d.empid=e.empid 
 order by aesc)*/


void sortArray(int A[], int size) {
	//int A[] = { 3,4,5,6,2,3,5,6 };

	int i,j, min, temp;
	for (i = 0;i < size -1 ;i++)
	{
		min = i;
		for (j = i + 1;j < size;j++) 
			if (A[j] < A[min])//
				min = j;
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
}

void sortarray(int A[], int size) {
	int i, j, min, temp;
	for (i = 0;i < size - 1;i++)
	{
		min = i;
		for (j = i + 1;j < size;j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;


	}
}
int main()
{
	int A[] = { 3,4,5,6,2,3,5,6 };
	const int size = sizeof(A) / sizeof(A[0]);
	//int B[size];
	sortarray(A, size);
	//int smallestelement = A[0];
	/*cout << lenght;
	for (int i = 0;i < lenght;i++)
	{
		for (int j = 0;j < i;j++) {
			if (A[i] > A[j]) {
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}*/
	for (int i = 0;i < size;i++)
	{
		cout << A[i];
	}
	int temp;
	int start = 0;
	int end = size - 1;
	while (start < end)
	{
		temp = A[start];
		A[start] = A[end];
		A[end] = temp;
		start++;
		end--;
	}
	//cout << endl;
	/*for (int i = 0;i < size;i++)
	{
		cout << A[i];
	}*/
	int B[size];
	for (int i = 0;i <=2;i++)
	{
		B[i] = A[i];
	}
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << B[i];
	}

}