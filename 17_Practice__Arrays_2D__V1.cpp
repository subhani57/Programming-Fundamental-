#include<iostream>
using namespace std;
//Write a program that creates a two - dimensional array initialized with test data.Use any data type you
//wish(except char).The program should have the following functions :
//• getTotal.This function should accept a two - dimensional array as its argument and return the
//total of all the values in the array.
//• getAverage.This function should accept a two - dimensional array as its argument and return the
//average of all the values in the array.
//• getRowTotal.This function should accept a two - dimensional array as its first argument and an
//integer as its second argument.The second argument should be the subscript of a row in the
//array.The function should return the total of the values in the specified row.
//• getColumnTotal.This function should accept a two - dimensional array as its first argument and
//an integer as its second argument.The second argument should be the subscript of a column in
//the array.The function should return the total of the values in the specified column.
//• getHighestInRow.This function should accept a two - dimensional array as its first argument and
//an integer as its second argument.The second argument should be the subscript of a row in
//the array.The function should return the highest value in the specified row of the array.
//• getLowestInRow.This function should accept a two - dimensional array as its first argument and
//an integer as its second argument.The second argument should be the subscript of a row in the
//array.The function should return the lowest value in the specified row of the array.
//Demonstrate each of the functions in this program.
int getTotal(int arr[][3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return sum;
}
void passFunc(int* a[10]) //Array containing pointers
{
	cout << *a[1];
}

int main()
{
	int ar[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	cout<<getTotal(ar);
	int* array[10];
	for (int i = 0; i < 10; i++)
		array[i] = new int[10];
	passFunc[array];

}