#include<stdlib.h>
#include<iostream>

using namespace std;
#define MAX 10
int newsize = 10;

struct stack {
	int items[MAX];
	int top;
};

typedef struct stack st;
void createEmptyStack(st* s)
{
	s->top = -1;
}

int isFull(st* s)
{
	if (s->top == MAX - 1)
		return 1;
	else
		return 0;
}

int isEmpty(st* s)
{
	if (s->top == -1)
		return 1;
	else
	{
		return 0;
	}
}




//int mian()
//{
//
//}

//dereference

#include <iostream>
using namespace std;
void increment(int* p)
{
	*p = *p + 1;

}
//int main()
//{
//	//summ of odd number 
//	/*int a = 10;
//	increment(&a);
//	cout << a;
//	int a = 5;
//	int* p;
//	p = &a;
//	cout << p<<endl;
//
//	cout << *p << endl;;
//	p = p + 1;
//	cout << p << endl;;
//	cout << *p<<endl	;
//	int a[5] = { 1,2,3,4,5 };
//	int* p;
//	p = a;
//	cout << a<<endl;
//	cout << *a << endl;;
//	cout << a + 1<<endl;
//	cout << *(a + 1) << endl;
//
//	cout << &a[0]<<endl << (a + 0)<<endl;
//	cout << a[0]<<endl << *(a)<<endl;
//
//	int b[] = { 2,4,5,8,1 };
//	cout << b << endl;
//		cout << &b[0] << endl;
//	cout << b[0] << endl;
//		cout<< *b;*/
//}