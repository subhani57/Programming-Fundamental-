#include<iostream>
using namespace std;
//perform a statistical experiment by developing a solution to flip a coin(use rand() function) a given
//amount of timesand then print the number of headsand the number of tails.
//int main()
//{
//	/* retrieve a random number between 100 and 200*/
//		// offset = 100
//		// range = 101
//	int count;
//	cout << "How many time u want to flip the coin  ";
//	cin >> count;
//	int head_count = 0;
//	int tail_count = 0;
//
//	srand((unsigned)time(NULL));
//	for (int i = 1;i <= count;i++) {
//		int value = (rand() %2);
//		if (value == 0)
//			head_count++;
//		else
//			tail_count++;
//	}
//	cout << "Count of head is " << head_count << endl;;
//	cout << "Count of tail is " << tail_count;
//
//
//}

//Write a program, which prints the Nth terms of the Fibonacci sequence.If N = 5 then your program
//display 3.
//Fibonacci Sequence : 0, 1, 1, 2, 3, 5, 8, 13, 21, …

//int main()
//{
//	int n1 = 0;
//	int n2 = 1;
//	cout << n1;
//	cout << n2;
//	int temp;
//	int sum = 0;
//
//;	for (int i = 1;i < 20;i++) {
//	sum = n1 + n2;
//	temp = n1;
//	n1 = n2;
//	n2 = sum;
//	
//	cout << sum<<",";
//	}
//}

//Using loops : do the task titled ABRACADABARA given in Practice - 8.
//When you done with this then change the problem by taking range from user instead of fixing it from 1
//to 1000.

//A teacher has asked all her students to line up according to their first name.For example, in one class
//Amy will be at the front of the lineand Yolanda will be at the end.Write a program that prompts the
//user to enter the number of students in the class, and then loops to read in that many names along
//with their ages as well(If two students have same name then the decision will be made on the basis of
//	their age).Once all the names have been read in, it reports which student would be at the front of the
//	lineand which one would be at the end of the line.
//	Input Validation : Do not accept a number less than 1 or greater than 25 for the number of students
//	and also don’t accept age less than 1.

//int main()
//{
//   string student, first, last;
//   int age;
//   
//   
//
//   int strenght_of_class;
//   cout << "Strenght of class";
//   cin >> strenght_of_class;
//
//
//   cout << "Enter the first name of student";
//   cin >> student;
//
//   cout << "enter the age of studnet";
//   cin >> age;
//   first = last = student;
//   int first_age=0;
//   int last_age=0;
//
//   for (int i = 1;i < strenght_of_class;i++)
//   {
//	   cout << "Enter the name of student No. "
//		   << (i + 1) << ": ";
//	   cin >> student;
//	   cout << "Enter the age of student No. "
//		   << (i + 1) << ": ";
//	   cin >> age;
//	   if (student < first) {
//		   first = student;
//		   first_age = age;
//	   }
//	   if (student > last) {
//		   last = student;
//		   last_age = age;
//	   }
//	   if (student == first)
//	   {
//		   first_age = age;
//	   }
//	   if (student == last)
//	   {
//		   last_age = age;
//	   }
//
//   }
//
//
//   cout << "First student in line = "
//	   << first <<"  AGe is  "<<first_age<< endl;
//
//   cout << "Last student in line  = "
//	   << last << endl;
//
//}

//
//Write a program, which calculates the sum of first ‘N’ term of the following series :
//10 - 11 + 21 - 32 + 53 - 85 + 138 - 2113 + ……

#include<iomanip>
//int main()
//{
//	int n1 = 0;
//	int n2 = 1;
//	cout << pow(n2,0);
//	int temp;
//	double sum = 0;
//	double total_sum = 1;
//	for (int i = 1;i < 1000;i++)
//	{
//		sum = n1 + n2;
//		double power = pow(sum, n2);
//
//		if (i % 2 == 0)
//		{
//			total_sum = total_sum + power;
//		}
//		if (i % 2 == 1)
//		{
//			total_sum = total_sum - power;
//
//		}
//
//		temp = n1;
//		n1 = n2;
//		n2 = sum;
//
//	}
//	cout << fixed << setprecision(0) << total_sum;
//
//}


//Write a program that asks for the starting timeand the number of minutes of the calland displays the
//charges.The program should ask for the time to be entered as a floating - point number in the form
//HH.MM.For example, 07:00 hours will be entered as 07.00, and 16 : 28 hours will be entered as 16.28.
//Input Validation : The program should not accept a time value, which is greater than 23 : 59.
//Note : Call can continue for more than one day

//int main()
//{
//	float StartTime, Length, Mins, Hrs, Charges, StartMins, LengthInMins;
//
//
//	// Ask user for the starting time and the number of minutes of the call.
//	cout << "This program calculates your long-distance telephone charges.\n";
//	cout << "Enter the starting time of the call as a floating-point number\n"
//		<< "in the form HH.MM: ";
//	cin >> StartTime;
//	cout << "Enter the number of minutes of the call in the form HH.MM: ";
//	cin >> Length;
//	Hrs = static_cast<int>(Length);
//	Mins = Length - static_cast<int>(Length);
//	LengthInMins = (Hrs * 60) + (Mins * 100);
//	StartMins = StartTime - static_cast<int>(StartTime);
//
//	if (Mins <= .59 && StartMins <= .59)
//	{
//		cout << fixed << showpoint << setprecision(2);
//		if (StartTime >= 00.00 && StartTime <= 06.59)
//		{
//			Charges = LengthInMins * 0.12;
//			cout << "Cost of call: $" << Charges << endl;
//		}
//		else if (StartTime <= 19.00)
//		{
//			Charges = LengthInMins * 0.55;
//			cout << "Cost of call: $" << Charges << endl;
//		}
//		else if (StartTime <= 23.59)
//		{
//			Charges = LengthInMins * 0.35;
//			cout << "Cost of call: $" << Charges << endl;
//		}
//		else
//			cout << "Error! Call times cannot be less than\n00.00 minutes"
//			<< " or greater than 23.59 minutes.\n";
//	}
//	else
//		cout << "Error! Last two digts in the numbers"
//		<< " must be less than 59.\n";
//	return 0;
//}

//The number, 197, is called a circular prime because all rotations of the digits : 197, 971, and 719, are
//themselves prime.

//There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
//How many circular primes are there below one million ? //10,00,000
#include <iostream>
using namespace std;
using namespace std;

bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

bool checkCiruclar(int N)
{
	int temp = N;
	int count = 0;

	while (temp != 0)
	{
		count++;
		temp = temp / 10;
	}

	int num = N;
	while (isPrime(num))
	{
		int rem = num % 10;
		int div = num / 10;
		num = (pow(10, (count - 1)) * rem) + div;

		if (num == N)
			return true;

	}
	return false;

}
//int main()
//{
//    
//    int count = 0;
//    for (int i = 1;i <= 1000000;i++)
//    {
//        
//        if (checkCiruclar(i))
//        {
//            cout << i;
//            count++;
//        }
//    }
//    cout << endl;
//    cout << count;
//}
//Write C++ programs to draw the following shapes.
//The program should be generic: which means that your program will ask from the user about height
//(N) of pyramid / triangle / square and will display the shape accordingly.



//For N = 5
//….1
//…2.
//..3..
//.4…
//5….

//int main()
//{
//    int N = 5;
//    int num = N;
//    for (int i = 1;i<=N;i++)
//    {
//        for (int j = i;j < N;j++)
//        {
//            cout << ".";
//        }
//        cout << num;
//        num--;
//        for (int k=1 ;k < i;k++) {
//            
//                cout << ".";
//        }
//        cout << endl;
//    }
//}

//For N = 5
//55555
//4444
//333
//22
//1

//int main()
//{
//    int N = 5;
//    int num = N;
//    for (int i = 1;i <= N;i++)
//    {
//        for (int j = i;j <= N ;j++)
//        {
//            cout << num;;
//        }
//        num--;
//        cout << endl;
//    }
//}

//Shape - 3
//For N = 5
//---- *
//-- - **
//-- * **
//-****
//*****

//int main()
//{
//    int N = 5;
//    for (int i = 1;i <= N;i++)
//    {
//        for (int j = i;j < N;j++)
//        {
//            cout << "-";
//
//        }
//        for (int k = 1;k <= i;k++)
//        {
//            cout << "*";
//
//        }
//        cout << endl;
//    }
//}

//For N = 5
//1 2 3 4 5
//6 7 8 9
//10 11 12
//13 14
//15

//int main()
//{
//    
//    int N = 5;
//    int num = 1;
//    for (int i = 1;i <= N;i++)
//    {
//        for (int j = N;j >= i;j--)
//        {
//            cout << num<<"  ";
//            num++;
//        }
//        cout << endl;
//    }
//}

//For N = 5
//1 * 2 * 3 * 4 * 5
//1 * 2 * 3 * 4
//1 * 2 * 3
//1 * 2
//1

//int main()
//{
//    int N = 5;
//    int num = 1;
//    for (int i = 1;i <= N;i++)
//    {
//        for (int j = i;j <= N;j++)
//        {
//            cout << num;
//            if (j < N)
//            {
//                cout << "*";
//            }
//            num++;
//        }
//        num = 1;
//        cout << endl;
//    }
//}
//
//For N = 5
//1
//121
//12321
//1234321
//123454321
//1234321
//12321
//121
//1

//int main()
//{
//	int N;
//	cout << "Enter the value of N";
//	cin >> N;
//	
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			cout << num;
//			num++;
//		}
//		num = 1;
//		int num2 = i - 1;
//		for (int k = 1;k < i;k++)
//		{
//			cout << num2;;
//			num2--;
//		}
//
//		cout << endl;
//	}
//
//	//1234321
//	//12321
//	//121
//	//1
//	int new_num = 1;
//	int new_num_recursive = N - 2;;
//	for (int i = 1;i < N;i++)
//	{
//		for (int j = i;j < N;j++)
//		{
//			cout << new_num;
//			new_num++;
//		}
//		new_num = 1;
//
//		int n = new_num_recursive;
//
//		for (int k = i;k < (N-1);k++)
//		{
//			cout << n;
//			n--;
//		}
//		new_num_recursive--;
//
//		cout << endl;
//	}
//}

//
//For N = 5
//1 1
//2 1 1 2
//3 2 1 1 2 3
//4 3 2 1 1 234
//5 4 3 2 1 1 2 3 4 5

//int main()
//{
//	int N = 5;
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		int n = num;
//		for (int j = 1;j <= i;j++)
//		{
//			cout << n<<" ";
//			n--;
//		}
//		int n2 = 1;
//		for (int j = 1;j <= i;j++)
//		{
//			cout << n2<<" ";
//			n2++;
//		}
//		n2=1;
//		num++;
//
//		
//		
//
//		cout << endl;
//	}
//}

//For N = 5
//123456789
//2345678
//34567
//456
//5

//int main()
//{
//	int N = 5;
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		int n = num;
//		for(int j = i;j <= N;j++)
//		{
//			
//			cout << n;
//			n++;
//
//		}
//		for (int k = i;k < N;k++)
//		{
//			cout << n;
//			n++;
//		}
//		cout << endl;
//		num++;
//		
//
//	}
//
//}

//For N = 5
//123456789
//_2345678
//__34567
//___456
//____5

//int main()
//{
//	int N = 5;
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j =2;j <= i;j++)
//		{
//			cout << "_";
//		}
//		int n = num;
//		for (int k = i;k <= N;k++)
//		{
//			cout << n;
//			n++;
//		}
//		for (int l = i;l < N;l++)
//		{
//			cout << n;
//			n++;
//		}
//
//		num++;
//		cout << endl;
//		
//	}
//}
//
//For N = 5
//5
//654
//76543
//8765432
//987654321

//int main()
//{
//	int N = 5;
//	int num = N;
//	for (int i = 1;i <= N;i++)
//	{
//		int n = num;
//		for (int j = 1;j <= i;j++)
//		{
//			cout << n;
//			n--;
//		}
//		for (int j = 2;j <= i;j++)
//		{
//			cout << n;
//			n--;
//		}
//		num++;
//		cout << endl;
//
//	}
//}

//For N = 6
//100000
//010000
//001000
//000100

//int main()
//{
//	int N = 6;
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			if (j != i)
//				cout << "0";
//			else if (j == i)
//				cout << "1";
//		}
//		for (int k = i;k <= N;k++)
//		{
//			cout << "0";
//		}
//		cout << endl;
//	}
//}
//

//Shape - 12
//For N = 8
//00000000
//00000001
//00000010
//00000011
//00000100
//00000101
//00000110
//00000111
long convertToBinary(long n)
{
	int remainder;
	long binary = 0, i = 1;
	while (n != 0) {
		remainder = n % 2;
		n = n / 2;
		binary = binary + (remainder * i);
		i = i * 10;
	}
	return binary;

}
long lenghtOfBinary(long n)
{
	int remainder;
	long binary = 0, i = 1;
	int lenght = 0;
	while (n != 0) {
		remainder = n % 2;
		n = n / 2;
		binary = binary + (remainder * i);
		i = i * 10;
		lenght++;
	}
	return lenght;

}
//int main()
//{
//	int N = 50;
//	for (int i = 0;i < N;i++)
//	{
//		int lenght = lenghtOfBinary(i);
//		for (int j = lenght;j<N;j++)
//		{
//			if (j == 0)
//				cout << "";
//			else if(j>=1)
//				cout << "0";
//		}
//	    cout << convertToBinary(i);
//		cout << endl;
//	}
//}

//For N = 5
//1
//1 1
//1 1 2
//1 1 2 2
//1 1 2 2 3

//int main()
//{
//	int N = 10;
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			if (j % 2 == 0) {
//				cout << num;
//				num++;
//			}
//			else
//				cout << num;
//		}
//		num = 1;
//		cout << endl;
//	}
//}

//For N = 5
//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1

//int main()
//{
//	int N = 5;
//	for (int i = 1;i <= N;i++)
//	{
//		if (i % 2 == 1) {
//			for (int j = 1;j <= i;j++)
//			{
//				if (j % 2 == 1)
//					cout << "1"<<" ";
//				else
//					cout << 0<<" ";
//			}
//		}
//		else
//		{
//			for (int j = 1;j <= i;j++)
//			{
//				if (j % 2 ==0)
//					cout << "1"<<" ";
//				else
//					cout << 0<<" ";
//			}
//		}
//		cout << endl;
//	}
//
//}

//For N = 5
//1 4 16 36 64
//1 9 25 49
//1 4 16
//1 9
//1

//int main()
//{
//	int N = 5;
//	int num = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		if (i % 2 == 1)
//		{
//			int num = 2;
//			cout << 1 << " ";
//			for (int j = i;j < N;j++)
//			{
//				cout << num * num << " ";
//				num = num + 2;;
//			}
//
//		}
//		else {
//			int num = 3;
//			cout << 1 << " ";
//			for (int j = i;j < N;j++)
//			{
//				cout << num * num << " ";
//				num = num + 2;;
//			}
//
//		}
//			
//			cout << endl;
//	}
//}

//For N = 5
//1
//232
//34543
//4567654
//567898765

//int main()
//{
//	int N = 5;
//	int num = 1;
//	int num2 = 2;
//	for (int i = 1;i <= N;i++)
//	{
//		int n = num;
//		for (int j = 1;j <= i;j++)
//		{
//			cout << n;
//			n++;
//		}
//		int n2 = num2;
//		for (int k = 2;k<= i;k++)
//		{
//			cout << n2;
//			n2--;
//
//		}
//		if (i >= 2) {
//			num2 = num2 + 2;
//		}
//		num++;
//
//
//		cout << endl;
//	}
//}

//For N = 4
//1 * ****1
//12 * **21
//123 * 321
//1234321

//int main()
//{
//	int N = 5;
//	int num = 1;
//	int n = 1;;
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			cout << num;;
//			num++;
//		}
//		num = 1;;
//		for (int j = N-1; j >= i; --j)
//		{
//			cout << "*";
//		}
//		for (int j = N-2; j >= i; --j)
//		{
//			cout << "*";
//		}
//		int n2 = n;
//		for (int m = 1;m <= i;m++)
//		{
//			if (m == N) {
//
//			}
//			else {
//				cout << n2;;
//				n2--;
//			}
//
//		}
//		if (i == (N-1))
//		{
//		}
//		else {
//			n++;
//		}
//		cout << endl;
//	}
//
//}

//int main()
//{
//	int N = 4;
//	for (int i = N-1; i >=1; --i)
//	{
//		for (int j = i; j <= 2 * i - 1; ++j)
//			cout << "*";
//		for (int j = 0; j < i - 1; ++j)
//			cout << "*";
//		cout << endl;
//	}
//
//
//}

//shape 18
//*****
//**
//**
//**
//*****

//int main()
//{
//	int N = 10;
//	for (int i = 1;i <= N;i++)
//	{
//		if (i == 1 || i == N) {
//			for (int j = 1;j < N;j++)
//			{
//					cout << "*"<<" ";
//			}
//		}
//		else {
//			for (int k = 1;k <= N;k++)
//			{
//				if (k == 1 || k == N) {
//					cout << "*";
//				}
//				else
//					cout << "  ";
//			}
//		}
//
//		cout << endl;
//	}
//}


//shape 19

//int main()
//{
//	int N = 6;
//	for (int i = 1;i <= N;i++)
//	{
//		if (i % 2 == 1) {
//			cout << "*";
//		}
//
//		else
//		{
//			for (int k = 1;k <= (i/2)+1;k++)
//			{
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//}


//shape 20

//* ++ +
//**++
//* **+
//****
//+***
//++ * *
//++ + *
//++++

//int main()
//{
//	int N = 8;
//	for (int i = 1;i <= N/2;i++)
//	{
//			for (int j = 1;j <= i;j++)
//			{
//				cout << "*";
//			}
//			for (int k = i;k < N/2;k++)
//			{
//				cout << "+";
//			}
//			cout << endl;
//	}
//	for (int i = 1;i <= N / 2;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			cout << "+";
//		}
//		for (int k = i;k < N / 2;k++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

//For N = 7
//13579
//35791
//57913
//79135
//91357

//int main()
//{
//	int N = 5;
//	int num = 1;
//	int num2 = 1;
//	for (int i = 1;i <= N;i++)
//	{
//		int n = num;
//		for (int j = i;j <= N;j++)
//		{
//			cout << n;
//			n = n + 2;
//		}
//		num = num + 2;
//		for (int k = 2;k <= i;k++)
//		{
//			cout << num2;
//			num2 = num2 + 2;
//		}
//		num2 = 1;
//
//		cout << endl;
//	}
//}

//For N = 4
//A C E G
//A C E
//A C
//A

//int main()
//{
//	int N = 4;
//	char x = 'A';
//
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = i;j <= N;j++)
//		{
//			cout << x;
//			x = x + 2;;
//		}
//		cout << endl;
//		x='A';
//	}
//}

//For N = 7
//ABCDEFGFEDCBA
//ABCDEF FEDCBA
//ABCDE EDCBA
//ABCD DCBA
//ABC CBA
#include<iostream>
#include <vector>
using namespace std;
//int main()
//{
//	int N = 7;
//	char x = 'A';
//	char y = 'G';
//	char z = 'F';
//	for (int i = 1;i <= N;i++)
//	{
//		for (int j = i;j <= N;j++)
//		{
//			cout << x;
//			x++;
//		}
//		char num = y;
//		char num2 = z;
//		for (int l = 2;l <= i;l++)
//		{
//			if (i == 1)
//			{
//
//			}
//			else {
//				cout << " ";
//			}
//		}
//		if (i == 1) {
//			for (int k = i;k < N;k++)
//			{
//				cout << num2;
//				num2--;
//			}
//			y--;
//		}
//		else {
//			for (int k = i;k <= N;k++)
//			{
//				cout << num;
//				num--;
//			}
//			y--;
//		}
//		x = 'A';
//
//		cout << endl;
//	}
//}

//For N = 7
//		*
//		*   *
//			*    *
//		 	*     *
//		   *       *
//			*  *
//			 *

//int main()
//{
//	int N = 7;
//	for (int i = 1;i <= (N/2)+1;i++) {
//		if (i <= ((N / 2) + 1)) {
//			for (int j = i;j <= ((N / 2) + 1);j++)
//			{
//				cout << " ";
//			}
//			cout << "*";
//			if (i != 1) {
//
//				for (int k = 4;k <= i*2;k++)
//				{
//
//					cout << " ";
//				}
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//	for (int i = 1;i <= N / 2;i++)
//	{
//		for (int j = 1;j <= i+1;j++)
//		{
//			cout << " ";
//		}
//		cout << "*";
//		if (i != N / 2) {
//			for (int k = i;k <= N / 2;k++)
//			{
//
//				cout << " ";
//			}
//		cout << "*";
//		}
//		cout<<endl;
//	}
//}
//
//For N = 4
//1 2 3 4 5
//10 9 8 7 6
//11 12 13 14 15
//20 19 18 17 16
//21 22 23 24 25

//int main()
//{
//	int N = 4;
//	int n = 1;
//	for (int i = 1;i <= N + 1;i++)
//	{
//		for (int j = 1;j <= N + 1;j++)
//		{
//			cout << n<<"\t";
//			n++;
//		}
//		cout << endl;
//	}
//}


//sparse
int nextSparse(int x)
{
	// Find binary representation of x and store it in bin[].
	// bin[0] contains least significant bit (LSB), next
	// bit is in bin[1], and so on.
	vector<bool> bin;
	while (x != 0)
	{
		bin.push_back(x & 1);
		x >>= 1;
	}

	// There my be extra bit in result, so add one extra bit
	bin.push_back(0);
	int n = bin.size();  // Size of binary representation

	// The position till which all bits are finalized
	int last_final = 0;

	// Start from second bit (next to LSB)
	for (int i = 1; i < n - 1; i++)
	{
		// If current bit and its previous bit are 1, but next
		// bit is not 1.
		if (bin[i] == 1 && bin[i - 1] == 1 && bin[i + 1] != 1)
		{
			// Make the next bit 1
			bin[i + 1] = 1;

			// Make all bits before current bit as 0 to make
			// sure that we get the smallest next number
			for (int j = i; j >= last_final; j--)
				bin[j] = 0;

			// Store position of the bit set so that this bit
			// and bits before it are not changed next time.
			last_final = i + 1;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += bin[i] * (1 << i);
	return ans;
}

//int main()
//{
//	int x=4;
//	//cin >> x;
//	cout<<nextSparse(x);
//}

//A right triangle can have sides that are all integers.A set of three integer values for the sides of a right
//triangle is called a Pythagorean triple.These three sides must satisfy the relationship that the sum of
//the squares of two of the sides is equal to the square of the hypotenuse.Findand display all primitive
//Pythagorean triples for side1, side2and hypotenuse all no larger than 500.
unsigned int GCD(unsigned int a, unsigned int b, unsigned int c) {
	for (int r = min(a, min(b, c)); true; --r)
		if (!(a % r | b % r | c % r)) return r;
}
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		for (int j = i+1;j <= 100;j++)
//		{
//			for (int k = j+1;k <= 100;k++)
//			{
//				if ((i * i) + (j * j) == (k * k))
//				{
//					if (GCD((i), (j), (k)) == 1)
//					{
//						cout << "(" << i << "," << j << "," << k << ")";
//						cout << endl;
//					}
//				}
//
//			}
//
//		}
//	}
//}

//Given a number ‘N’, find the smallest number ‘P’ such that if we multiply all digits of ‘P’, we get ‘N’.The
//result ‘P’ should have at least two digits.
//Examples:
//Input: n = 36
//Output : p = 49
//// Note that 4*9 = 36 and 49 is the smallest such number
//Input : n = 100
//Output : p = 455
//// Note that 4*5*5 = 100 and 455 is the smallest such number
//Input : n = 1
//Output : p = 11
//// Note that 1*1 = 1
//Input : n = 13
//Output : Not Possible
#define MAX 50
void calculateDigit(int n)
{
	int i, j = 0;
	int res[MAX];

	if (n < 10)
	{
		cout << n;
		return;
	}

	for (i = 9;i > 1;i--)
	{
		while (n % i == 0)
		{
			n = n / i;
			res[j] = i;
			j++;
		}
	}

	if (n > 10)
	{
		cout << "Not Possible";
		return;
	}

	for (int i = j - 1;i >= 0;i--)
	{
		cout << res[i];
	}

}
//int main()
//{
//	int x = 13;
//	calculateDigit(x);
//}

//Given an integer, find the most occurring digit in it.If two or more digits occur same number of times,
//then return the highest of them.Input integer is given as an int variable.
//Example:
//Input: x = 12234
//Output : The most frequent digit is 2
//Input : x = 1223377
//Output : The most frequent digit is 7
//Input : x = 5
//Output : The most frequent digit is 5
//Input : x = 1000
//Output : The most frequent digit is 0
//int highestDigit(int n)
//{
//	int rem ;
//	int count = 1;
//	int newcount=0;
//	int newnumber=0;
//	while (n != 0)
//	{
//		rem = n % 10;
//		if ((n % 10 == rem) && ((n / 10) % 10 == rem))
//			count++;
//		else if ((n % 10 == rem) != ((n / 10) % 10 == rem)) {
//			if (newcount < count)
//			{
//				newcount = count;
//				count = 0;
//				newnumber = rem;
//			}
//
//		}
//		n = n / 10;
//	}
//	cout << newnumber<<endl;
//	return newcount;
//}

int countOccurence(int n, int d)
{
	int count = 0;
	while (n)
	{
		if (n % 10 == d)
			count++;
		n /= 10;
	}
	return count;
}

int digitFound(int n)
{
	int max_count = 0;
	int number;
	if (n < 0) {
		n = -n;
	}
	for (int i = 0;i <= 9;i++)
	{
		int count = countOccurence(n, i);
		if (count >= max_count)
		{
			max_count = count;
			number = i;
		}
	}
	return number;
}
//int main()
//{
//	int x = 12234;
//	int d = 4;
//	cout << digitFound(x);
//}
