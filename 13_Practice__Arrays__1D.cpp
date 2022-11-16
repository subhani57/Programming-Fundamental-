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

//Write a function, which finds whether a given array is sorted(ascending or descending both should be
//	considered sorted) or not

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

}
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

//Task - 6: Poll Results
//Forty students were asked to rate the quality of the food in the student cafeteria on a scale of 1 to 10
//(1 meaning awful and 10 meaning excellent).Write a program which asks the 40 students to take part
//in poll and the summarize results of the poll as follows.
//Here is one of the possible sample output after taking input / ratings from 40 students.

//int main()
//{
//	const int students = 40;
//	int rating[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int co = sizeof(rating) / sizeof(rating[0]);
//	int frequency[students] = { 1,1,2,2,3,3,4,4,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,8,8,9,10,10,10 };
//	int rate;
//	/*for (int i = 0;i < students;i++)
//	{
//		cin >> frequency[i];
//	}*/
//	int count = 0;
//	for (int i = 1;i <= co ;i++)
//	{
//		for (int j = 0;j < students;j++)
//		{
//			if (i == frequency[j]) {
//				count++;
//			}
//
//		}
//
//		cout << rating[i-1]<<"\t"<< count;
//		cout << endl;
//		count = 0;
//	}
//
//
//}

//Traditional password entry schemes are susceptible to “shoulder surfing” in which an attacker watches
//an unsuspecting user enter their password or PIN number and uses it later to gain access to the
//account.one way to combat this problem is with a randomized challenge - response system.In these
//systems, the user enters different information every time based on a secret in response to a randomly
//generated challenge.Consider the following scheme in which the password consists of a five - digit PIN
//number(00000 to 99999).each digit is assigned a random number that is 1, 2, or 3. The user enters
//the random numbers that correspond to their PIN instead of their actual PIN numbers.
//For example, consider an actual PIN number of 12345. To authenticate, the user would be presented
//with a screen such as :


//int main()
//{
//	srand((unsigned)time(NULL));
//	//0 1 2 3 4 5 6 7 8 9
//		//NUM: 3 2 3 1 1 3 2 2 1 3
//	int b[5] = { 1,2,3,4,5 };//pin
//	
//	int a[10];//rand()
//	int  e[5];
//	for (int i = 0;i < 10;i++)
//	{
//		a[i] = 1+rand() % 3;
//
//	}
//	for (int i = 0;i < 5;i++)
//	{
//		for (int j = 0;j <= 10;j++)
//		{
//			if (b[i] == j)
//				e[i]=a[j];
//		}
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		cout << i<<" ";
//
//	}
//	cout << endl;
//	for (int i = 0;i < 10;i++)
//	{
//		cout << a[i]<<" ";
//
//	}
//	cout << endl;
//	int c[5];//input
//	for (int i = 0;i < 5;i++)
//	{
//		cin >> c[i];
//	}
//	int d[5];//match against input
//	
//	bool cause = true;
//	for (int i = 0;i < 5;i++)
//	{
//		if (c[i] == e[i]) {}
//		else {
//			cause = false;
//			break;
//		}
//	}
//	if (cause)
//		cout << "login successfully";
//
//}

//You are given an array.You have to write a function that will print all the leaders in the array.An
//element is leader if it is greater than all the elements to its right side.The rightmost element is always
//a leader.

//int main()
//{
//	int arr[] = { 6, 7, 4, 3, 5, 2 ,4,3,2,2};
//	int count = sizeof(arr) / sizeof(arr[0]);
//	int greater = arr[0];;
//	bool value = true;;
//	int values = 1;
//	for(int j=1;j<count;j++){
//		for (int i = values;i < count;i++)
//		{
//			if (greater > arr[i]) {
//				value = true;
//			}
//			if (greater < arr[i]) {
//				value = false;
//				break;
//			}
//		}
//		values++;
//		if (value) {
//			cout << greater;
//		}
//		greater = arr[j];
//	}
//	cout << arr[count - 1];
//
//}

//Write a function which receives an array of integers(numbers can be negative too) and return the sum
//of the two elements closest to zero.

//int main()
//{
//	int arr[] = { 10,20,30,40,50 };
//	int smallestsum = arr[0]+arr[1];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < size;i++)
//	{
//		for (int j = i+1;j < size;j++)
//		{
//			if ((arr[i] + arr[j]) < smallestsum)
//				smallestsum = arr[i] + arr[i + 1];
//		}
//	}
//	cout << smallestsum;
//}

//The first line contain number of matches "N" over which the analysis is to be done.The second line contains those ratings of a batsman / bowler in those N matches.
//Output
//Print a single integer ie.the maximum consistent sum of rating of the cricketer if it is positive otherwise output 0 (zero).
//Constraint

//int main()
//{
//	/*8
//		- 1 - 4  4 - 2 0 1 4 - 5*/
//	const int N=8;
//	int arr[N] = { -1 ,-4 , 4 ,-2 ,0 ,1, 4, -5 };
//	int sum = 0;
//	int index = 0;
//	int max = 0;
//	/*for (int i = 0;i < N;i++)
//	{
//		if (arr[i] > 0) {
//			sum = arr[i];
//			index = i;
//			break;
//		}
//	}*/
//	for (int i = 0;i < N;i++)
//	{
//			sum = sum + arr[i];
//			if (sum < 0)
//			{
//				sum = 0;
//			}
//			if (sum > max)
//			{
//				max = sum;
//			}
//			
//	}
//	cout << max;
//	/*const int n=8;
//	int a[n]= { -1 ,-4 , 4 ,-2 ,0 ,1, 4, -5 };
//	int sum = 0, max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum =sum + a[i];
//		if (sum < 0) {
//			sum = 0;
//		}
//		if (sum > max) {
//			max = sum;
//		}
//	}
//	cout << max << "\n";*/
//}

//Given an array of non - negative integers of size N, rearrange the array elements such that it contains all the even
//elements, followed by all the odd elements.
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	const int size = sizeof(arr) / sizeof(arr[0]);
//	int a[size];
//	int index = 0;
//	for (int i = 0;i < size;i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			a[index] = arr[i];
//			index++;
//		}
//			
//	}
//	for (int i = 0;i < size;i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			a[index] = arr[i];
//			index++;
//		}
//
//	}
//	for (int i = 0;i < size;i++)
//	{
//		cout << a[i]<<" ";
//	}
//}



