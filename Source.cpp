//#include<iostream>
//#include <unordered_set>
//using namespace std;
////Q1
////Write a pseudo code that asks the user to enter the amount that he or she has budgeted for a
////month.A loop should then prompt the user to enter each of his or her expenses for the month
////and keep a running total.When the loop finishes(decide a sentinel value yourself), the program
////should display the amount that the user is over or under budget
////
////int main()
////{
////	int budget, expense, total_Expenses = 0;
////	char expense_input;
////	cout << "Enter the budget of month: ";
////	cin >> budget;
////	bool flag = true;
////	while (flag)
////	{
////		cout << "Enter the expense of month : ";
////		cin >> expense;
////		total_Expenses = total_Expenses + expense;
////		cout << "Do your want to add more expsenses Input y or n : ";
////		cin >> expense_input;
////		for (int i = 0;i <= 1000;i++)
////			if (expense_input == 'Y' || expense_input == 'y')
////				flag;
////			else if (expense_input == 'N' || expense_input == 'n')
////			{
////				flag = false;
////				break;
////			}
////			else
////				cout << "The Format is false;";
////	}
////	if (total_Expenses > budget)
////	{
////		cout << "The expense is over budget";
////	}
////	else
////		cout << "The expense isunder budget";
////}
////
////Write a pseudo code that requests the user to enter two integers.The program should then
////calculateand report the sum of all the integers betweenand including the two integers.At this
////point, assume that the smaller integer is entered first.For example, if the user enters 2 and 9,
////the program should report that the sum of all the integers from 2 through 9 is 44.
//
////In a sumac sequence, t1, t2, …, tm, each term is an integer greater than or equal 0. Also, each
////term, starting with the third, is the difference of the preceding two terms(that
////	is, tn + 2 = tn−tn + 1 for n≥1).The sequence terminates at tm if tm−1 < tm.
////	For example, if we have 120 and 71, then the sumac sequence generated is as follows :
////120, 71, 49, 22, 27.
//
////int main()
////{
////	int n1, n2;
////	cout << "enter number 1";
////	cin >> n1;
////	cout << "enter number 2 ";
////	cin >> n2;
////	cout << n1 << "," << n2 << ",";
////
////	int difference=1;
////	while (difference >=1)
////	{
////			difference = n1 - n2;
////			if(difference>=1)
////			cout << difference <<",";
////
////		n1 = n2;
////		n2 = difference;
////	}
////}
////Write a program which calculates the sum of following series :
////12 + 23 + 34 + … + NN + 1
////You will take value of ‘N’ from user.
//
////int main()
////{
////	int no_Of_Lenght;
////	cout << "Enter the Lenght to calculate sum";
////	cin >> no_Of_Lenght; 
////	int sum = 0;
////	int digit_sum=0;
////	for (int i = 1;i <= no_Of_Lenght + 1 ;i++)
////	{
////		sum = sum + digit_sum;
////		digit_sum=i;
////		int digit = 0;
////		for (int j = 1;j <= i ;j++)
////		{
////			digit = digit_sum * i;
////			digit_sum = digit;
////		}
////	}
////	cout << sum;
////}
//
////Write a program which calculates the sum of first ‘N’ term of the following series :
////1S + 1 + 2S + 1 + 3S + 2 + 2S + 3 + 3S + 5 + 2S + 8 + 3S + 13 + ……
////You will take value of ‘N’ and ‘S’ from user.
//
////int Pow(int a, int b) {
////	int power = 1, i;
////	for (i = 1; i <= b; ++i) {
////		power = power * a;
////	}
////	return power;
////}
////int main()
////{
////	int no_Of_Lenght;
////	cout << "Enter the Lenght to calculate sum";
////	cin >> no_Of_Lenght;
////	int sum = 0;
////	int S;
////	cout << "Enter the Incremnt Value";
////	cin >> S;
////	int n1=1, n2=2,temp;
////	int sum_power;
////	int power_Number;
////	int sum_of_number=0;
////	for (int i = 1;i <= no_Of_Lenght;i++)
////	{
////		if (i == 1 || i==2)
////		{
////			power_Number = S + 1;
////			sum_of_number = pow(i , power_Number);
////			sum = sum + sum_of_number;
////		}
////		else if (i == 3)
////		{
////			power_Number = S + 2;
////			sum_of_number = pow(i, power_Number);
////			sum = sum + sum_of_number;
////		}
////		else
////		{
////			sum_power = n1 + n2;
////			temp = n2;
////			n2 = sum_power;
////			n1 = temp;
////			power_Number = S + sum_power;
////			if (i % 2 == 0)
////			{
////				sum_of_number=pow(2, power_Number);
////				sum = sum + sum_of_number;
////			}
////			else
////			{
////				sum_of_number=pow(3, power_Number);
////				sum = sum + sum_of_number;
////			}
////		}
////	}
////	cout << sum;
////}
////1S + 1 + 2S + 1 + 3S + 2 + 2S + 3 + 3S + 5 + 2S + 8 + 3S + 13 +
//
////Write a program, which prints all the prime numbers in the range of two given numbers mand
////n.
////bool isPrime(int n)
////{
////	if (n == 1 || n == 0)
////		return false;
////	for (int i = 2;i < n;i++)
////	{
////		if (n % i == 0)
////			return false;
////	}
////	return true;
////}
////int main()
////{
////	int num1, num2,temp;
////	cout << "ENter the value of number ";cin >> num1;
////	cout << "ENter the value of number ";cin >> num2;
////	if (num1 > num2)
////	{
////		temp = num1;
////		num1 = num2;
////		num2 = temp;
////	}
////	int count;
////	count = num2 - num1;
////	for (int i = num1;i <= num2;i++)
////	{
////		if (isPrime(i))
////			cout << i << ",";
////	}
////}
////
////Display the prime factors of a given positive integer.
////void printPrimeFactors(int n)
////{
////	for (int i = 2;i <= n;i++)
////	{
////		if (n % i == 0)
////		{
////			cout << i<<" ";
////			n = n / i;
////			i = 1;
////		}
////	}
////}
////int main()
////{
////	int num1;
////	cout << "Enter The Number : ";
////	cin >> num1;
////	cout << "The prime factor are ";
////		printPrimeFactors(num1);
////
////		
////	
////}
//
////Write a program which computes the following
//
////int main()
////{
////	double sum_of_Negative=0,sum_of_Positive=0,neg_comp, pos_comp, total_Sum;
////	for (double i = 3;i <= 1000;i=i+4)
////	{
////		neg_comp = 1 / i;
////		sum_of_Negative = sum_of_Negative + neg_comp;
////	}
////	for (double i = 5;i <= 1000;i = i + 4)
////	{
////		pos_comp = 1 / i;
////		sum_of_Positive = sum_of_Positive + pos_comp;
////	}
////
////	total_Sum = 4 * (1 + sum_of_Positive - sum_of_Negative);
////	cout << total_Sum;
////
////}
//
////Strong numbers are the numbers whose sum of factorial of digits is equal to the original
////number.Example: 145 is a strong number because 1!+ 4!+ 5!= 145
////Your task is to write a pseudo which checks whether a given number is strong number or not.
////int calculateFactorial(int num)
////{
////	int factorial=1;
////	for (int i = 1;i <=num;i++)
////	{
////		factorial *= i;
////	}
////	return factorial;
////}
////int main()
////{
////	int num;
////	cout << "Enter The Number U want to Check Whether Given is Strong Or Not : ";
////	cin >> num;
////	int digit;
////	int sum = 0;
////	while (num>0)
////	{
////		digit = num % 10;
////		sum = sum + calculateFactorial(digit);
////		num = num / 10;
////	}
////	if (sum == num)
////		cout << sum << " is strong number ";
////	else
////		cout << sum << " is not strong number ";
////
////}
//
////A dual prime is 2 prime numbers that are exactly “2” apart.Example: 3, 5 and 11, 13, etc.In
////this problem, you need to display all the dual primes up to a given number ‘N’.
//
////bool isPrime(int n)
////{
////	if (n == 1 || n == 0)
////		return false;
////	for (int i = 2;i < n;i++)
////	{
////		if (n % i == 0)
////			return false;
////	}
////	return true;
////
////}
////
////int main()
////{
////	int N;
////	cout << "Enter the range u want to check till that range of Prime Number";
////	cin >> N;
////	for (int p = 2; p <= N - 2; p++) {
////		if (isPrime(p) && isPrime(p + 2))
////			cout << "(" << p << ", " << p + 2 << ")";
////	}
////}
//// array heap
////int* Arr[1000], i = 0, sizeofArr = 0;
//	//while (1) {
//	//	Arr[i] = new int;
//	//	cin >> *Arr[i];
//	//	if (cin.get() == '\n') {   //exit loop if ENTER is pressed 
//	//		break;
//	//	}
//	//	i++;
//	//	sizeofArr++;
//	//}
//	//for (int j = 0;j <= sizeofArr;j++) {
//	//	cout << *Arr[j] << " ";
//	//}
////Given a number, your pseudo code will findand display the longest consecutive repeating digit.
////Sample Input : 1999161117
////Sample Output : 9
////int count_digit(int number) {
////	int count = 0;
////	while (number != 0) {
////		number = number / 10;
////		count++;
////	}
////	return count;
////}
////int maxRepeating(int n)
////{
////	int len = count_digit(n);
////	int count = 0;
////
////	// Find the maximum repeating character
////	// starting from str[i]
////	int res = n % 10;;
////	for (int i = 0; i < len; i++)
////	{
////		int cur_count = 1;
////		for (int j = i + 1; j < len; j++)
////		{
////			if (n % 10 != (n / 10) % 10)
////				break;
////			n = n / 10;
////			cur_count++;
////		}
////
////		// Update result if required
////		if (cur_count > count)
////		{
////			count = cur_count;
////			res = n % 10;
////		}
////	}
////	return res;
////}
////int main()
////{
////	
////	int n = 191611117;
////
////	cout << "enter the number";
////	cin >> n;
////	int countnumber = count_digit(n);
////	int count = 1;
////	int digit;
////	int digit2;
////	int value=0;
////	int max_count = 0;
////	for (int i = 1;i <= countnumber;i++)
////	{
////		digit = n % 10;
////		n = n / 10;
////		digit2 = n % 10;
////		if (digit == digit2)
////		{
////			count=count+1;
////			value = digit;
////		}
////		else if (value != digit2)
////		{
////			if (count > 1) {
////				max_count = count;
////			}
////			count = 1;
////		}
////		
////	}
////	cout << max_count;
////	cout << value;
////	
////}
//
////A high school has 1000 students and 1000 lockers, one locker for each student.On the first day
////of school, the fitness coach plays the following game :
////She asks the first student to goand open all the lockers.She then asks the second student to
////goand close all the even - numbered lockers.The third student is asked to check every third
////locker.If it is open, the student closes it; if it is closed, the student opens it.The fourth student
////is asked to check every fourth locker.If it is open, the student closes it; if it is closed, the
////student opens it.The remaining students continue this game.In general, the nth student
////checks every nth locker.If the locker is open, the student closes it; if it is closed, the student
////opens it.After all the students have taken their turn, some of the lockers are openand some
////are closed.
////Write a program that prompts the user to enter the number of lockers in a school.After the
////game is over, the program outputs the number of lockers that are opened.Test run your
////program for the following inputs : 1000, 5000, 10000. Do you see any pattern developing ?
////Look at the following hint if stuck badly J
////(Hint : Consider locker number 100. This locker is visited by student numbers 1, 2, 4, 5, 10, 20,
////	25, 50, and 100. These are the positive divisors of 100. Similarly, locker number 30 is visited by
////	student numbers 1, 2, 3, 5, 6, 10, 15, and 30. Notice that if the number of positive divisors of a
////	locker number is odd, then at the end of the game, the locker is opened.If the number of
////	positive divisors of a locker number is even, then at the end of the game, the locker is closed.)
//
//int main()
//{
//	int no_of_lockers, no_Of_Students;
//	cout << "Enter the Number of Locker ";
//	cin >> no_of_lockers;
//	int count_locker_Open=0;
//	int i = 1;
//	while ((i * i) <= no_of_lockers)
//	{
//		i++;
//		count_locker_Open++;
//	}
//	cout << count_locker_Open;
//
//}
//
//
//


