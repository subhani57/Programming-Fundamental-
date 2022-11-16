#include<iostream>
using namespace std;
//Write a program that simulates a lottery.The program should have an array of five integers named
//lotteryand should generate a random number in the range of 0 through 9 for each element in the
//array.The user should enter five digits, which should be stored in an integer array named user.The
//program is to compare the corresponding elements in the two arraysand keep a count of the digits
//that match.For example, the following shows the lottery arrayand the user array with sample
//numbers stored in each.There are two matching digits(elements 2 and 4).
//Lottery Array : 7 4 9 1 3 User Array : 4 2 9 7 3
//The program should display the random numbers stored in the lottery array and the number of
//matching digits.If all of the digits match, display a message proclaiming the user as a grand prize
//winner.
//int main()
//{
//    int lottery[5];
//    srand((unsigned)time(NULL));
//    for (int i= 0;i < 5;i++)
//    {
//        lottery[i] = (rand() % 9) + 1;
//    }
//    for (int i = 0;i < 5;i++)
//    {
//        cout<<lottery[i];
//    }
//    cout << endl;;
//    int user[5];
//    cout << "ENter Your lottery No";
//    for (int i = 0;i < 5;i++)
//    {
//        cin >> user[i];
//    }
//    bool match = false;
//    for (int i = 0;i < 5;i++)
//    {
//        if (lottery[i] == user[i])
//            match = true;
//
//    }
//    if (match)
//        cout << "proclaiming the user as a grand prize winner";
//    else
//        cout << "Try Again Next Time";
// }

//Write a program that uses the following arrays :
//• empId : an array of seven long integers to hold employee identification numbers.
//The array should be initialized with the following numbers :
//5658845 4520125 7895122 8777541 8451277 1302850 7580489
//• hours : an array of seven integers to hold the number of hours worked by each employee.
//• payRate : an array of seven doubles to hold each employee’s hourly pay rate
//• wages : an array of seven doubles to hold each employee’s gross wages
//The program should relate the data in each array through the subscripts.For example, the number in
//element 0 of the ‘hours’ array should be the number of hours worked by the employee whose
//identification number is stored in element 0 of the ‘empId’ array.That same employee’s pay rate
//should be stored in element 0 of the ‘payRate’ array.
//The program should display each employee number and ask the user to enter that employee’s hours
//worked and pay rate.It should then calculate the gross wages for that employee(hours times pay
//	rate) and store them in the wages array.After the data has been entered for all the employees, the
//	program should display each employee’s identification numberand gross wages.
//	Input Validation : Do not accept negative values for hours or numbers less than 6.00 for pay rate.

//int main()
//{
//	int empId[7] = { 5658845, 4520125 ,7895122 ,8777541, 8451277, 1302850 ,7580489 };
//	int hours[7]={10,15,20,20,20,20,20};
//	double payRate[7]={2,2,2,2,2,2,2};
//	double wages[7];
//	for (int i = 0; i < 7; i++)
//	{
//		wages[i] = hours[i] * payRate[i];
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		cout << "Employee No: " << empId[i] << "\t" << wages[i];
//		cout << endl;;
//	}
//
//
//
//}

//The local Driver’s License Office has asked you to write a program that grades the written portion of
//the driver’s license exam.The exam has 20 multiple - choice questions.
//Here are the correct answers :
//1. B 6. A 11. B 16. C
//2. D 7. B 12. C 17. C
//3. A 8. A 13. D 18. B
//4. A 9. C 14. A 19. D
//5. C 10. D 15. D 20. A
//Your program should store the correct answers shown above in an array.It should ask the user to
//enter the student’s answers for each of the 20 questions, and the answers should be stored in another
//array.After the student’s answers have been entered, the program should display a message
//indicating whether the student passed or failed the exam. (A student must correctly answer 15 of the
//	20 questions to pass the exam.) It should then display the total number of correctly answered
//	questions, the total number of incorrectly answered questions, and a list showing the question
//	numbers of the incorrectly answered questions.
//	Note: Remember, we don’t know what char arrays are so don’t use them yet.

//int main()
//{
//	int correctAns[20] = { 97,98,99,100,97,98,99,100,97,98,99,100,97,98,99,100,97,98,99,100 };
//	int userAns[20] = { 97,98,99,100,98,99,100,98,99,100,98,99,100,98,99,100,98,99,100,98 };
//	int correct=0;
//	int incorrectAns=0;
//	int index[20];
//	char answer;
//	for (int i = 0; i < 1; i++)
//	{
//		cin >> answer;
//		userAns[i] = answer;
//	}
//	cout << userAns[0];
//	cout << "Incorrect Answer List is at:";
//	cout << endl;;
//	for (int i = 0; i < 20; i++)
//	{
//		if (userAns[i] == correctAns[i])
//		{
//			correct++;
//		}
//		else
//		{
//			incorrectAns++;
//			cout << i;
//			cout << endl;
//		}
//		
//	}
//	cout << "The number of correct answer is :" << correct;
//	cout << endl;
//	cout << "The number of incorrect answer is :" << incorrectAns;
//
//
//
//
//}