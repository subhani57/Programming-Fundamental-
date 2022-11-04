//#include "_06_Practice__Arithmetic_Operators__Data_Types__Input.h"
//
//#include<iostream>
//using namespace std;
////Q1
////Write a program that prints Bjarne(creator of C++) on the console in the following manner :
//
/////Q2
////int main() {
////	char test = '"';
////	int rows=10;
////	int i,count=0,k=0,count1=0,j;
////	cout << "Enter the Number of Rows";
////	cin >> rows;
////	int space;
////	for (int i = 1;i <= rows/2+1;++i)
////	{
////		for (space = 1; space <= ((rows / 2) - i)+1; ++space) {
////			printf(" ");
////		}
////		for (int j = 1;j < (i * 2);j++)
////		{
////			cout << test;
////		}
////		cout << "\n";
////	}
////	for (i = (rows/2); i >= 1; --i) {
////		for (space = 0; space < (((rows+1)/2) - i)+1; space++)
////			printf(" ");
////		for (j = i; j <= 2 * i - 1; ++j)
////			cout << test;
////		for (j = 0; j < i - 1; ++j)
////			cout << test;
////		printf("\n");
////	}
//// }
//	//A customer in a store is purchasing five items.The prices of the five items are :
//	//Price of item 1 = $12.95
//	//	Price of item 2 = $24.95
//	//	Price of item 3 = $6.95
//	//	Price of item 4 = $14.95
//	//	Price of item 5 = $3.95
//	//	Write a program that holds the prices of the five items in five variables.Display each items
//	//	price, the subtotal of the sale, the amount of sales tax, and the total.Assume the sales tax is
//	//	6 % .
//
////int main()
////{
////	const int total_items = 5;
////	double items[total_items];
////	items[0] = 12.95;
////	items[1] = 24.95;
////	items[2] = 6.95;
////	items[3] = 14.95;
////	items[4] = 3.95;
////	double sub_total=0;
////	for (int i = 0;i < total_items;i++) {
////		sub_total=sub_total + items[i];
////		cout << items[i]<<endl;
////
////	}
////	cout << sub_total<<endl;
////	double sales_tax;
////	sales_tax = sub_total * 0.06;
////	double total;
////	total = sub_total * sales_tax;
////	cout << total;
////
////}
//
////One acre of land is equivalent to 43, 560 square feet.Write a program that calculates the
////number of acres in a tract of land with 389, 767 square feet.You are not allowed to declare any
////variable or constant.
//
//
////int main()
////{
////	//Write a C++ program that stores the elapsed time for an event in a variable.The program then
////	//	outputs the elapsed time in hours, minutes, and seconds. (For example, if the elapsed time is
////	//		9630 seconds, then the output is 2:40 : 30)
////
////	int secElapsed, hours, min, sec;
////
////	const int secPerMin = 60;
////	const int secPerHour = 60 * secPerMin;
////
////	cout << "Enter the number of seconds elapsed: ";
////	cin >> secElapsed;
////
////	hours = secElapsed / secPerHour;
////	secElapsed = secElapsed % secPerHour;
////	min = secElapsed / secPerMin;
////	sec = secElapsed % secPerMin;
////
////	cout << hours << ":" << min << ":" << sec << endl;
////	return 0;
////}
////	
//
////compute sum
////int main()
////{
////	int start, end;
////	cout << "Enter the start of range";
////	cin >> start;
////	cout << "Enter the end of range";
////	cin >> end;
////	int sum = 0;
////	for (int i = start;i <= end;i++)
////	{
////		sum = sum + i;
////	}
////	cout << "The range sum is ";
////	cout << sum;
////}
//	
