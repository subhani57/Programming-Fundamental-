//Write a C++ function named as ‘getRandomAlphaNumeric’, which randomly returns an English
//alphabet or a digit(0 ~9).The alphabet can be capital or small which should also be decided
//randomly.
#include <iostream>
using namespace std;
void changevalue(int* ptr1, int* ptr2)
{
	*ptr1 = 20;
	*ptr2 = 10;
	

}

//int main()
//{
//	int x = 10;
//	int y = 20;
//	changevalue(&x, &y);
//	cout << &x;
//	cout << endl
//		;
//	cout << &y;
//}

char getRandomCapitalAlpha()
{
	char ch;
	srand((unsigned)time(NULL));
	ch = (rand() % 26) + 65;
	return ch;

}
//It returns the capital alphabet randomly.
char getRandomSmallAlpha()
{
	char ch;
	srand((unsigned)time(NULL));
	ch = (rand() % 26) + 97;
	return ch;
 }
//It returns the small alphabet randomly.
char getRandomDigit()
{
	char num;
	srand((unsigned)time(NULL));


	num = (rand() % 10) + 48;
	return num;
 }
//It returns the random digit randomly.
char getRandomAlphaNumeric()
{
	srand((unsigned)time(NULL));
	int ran = 0;
	ran = rand() % 3;
	char ch=0;
	if(ran==1) {
		ch = getRandomCapitalAlpha();
		return ch;
	}
	else if (ran == 2) {
		ch = getRandomSmallAlpha();
		return ch;
	}
	else {
		ch = getRandomDigit();
		return ch;
	}
	return 0;
}
//Use the above three functions in this function to return the alphanumeric symbol
//randomly.

//int main()
//{
//	/* retrieve a random number between 100 and 200*/
//		// offset = 100
//		// range = 101
//		cout << getRandomAlphaNumeric();
//}
////
//int GCD(int n1, int n2 )
//{
//	int gcd=0;
//	if (n1 < n2)
//	{
//		int temp = n1;
//		n1 = n2;
//		n2 = temp;
//	}
//	for (int i = 1;i <= n1;i++)
//	{
//		if (n1 % i == 0 && n2 % i == 0)
//		{
//			gcd = i;
//		}
//	}
//	return gcd;
//}
void reduceFraction(int* n1, int* n2)
{
	int greater=0;
	if (*n1 > *n2)
		greater = *n1;
	else
		greater = *n2;
	for (int i = 1;i <= greater;i++)
	{
		if (*n1 % i == 0 && *n2 % i == 0)
		{
			*n1 = *n1 / i;
			*n2 = *n2 / i;
			i = 1;
		}
	}
}
////void printSimplifiedFraction(int n1, int n2) {
////	int gcd = GCD(n1, n2);
////	reduceFraction(&n1, &n2);
////	if (n2 == 0)
////	{
////		cout << "Infinity";
////	}
////	else if (n1 == 0)
////	{
////		cout << 0;
////	}
////	else if (n1 % n2 == 0)
////	{
////		cout << n1/n2;
////	}
////	else if (n1 > n2)
////	{
////		int rem = n1 % n2;
////		int res = n1 / n2;
////		cout << res << " " << rem << "/" << n2;
////	}
////	else if (n1 < n2)
////	{
////		int rem = n1 % n2;
////		int res = n1 / n2;
////		cout << rem << "/" << n2;
////	}
////	else {
////		cout << "Please Enter Input correctly";
////	}
////
////
////
////}
//It uses the above two functions to achieve the original task given in question.
//First Parameter : Numerator, Second Parameter : Denominator
//
//Many advanced calculators have a fraction feature that will simplify fractions for you.You are to write a
//program that will input a positive integer as a numeratorand a positive integer as a denominator, and
//output the fraction in simplest form.That is, the fraction cannot be reduced any further, and the
//numerator will be less than the denominator in output.

//int main()
//{
//	int x =10;
//	int y = 5;
//	printSimplifiedFraction(x,y);
//		
//}

int GCD(int n1, int n2) {
	int gcd = 0;
	if (n1 < n2)
	{
		int tem = n1;
		n1 = n2;
		n2 = tem;
	}
	for (int i = 1;i <= n1;i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}
//It returns the greatest common devisor of the two received integers.
bool isPythagoreanTriplet(int x, int y, int z) {
	if (((x * x) + (y * y)) == (z * z))
		return true;
	return false;
}
//It returns true if the received integers(a, b, c) as sides of triangle are
//Pythagorean triplet otherwise return false.
void printPythagoreanTriplet(int x = 500) {
	for (int i = 1;i <= x;i++)
	{
		for (int j = i + 1;j <= x;j++)
		{
			for (int k = j + 1;k <= x;k++)
			{
				if (isPythagoreanTriplet(i,j,k))
				{
					if (GCD(GCD((i), (j)), (k)) == 1)
					{
						cout << "(" << i << "," << j << "," << k << ")";
						cout << endl;
					}
				}

			}

		}
	}
}
//This function prints all the Pythagorean triplet up to 500 and uses the above two
//functions to achieve the original task.
//The functions receive the limit up to which triplets needs to be checked which is
//by default 500.

int main()
{
	printPythagoreanTriplet(100);
	cout << GCD(3, 4);
}
