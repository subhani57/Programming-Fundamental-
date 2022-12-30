#include<iostream>
#include"MyString.h"
//18_Practice_1D_Character_Arrays
using namespace std;
int Mystring::getStringLength(char * ch)
{
	int len = 0, i = 0;
	while (ch[i])
	{
		len++;
		i++;
	}
	return len;
}
void Mystring::concatenate(char* destination, char* source)
{
	int i, j;
	for (i = 0; source[i] != '\0'; i++);
	j = 0; // initialize j with 0;  

	// use while loop that insert the str2 characters in str1  
	while (destination[j] != '\0') // check str2 is not equal to null  
	{
		source[i] = destination[j]; // assign the character of str2 to str1  
		i++;
		j++;
	}
	source[i] = '\0';
	cout << " The concatenated string is: " << source;

}
void Mystring::copyString(char* destination, char* source)
{
	int i = 0;
	int sourcelen = getStringLength(source);
	while (i != sourcelen)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';

}
int  Mystring::convertToInteger(char* source) {
	int res = 0; 
	for (int i = 0; i < getStringLength(source); ++i) {
		res = res * 10 + source[i] - '0';
	}
	return res;
}
float Mystring::convertToFloat(char* source) {
	float res = 0;
	for (int i = 0; i < getStringLength(source); ++i) {
		res = res * 10 + (float)source[i] - '0';
	}
	return res;
}
//int main()
//{
//	
//	//char ali[] = "ali is";
//	char source[10] = "3.14156";
//	char destination[20] = "best";
//	
//	
//	Mystring demo;
//	//cout<<demo.getStringLength(ali);
//	//demo.concatenate(destination, source);
//	cout<<demo.convertToFloat(source);
//	return 0;
//}
