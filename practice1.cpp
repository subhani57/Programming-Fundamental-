#include<iostream>
using namespace std;
//int main()
//{
//	//char arr[] = "ABCDCBA";
//
//	//char result[]="";
//	//int lenght = sizeof(arr) / sizeof(arr[0]);
//	//lenght = lenght - 2;
//	//cout << lenght;
//	//int j = 0;
//	//for(int i = lenght;i >= 0 ;i--)
//	//{
//	//	result[i] = arr[j];
//	//	j++;
//	//}
//	///*cout << result[0];
//	//cout << result[6];*/
//	//bool flag = true;
//	//for(int i = 0;i <= lenght;i++)
//	//{
//	//	if (result[i] != arr[i])
//	//	{
//	//		flag = false;
//	//		break;
//	//	}
//	//}
//	//if (flag)
//	//	cout << "String Is Palindrome";
//	//else
//	//	cout << "String is not palindrom";
//
//
//	//int i = 0;//1635
//	//int n;
//	//cout << "Enter the number";
//	//int count = 0;;
//	//cin >> n;
//	//int num = n;
//	//int number = n;
//	//while (num > 0) {
//	//	num = num / 10;
//	//	count++;
//	//}
//	//int digit;
//	//int sum = 0;;
//	//int digitpower=1;
//	//for (int i = 0;i < count;i++)
//	//{
//	//	digit = n % 10;
//	//	n = n / 10;
//	//	for (int j = 0;j < count;j++)
//	//	{
//	//		digitpower = digitpower * digit;
//	//	}
//	//	sum = sum + digitpower;
//	//	digitpower = 1;
//	//}
//	//if (number == sum)
//	//{
//	//	cout << "Armstrong Number";
//	//}
//	//else {
//	//	cout << "Not a Armstrong number";
//	//}
//
//	//prime number;
//	/*for (int i = 2;i <= 100;i++)
//	{
//		bool is_Prime = true;
//		for (int j = 2;j * j <= i;j++)
//		{
//			if (i % j == 0)
//			{
//				is_Prime = false;
//			}
//
//		}
//		if (is_Prime)
//			cout << i << " ";
//}*/
//
//	//Decimal to binary
//
//	/*int arr[10];
//	int n;
//	int binary=1;
//	int decimal = 100;
//	int i = 0;
//	while (decimal > 0)
//	{
//		arr[i] = decimal % 2;
//		decimal = decimal / 2;
//		i++;
//		
//	}
//	for (int j = i-1;j >= 0;j--)
//	{
//		cout << arr[j];
//	}
//	*/
//	//const int size = 8;
//	//int arr[8] = { 0,1,2,1,3,2,3,5 };
//	//int count[size] = { 0 };
//	//// a frequency array to count frequency of each element and to find missing elements in array
//	//for (int i = 0;i < size;i++) {
//	//	count[arr[i]]++;
//	//}
//	//int k = 0;
//	//for (int i = 0;i < size;i++) {
//	//	for (int j = i + 1;j < size;j++) {
//	//		k = 0;
//	//		if (arr[i] == arr[j]) {
//	//			while (k < size) {
//	//				if (count[k] == 0) {
//	//					arr[j] = k;
//	//					count[k] = 1;
//	//					break;
//	//				}
//	//				k++;
//	//			}
//	//		}
//	//	}
//	//}
//	//for (int i = 0;i < size;i++) {
//	//	cout << arr[i] << " ";
//	//}
//
//
//
//
//}
//void printDuplicates(int arr[], int n)
//{
//	int i;
//	int fl = 0;
//	for (i = 0; i < n; i++) {
//		if (arr[arr[i] % n] >= n) {
//			if (arr[arr[i] % n] < 2 * n) {
//				cout << arr[i] % n << " ";
//				fl = 1;
//			}
//		}
//		arr[arr[i] % n] += n;
//	}
//	if (!fl)
//		cout << "-1";
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,1,1,1,1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printDuplicates(arr, size);
//int main(){
//string str1 = "123";
//string str2 = "981";
//string str;
//if (str1.length() > str2.length()) {
//	string temp = str1;
//	str1 = str2;
//	str2 = temp;
//}
//
//int n1 = str1.length();
//int n2 = str2.length();
//int diff = n2 - n1;
//int carry = 0;
//
//for (int i = n1 - 1; i >= 0; i--) {
//	int sum = ((str1[i] - '0') + (str2[i + diff] - '0') + carry);
//	str += sum % 10 + '0';
//	carry = sum / 10;
//}
//
//for (int i = n2 - n1 - 1; i >= 0; i--) {
//	int sum = ((str2[i] - '0') + carry);
//	str += sum % 10 + '0';
//	carry = sum / 10;
//}
//
//if (carry) str += carry + '0';
//int n = str.length();
//
//for (int i = 0;i < n / 2;i++) {
//	char temp = str[i];
//	str[i] = str[n - i - 1];
//	
//		str[n - i - 1] = temp;
//}
//
//
//
//
//cout << str1 << endl;
//cout << str2 << endl;
//cout << "----\n";
//cout << str << endl;
//cout << "----\n";
//}

//int main()
//{
//	string str1 = "123";
//	string str2 = "981";
//	string str;
//	int n = str1.length();
//	for (int i = n-1;i >=0;i++)
//	{
//		str[i] = str1[i] + str2[i];
//	}
//	cout << str[0];
//}
//Find maximum times repeating element in sorted array in one
//loop
void findMaxMode(int arr[], int size)
{
	int count=1, maxcount=0;
	int element=0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			count++;
		}
		else
		{
			if (count > maxcount)
			{
				maxcount = count;
				element = arr[i - 1];
			}
			count = 1;
		}
	}
	if (count > maxcount)
	{
		maxcount = count;
		element = arr[size - 1];
	}
	cout << element << "is repeating " << maxcount << "times\n";
}

void findmaxRepeating(int arr[], int size)
{

}
//int main()
//{
//	int arr[] = { 1,1,1,2,2,2,2 };
//	int size = 7;
//	findMaxMode(arr, size);
//}
