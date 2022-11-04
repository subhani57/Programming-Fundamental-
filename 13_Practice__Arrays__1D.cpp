#include<iostream>
using namespace std;
//Write a function, which finds the minimum value in an integer array.

//int main()
//{
//	int a[] = { 10,2,3,4,5,6,7,8,9,1 };
//	int count = sizeof(a) / sizeof(a[0]);
//	int min=a[0];
//	for (int i = 0; i < count - 1; i++)
//	{
//		if (a[i] > a[i+1])
//			min=a[i+1];
//	}
//	cout<< min;
//}

//Write a function, which finds the last occurrence of the minimum value in an integer array.
//For Example :
//If the array contains 10, 12, 9, 78, 90, 9, 78, 90
//Then function should return 5, as 9 is the minimum value with its last occurrence at index 5.

//int main()
//{
//	int a[] = { 10, 12, 9, 78, 90, 9, 7, 90 };
//	int count = sizeof(a) / sizeof(a[0]);
//	int index = 0;
//	for (int i = 0; i < count - 1; i++)
//	{
//		if (a[i] >= a[i + 1])
//			index = i+1;
//	}
//	cout << index;
//}
//Q3
//Write a function, which finds whether a given array is sorted(ascending or descending both should be
//	considered sorted) or not

//int main()
//{
//	const int size = 10;
//	bool sort = false;
//	int numbers[size]={1,2,1,4,5,6,7,8,9,10};
//	/*cout << "Enter numbers: " << endl;
//	for (int i = 0; i < size; ++i) {
//		cin >> numbers[i];
//	}*/
//	int count = sizeof(numbers) / sizeof(numbers[0]);
//	int start = numbers[0];
//	for (int i = 0; i < count - 1; i++)
//	{
//		if (numbers[i] < numbers[i + 1])
//		{
//			sort = true;
//		}
//		else if (numbers[i] > numbers[i + 1])
//		{
//			sort = true;;
//		}
//		else
//		{
//			sort = false;
//			break;
//		}
//	}
//	if(sort)
//	cout << "The array is sorted ";
//}

//Write a function, which receives two arrays, and swap the contents of two equal size arrays.

int main()
{
	int a[4] = { 1,2,3,4 };
	int b[4] = { 2,3,4,5 };

	int count = sizeof(a[4]) / sizeof(a[0]);
	for (int i = 0; i < count; i++)
	{
		int temp = b[i];
		b[i] = a[i];
		a[i] = temp;

	}
	for (int i = 0; i < count; i++)
	{
		cout << a[i];
		cout << b[i];

	}

}