#include<iostream>
#include <iomanip>
using namespace std;
//void displayTable(int n)
//{
//	for (int i = 1;i <= 10;i++)
//	{
//		cout << n << " * " << i << " = " << n * i << endl;;
//	}
//}
//int main()
//{
//	int x=7;
//	displayTable(x);
//}
void printDiamond(int n)
{
	int num = 1;
	for (int i = 1;i <= n/2+1;i++)
	{
		for (int j = i;j <= n / 2;j++)
		{
			cout << " ";
		}
		for (int k = 1;k <= num;k++)
		{
			cout << "*";
		}
		num = num + 2;
		cout << endl;
	}
	num = num - 2;
	num = num - 2;

	for (int i = 1;i <= n / 2;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			cout << " ";
		}
		for (int k = 1;k <= num;k++)
		{
			cout << "*";
		}
		num = num - 2;
		cout << endl;
	}
}
//int main()
//{
//	int x = 9;
//	printDiamond(x);
//}


//Q3
//Write a function, which return true if the number passed to it is even otherwise return false.
//bool isEven(int)

void checkEvenOdd(int n)
{
	if (n % 2 == 0)
		cout<< "The Number Is Even ";
	else
		cout<< "The Number is Odd";
}

//Write a function, which receives two integersand return the count of carry operation durding their
//addition.
int countCarrys(int number1, int number2)
{
	int count = -1;
	if (number2 > number1)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
	int rem1, rem2;
	rem1 = number1 % 10;
	rem2 = number2 % 10;

	while (number1!=0)
	{
		if (rem1 + rem2 >= 10)
		{

			count++;
			int temp = rem1;
			rem1 = (((temp + rem2) / 10))+ number1 % 10 ;
			rem2 = number2 % 10;

			number1 = number1 / 10;
			number2 = number2 / 10;

		}
		else {
			number1 = number1 / 10;
			number2 = number2 / 10;
			rem1 = number1 % 10;
			rem2 = number2 % 10;
		}

		
	}
	return count;

	
}
int count_carry(string a, string b)
{
	// Initialize the value of carry to 0
	int carry = 0;

	// Counts the number of carry operations
	int count = 0;

	// Initialize len_a and len_b with the sizes of strings
	int len_a = a.length(), len_b = b.length();

	while (len_a != 0 || len_b != 0) {

		// Assigning the ascii value of the character
		int x = 0, y = 0;
		if (len_a > 0) {
			x = a[len_a - 1] - '0';
			len_a--;
		}
		if (len_b > 0) {
			y = b[len_b - 1] - '0';
			len_b--;
		}

		// Add both numbers/digits
		int sum = x + y + carry;

		// If sum > 0, increment count
		// and set carry to 1
		if (sum >= 10) {
			carry = 1;
			count++;
		}

		// Else, set carry to 0
		else
			carry = 0;
	}

	return count;
}
//int main()
//{
//	int x = 2212;
//	int y = 2288;
//	cout<<countCarrys(x, y);
//
//	cout << endl;
//
//	string a = "2212", b = "2288";
//
//	int count = count_carry(a, b);
//	if (count == 0)
//		cout << "0\n";
//	else if (count == 1)
//		cout << "1\n";
//	else
//		cout << count << "\n";
//
//	
//}
//
//Write a function, which checks : whether a given number is circular prime or not.It returns true if given
//number is circular prime otherwise return false.

int count(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n= n / 10;
	}
	return count;
}
int checkPrime(int n)
{
	if (n == 0 || n == 1)
	{
		return false;;
	}
	for (int i = 2;i <= n / 2;++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool checkCircularPrime(int n)
{
	int rem = 0;
	int countdigit = count(n);
	int checkNumPrime = checkPrime(n);
	if (checkNumPrime != 1)
		return false;

	for (int i = 1;i <= countdigit;i++) {
		rem = n % 10;
		n = n / 10;
		n = rem*pow(10,(countdigit-1)) + n;
		checkNumPrime = checkPrime(n);
		if (checkNumPrime != 1)
			return false;
	}
	return true;
}
//int main()
//{
//	int n = 19937;
//
//	cout << checkCircularPrime(n);
//}

void convertToCelsius(double F)
{
	double C = 5 * (F - 32) / 9;;
	cout << "The Temperature In Celcius is " << setprecision(2) << C;
		cout << endl;
	double Far = 45;
	for (int i = 1;i <= 20;i++)
	{
		double Ce = 5 * (Far - 32) / 9;
		cout << "The Temperature In Celcius is " << setprecision(2)<< Ce;
		Far++;
		cout << endl;
	}
	
}

//int main() {
//	int F = 45;
//	convertToCelsius(F);
//}
/*The program should have a function named calculateRetail that receives the wholesale costand the
markup percentage as arguments, and returns the retail price of the item.
Input Validation : Do not accept negative values for either the wholesale cost of the item or the markup
percentage*/
int calculateRetail(int cost,int markUp)
{
	if (cost < 0)
	{
		cout << "Again Input;";
		return 0;
	}
	else if(markUp <0)
	{
		cout << "Again Input;";
		return 0;
	}

	int markupValue=cost*(markUp/100);
	int total = cost + markupValue;
	return total;

}

//int main()
//{
//	int cost = 10;
//	int markup = 100;
//	cout << calculateRetail(cost, markup);
//
//
//}
//
//Write a program to compute the cosine of x.The user should supply xand a positive integer n.We
//compute the cosine of x using the seriesand the computation should use all terms in the series up
//through the term involving x
//cos(x) = 1 - x2 / 2!+ x4 / 4!- x6 / 6!- .....

int calculateFactorial(int n)
{
	int sum = n;
	for (int i = n-1;i >= 1;i--) {
		sum = sum * i;
	}
	return sum;
}
double calculate(int x,int n)
{
	double cosx;
	double neg;
	double pos;
	double sumpos=0;
	double sumneg=0;
	int num = 2;
	for (int i = 2;i <= n;i++)
	{
		if (i % 2 == 0)
		{
			double y = calculateFactorial(num);
			neg = pow(x, num) / y;
			sumneg = neg;
			num = num + 2;
		}
		else {
			double z = calculateFactorial(num);
			pos = (x, num) / z;
			sumpos = pos;
			num = num + 2;
		}
	}
	cosx = 1 - sumneg + sumpos;
	return cosx;
}

//int main()
//{
//	cout<< calculate(4,10);
//}

//Write a program which takes date(year, month, day) from user and displays on console the next date.
//Note: A leap year is either divisible by 4 yet not by 100, or it is divisible by 400.
//Input Validation : If user enters wrong / invalid date then you must report user about it.
//Leap Year J :
//Following years are not leap years :
//1700, 1800, 1900, 2100, 2200, 2300, 2500, 2600
//It is because they are evenly divisible by 100 but not by 400.
void checkDate(int y, int m, int d)
{
	if (d > 0 && d < 28)	//checking for day from 0 to 27
		d += 1;
	if (d == 28)
	{
		if (m == 2)	//checking for february
		{
			if ((y % 400 == 0) && (y % 100 != 0 && y % 4 == 0))	//leap year check in case of feb
			{
				d = 29;
			}
			else
			{
				d = 1;
				m = 3;
			}
		}
		else	//when its not feb
			d += 1;
	}
	if (d == 29)	//last day check for feb
	{
		if (m == 2)
		{
			d = 1;
			m = 3;
		}
		else
			d += 1;
	}
	if (d == 30)	//last day check for april,june,September,November
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			d += 1;
		else
		{
			d = 1;
			m += 1;
		}
	}
	if (d == 31)	//last day of the month
	{
		d = 1;
		if (m == 12)	//checking for last day of the year
		{
			y += 1;
			m = 1;
		}
		else
			m += 1;
	}
	cout << "Tomorrow's date:\n";
	if (d < 10)	//checking if day needs to be preceded by 0
	{
		cout << "0" << d << " ";
	}
	else
		cout << d << " ";
	if (m < 10)	//checking if month needs to be preceded by 0
	{
		cout << "0" << m << " ";
	}
	else
		cout << m << " ";
	cout << y;
}
//int main()
//{
//	checkDate(2019, 2, 28);
//}

//Given the center and a point on the circle, you can use this formula to find the radius of the circle.
//Write a program that prompts the user to enter the center and a point on the circle.The program
//should then output the circle’s radius, diameter, circumference, and area.
double calculateDistance(double a, double b, double c, double d)
{
	double dis = sqrt(pow((c - a), 2) + pow((d - b), 2));
	return dis;
}
void calculateRadius(int d)
{
	cout << d;
}
void calculateCircumference(int r)
{
	double cir = 2 * 3.14 * r;
	cout<< cir;
}
void calculateArea(int r)
{
	double area = 3.14 * r * r;
	cout << area;
}
//int main()
//{
//	double x1, x2, y1, y2;
//	cout << "Enter tHe Centre of circle";
//	cin >> x1>>x2;
//	cout << "Enter the point of circle";
//	cin >> y1 >> y2;
//
//	double dis = calculateDistance(x1, x2, y1, y2);
//	cout << dis;
//	cout << endl;
//	calculateRadius(dis);
//	cout << endl;
//
//	calculateCircumference(dis);
//	cout << endl;
//
//	calculateArea(dis);
//	cout << endl;
//
//
//
//}

//Write a function, which receives following three arguments from the user :
//v Number
//v Source base
//v Target base
//It then converts the number from source base to targeted baseand returns the resultant number in
//target base.
//Note : You can assume that the base will be less than or equal to 10. The default source base will be
//decimaland default target base will be binary.

int conversion(int n, int s=10, int t=2)
{
	//Decimal to Other Base System
	int result=0;
	int rem;
	int count = 0;
	int new_result=0;
	if (t == 0)
	{
		return 0;
	}
	if (s == t)
	{
		return s;
	}
	if (s == 10)
	{
		while (n != 0) {
			rem = n % t;
			n = n / t;
			result = (result * 10) + rem;
			count++;
		}
		for (int i = 1;i <= count;i++)
		{
			int rem = result % 10;
			result = result / 10;
			new_result = (new_result * 10) + rem;
		}
		return new_result;
	}
	if ((s >= 1 && s <= 9) && t == 10)
	{
		int count=0;
		int c = n;
		while (c != 0)
		{
			c = c / 10;
			count++;
		}
		int co = 0;
		int rem = 0;
		int sum=0;
		for (int i = 1;i <= count;i++)
		{
			rem = n % 10;
			n = n / 10;
			sum=(sum)+(rem*pow(s, co));
			co++;
		}
		return sum;
	}
	//Other Base System to Non-Decimal System
	if ((s >= 1 && s <= 9) && (t >= 1 && t <= 9))
	{
		int count = 0;
		int c = n;
		while (c != 0)
		{
			c = c / 10;
			count++;
		}
		int co = 0;
		int rem = 0;
		int sum = 0;
		for (int i = 1;i <= count;i++)
		{
			rem = n % 10;
			n = n / 10;
			sum = (sum)+(rem * pow(s, co));
			co++;
		}
		//sum return the value of decimal
		int newcount = 0;
		while (sum != 0) {
			rem = sum % t;
			sum = sum / t;
			result = (result * 10) + rem;
			newcount++;
		}
		for (int i = 1;i <= newcount;i++)
		{
			int rem = result % 10;
			result = result / 10;
			new_result = (new_result * 10) + rem;
		}
		return new_result;
	}

}
//int main()
//{
//	cout << conversion(25);
//}