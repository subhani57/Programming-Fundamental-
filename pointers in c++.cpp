#include<iostream>
using namespace std;
//array as function argument
//array are always passed as reference paramerter
void Double(int A[], int size)//int *A(same)
{
	int i, sum = 0;
	//int size =  sizeof(A) / sizeof(A[0]);
	//cout << sizeof(A);
	//cout << sizeof(A[0]);

	for (int i = 0;i < size;i++)
	{
		//sum += A[i];//A[i] is *(A+i) 
		A[i] = 2 * A[i];
	} 
	//return sum;
}
//int main()
//{
//	int A[] = { 1,2,3,4,5 };
//	int size = sizeof(A)/sizeof(A[0]);
//	/*cout << sizeof(A);
//	cout << sizeof(A[0]);*/
//	//int total = SumofElements(&A[0], size);//A can be used for &A[0]
//	Double(&A[0], size);//A can be used for &A[0]
//	for (int i = 0;i < size;i++)
//	{
//		//sum += A[i];//A[i] is *(A+i) 
//		cout << A[i];
//	}
//
//	//cout << total;
//}

//Charaters Arrays and Pointers 

//string : groups of charaters 
//how to store strings
//size of arrays> no of charaters +1 coz '\0'
//""john""i am feeling lucky" string 
int main()
{
	/*char C[]="JOHN";
	char ch[5] = { 'J','o','h','n','\0' };
	int len = strlen(C);
	cout << sizeof(C);
	cout << len;
	cout << C;*/

	//arrays and pointers are different types that are used in similar manner
	char c[6] = "HEllo";
	char* c2;
	c2 = c;//valid
	cout << c2[1];
	c2[0] = 'A';//*(c2+i)
	cout << c2;   
	 //array are always pas sed ot function by reference


}
