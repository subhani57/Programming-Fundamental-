#include<iostream>
#include <vector>
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

int getAverage(int arr[][3])
{
	int sum = getTotal(arr);
	int count = 0;;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			count++;
		}
	}
	int average = sum / count;
	return average;
}
const int ROWS = 3,
COLUMNS = 4;
int getRowTotal(const int arr[ROWS][COLUMNS], const int row)
{
	int row_total = 0;
	for (int col = 0;col < COLUMNS;col++)
	{
		row_total = row_total + arr[(row - 1)][col];
	}
	return row_total;
}

int getColumnTotal(const int arr[ROWS][COLUMNS], const int col)
{
	int col_total = 0;
	for (int row = 0;row < ROWS;row++)
	{
		col_total = col_total + arr[row][col - 1];
	}
	return col_total;

}


int getHighestInRow(const int arr[ROWS][COLUMNS], const int row)
{
	int max = arr[row][0];
	for (int col = 0;col < COLUMNS;col++)
	{
		if (max < arr[(row - 1)][col]) {
			max = arr[(row - 1)][col];
		}
	}
	return max;

}

int getLowestInRow(const int arr[ROWS][COLUMNS], const int row)
{
	int min = arr[row - 1][0];
	for (int col = 0;col < COLUMNS;col++)
	{
		if (min > arr[(row - 1)][col])
			min = arr[(row - 1)][col];

	}
	return min;
}
//int main()
//{
//	int ar[][4]={
//		{1,2,3,4},
//		{1,2,3},
//		{1,2,3}
//	};
//
//	//cout<<getRowTotal(ar,1);
//	cout << endl;;
//
//	//cout << getColumnTotal(ar, 2);
//	//cout << getHighestInRow(ar, 2);
//
//	//cout << getLowestInRow(ar, 1);
//
//	
//	
//	
//	
//	//cout<<getAverage(ar);
//	/*int* array[10];
//	for (int i = 0; i < 10; i++)
//		array[i] = new int[10];
//	passFunc[array];*/
//
//}

//Task - 2: Saddle Points
//Write a program to search for the "saddle points" in a 5 by 5 array of integers.A saddle point is a cell
//whose value is greater than or equal to any in its row, and less than or equal to any in its column.
//There may be more than one saddle point in the array.Print out the coordinates of any saddle points
//your program finds.Print out "No saddle points" if there are none.
// C++ program to illustrate Saddle point

const int MAX = 100;

// Function to find saddle point
bool findSaddlePoint(int mat[MAX][MAX], int n)
{
	// Process all rows one by one
	for (int i = 0; i < n; i++)
	{
		// Find the minimum element of row i.
		// Also find column index of the minimum element
		int min_row = mat[i][0],
			col_ind = 0;
		for (int j = 1; j < n; j++)
		{
			if (min_row > mat[i][j])
			{
				min_row = mat[i][j];
				col_ind = j;
			}
		}

		// Check if the minimum element of row is also
		// the maximum element of column or not
		int k;
		for (k = 0; k < n; k++) {

			// Note that col_ind is fixed
			if (min_row < mat[k][col_ind])
				break;
		}

		// If saddle point is present in this row then
		// print it
		if (k == n)
		{
			cout << "Value of Saddle Point " << min_row;
			cout << endl;
			return true;
		}
	}

	// If Saddle Point not found
	return false;
}

// Driver code
//int main()
//{
//	int mat[MAX][MAX] = { {1, 2, 3,4,5},
//						{6,7,8,9,10},
//						{13,12,13},
//		{16,17,18,19,20},
//		{21,22,23,24,25},
//	};
//	int n = 3;
//
//	for (int i = 1;i <= 5;i++) {
//		if (findSaddlePoint(mat, i) == false) {
//			cout << endl;
//			cout << "No Saddle Point ";
//			cout << endl;
//		}
//	}
//	return 0;
//}

//void hunt(int mul_arr[5][5])
//{
//	int current = mul_arr[0][0];
//	//printf("\n\nCurrent:%d\n", current);
//	int units = 0, tens = 0;
//	while (current != (tens * 10 + units))
//	{
//		units = current % 10;
//		tens = current / 10;
//		current = mul_arr[tens - 1][units - 1];
//		printf("\nVisiting Row:%d and Column:%d", tens, units);
//	}
//	printf("\n\nTreasure found!! Row:%d and Column:%d\n\n", tens, units);
//}
//

//void hunter(int mul_arr[5][5]) {
//	int current = mul_arr[0][0];
//
//		
//
//
//
//}
//
//int main(void)
//{
//	int arr[5][5] = {
//					   {34,21,32,41,25},
//					   {14,42,43,14,31},
//					   {54,45,52,42,23},
//					   {33,15,51,31,35},
//					   {21,52,33,13,23}
//	};
//	int row, column;
//	printf("\n");
//	for (row = 0;row < 5;row++)
//	{
//		for (column = 0;column < 5;column++)
//		{
//			printf("%d\t", arr[row][column]);
//		}
//		printf("\n-----------------------------------------\n");
//	}
//	printf("\n");
//	hunt(arr);
//	return 0;
//}


//int min_jumps(int arr[], int start, int end)
//{
//	if (start == end)
//		return 0;
//
//	int min = INT_MAX;  // Max value of int
//
//	for (int idx = 1; arr[start] >= idx && end >= start + idx; idx++)
//	{
//		int jumps = min_jumps(arr, start + idx, end) + 1;
//		if (min > jumps)
//			min = jumps;
//	}
//	return min;
//}
//
//int main()
//{
//	int arr[] = { 1, 1, 2, 3, 1, 1, 1, 1, 4, 1 };
//	int lenOfArr = sizeof(arr) / sizeof(arr[0]);
//	int ans = min_jumps(arr, 0, lenOfArr);
//	cout<<ans;
//}

//IS the Queen Safe?

bool canQueenAttack(int qx, int qy, int ox, int oy)
{
	if (qx == ox)
		return true;
	if (qy == oy)
		return true;
	if(abs(qx-ox)==abs(qy-oy))
		return true;

	return false;;
}

//int main()
//{
//	int qR = 1, qC = 1;
//	int oR = 3, oC = 2;
//	if (canQueenAttack(qR, qC, oR, oC))
//		cout << "Yes";
//	else
//		cout << "No";
//
//	return 0;
//
//}

//Task – 5: Maximum Sum sub - matrix

// C++ program for the above approach

// Function to find maximum sum submatrix

//const int ROWS = 6; // Number of rows in table1
const int COLS = 5; // Number of columns in each array
void maxSubmatrixSum(int matrix[ROWS][COLS])
{
	// Stores the number of rows
	// and columns in the matrix
	int c = COLS;

	// Stores maximum submatrix sum
	int maxSubmatrix = 0;

	// Take each row as starting row
	for (int i = 0; i < ROWS; i++) {

		// Take each column as the
		// starting column
		for (int j = 0; j < COLS; j++) {

			// Take each row as the
			// ending row
			for (int k = i; k < ROWS; k++) {

				// Take each column as
				// the ending column
				for (int l = j; l < COLS; l++) {

					// Stores the sum of submatrix
					// having topleft index(i, j)
					// and bottom right index (k, l)
					int sumSubmatrix = 0;

					// Iterate the submatrix
					// row-wise and calculate its sum
					for (int m = i; m <= k; m++) {
						for (int n = j; n <= l; n++) {
							sumSubmatrix += matrix[m][n];
						}
					}

					// Update the maximum sum
					maxSubmatrix
						= max(maxSubmatrix,sumSubmatrix);
				}
			}
		}
	}

	// Print the answer
	cout << maxSubmatrix;
}

// Driver Code
//int main()
//{
//	int a[ROWS+3][COLS] = {
//		{ 0, -2, -7, 0,-1 },
//		{9, 2, -6, 2 ,0},
//		{ -4, 1, -4, 1,0 },
//		{-1, 8, 0, -2 ,1} ,
//		{-10, 6, 1, -5 ,6} ,
//		{-15, -1, 1, 5 ,-4} ,
//	};
//
//	maxSubmatrixSum(a);
//
//	return 0;
//}
