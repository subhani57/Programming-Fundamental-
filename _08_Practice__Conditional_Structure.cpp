//
////int main()
////{
////		// Retrieve a random number between 100 and 200
////		// Offset = 100
////		// Range = 101
////	srand((unsigned)time(NULL));
////	for (int i = 1;i <= 1000;i++) {
////		int random_Number1 = 100 + (rand() % 101);
////		int random_Number2 = 100 + (rand() % 101);
////		int sum;
////		cout << "   " << random_Number1 << endl;;
////		cout << "+  " << random_Number2 << endl;;
////		cout << "-------" << endl;;
////		cout << "Hey Kido!Enter Your Answer :";cin >> sum;
////		if ((random_Number1 + random_Number2) != sum)
////			cout << "OOPs Kido! Your answer is incorrect. Keep doing the hard word. You will crack it one day." << endl;
////		else
////			cout << "Hurrahhhhh!!! Your answer is Correct";
////	}
////}
////Write a program that asks for the starting timeand the number of minutes of the call, and displays the
////charges.The program should ask for the time to be entered as a floating - point number in the form
////HH.MM.For example, 07:00 hours will be entered as 07.00, and 16 : 28 hours will be entered as 16.28.
////Input Validation : The program should not accept a time value, which is greater than 23 : 59.
////Also, no number whose last two digits are greater than 59 should be accepted.
////Hint :
////	Assuming num is a floating - point variable, the following expression will give you its fractional part :
////num - (int)num
//
//
////int main()
////{
////	float start_Time = 06.20;
////	float no_of_Minutes = 90;
////	/*cout << "Enter the Time when Call start";
////	cin >> start_Time;
////	cout << "Enter Number of Minutes";
////	cin >> no_of_Minutes;*/
////	int charges;
////	float start_time_minute= start_Time -(int)start_Time;
////	start_time_minute = start_time_minute * 100;
////	float start_time_hour=(int)start_Time;
////	float minutes;
////	float hours;
////	minutes = ((int)start_time_minute + (int)no_of_Minutes) % 60;//49
////	hours = (start_time_hour + (((int)(start_time_minute + no_of_Minutes) / 60)));//7
////	float time = (float)hours + (float)(minutes / 100);//7.49
////	int total_charges;
////	if (time > 0.0 && time < 06.59) {
////		time = time - start_Time;
////		charges = .12;
////	}
////	else if (time > 07.00 && time < 19.00)
////		charges = .55;
////	else if (time > 19.01 && time < 23.59)
////		charges = .35;
////
////
////}
//
////int main()
////{
////	double time, time2, minutes, charges;
////
////	cout << "===========================programology=====================\n"
////		<< "               Long distance calls\n"
////		<< "=============================programology===================\n\n";
////
////	cout << "Enter the starting time of the call (HH.MM): ";
////	cin >> time;
////
////	time2 = time - static_cast<int>(time);  //gets the fractional part (minutes)
////
////	if (time2 > .59)
////	{
////		cout << "Starting time (minutes) cannot be greater than 59!!\n\n"
////			<< "Enter the time again (HH.MM): ";
////		cin >> time;
////	}
////
////	if (time > 23.59)
////	{
////		cout << "Starting time cannot be greater than 23:59!!\n\n"
////			<< "Enter the starting time again (HH.MM): ";
////		cin >> time;
////	}
////
////	cout << "Enter the duration of the call (minutes): ";
////	cin >> minutes;
////	if (minutes < 0)
////	{
////		cout << "Minutes cannot be less than 0!!\n\n"
////			<< "Enter the duration of the call (minutes) again: ";
////		cin >> minutes;
////	}
////
////	cout << fixed << setprecision(2);
////	if (time >= 0.00 && time <= 6.59)
////	{
////		charges = minutes * 0.12;
////		cout << "Cost for the call: $" << charges << "\n\n";
////	}
////	if (time >= 7.0 && time <= 19.0)
////	{
////		charges = minutes * 0.55;
////		cout << "Cost for the call: $" << charges << "\n\n";
////	}
////	if (time >= 19.01 && time <= 23.59)
////	{
////		charges = minutes * 0.35;
////		cout << "Cost for the call: $" << charges << "\n\n";
////	}
////
////	system("pause");
////
////	return 0;
////}
////
////int main()
////{
////	float StartTime, Length, Mins, Hrs, Charges, StartMins, LengthInMins;
////
////
////	// Ask user for the starting time and the number of minutes of the call.
////	cout << "This program calculates your long-distance telephone charges.\n";
////	cout << "Enter the starting time of the call as a floating-point number\n"
////		<< "in the form HH.MM: ";
////	cin >> StartTime;
////	cout << "Enter the number of minutes of the call in the form HH.MM: ";
////	cin >> Length;
////
////	Hrs = static_cast<int>(Length);
////	Mins = Length - static_cast<int>(Length);
////	LengthInMins = (Hrs * 60) + (Mins * 100);
////	StartMins = StartTime - static_cast<int>(StartTime);
////
////	if (Mins <= .59 && StartMins <= .59)
////	{
////		cout << fixed << showpoint << setprecision(2);
////		if (StartTime >= 00.00 && StartTime <= 06.59)
////		{
////			Charges = LengthInMins * 0.12;
////			cout << "Cost of call: $" << Charges << endl;
////		}
////		else if (StartTime <= 19.00)
////		{
////			Charges = LengthInMins * 0.55;
////			cout << "Cost of call: $" << Charges << endl;
////		}
////		else if (StartTime <= 23.59)
////		{
////			Charges = LengthInMins * 0.35;
////			cout << "Cost of call: $" << Charges << endl;
////		}
////		else
////			cout << "Error! Call times cannot be less than\n00.00 minutes"
////			<< " or greater than 23.59 minutes.\n";
////	}
////	else
////		cout << "Error! Last two digts in the numbers"
////		<< " must be less than 59.\n";
////	return 0;
////}
//
////int main() {
////
////
////	int age;
////	char name[50];
////	cin >> age;
////	cin.getline(name, 50);
////	cout << age ;
////	cout << name;
////}
//// int main(){
////int day = 4;
////switch (day) {
////case 1:
////    cout << "Monday";
////    break;
////case 2:
////    cout << "Tuesday";
////    break;
////case 3:
////    cout << "Wednesday";
////    break;
////case 4:
////    cout << "Thursday";
////    break;
////case 5:
////    cout << "Friday";
////    break;
////case 6:
////    cout << "Saturday";
////    break;
////case 7:
////    cout << "Sunday";
////    break;
////}
////}
//
// //Write a program that can be used as a math tutor for a young student.The program should display
// //    two random numbers to be added, or subtracted, divided or , multiplied.It is an extension to the Task -
// //    2 of this practice file.In which your program will randomly decide the type of operation
// //    (add / divided / multiply / subtract / Mod).
// //    Note: In case of any operation, both the operands signs will be chosen randomly.
//
//
////int main()
////{
////	// Retrieve a random number between 100 and 200
////	// Offset = 100
////	// Range = 101
////	srand((unsigned)time(NULL));
////	int max = 4;
////	int min = 0;
////	
////	for (int i = 1;i <= 100;i++)
////	{
////		int randNum = rand() % (max - min + 1) + min;
////		int randOperation = randNum % 2;
////		char sign;
////		string operation;
////		if (randOperation == 0)
////			sign = '+';
////		else
////			sign = '-';
////
////
////		if (randNum == 0)
////			operation = "ADD";
////		else if (randNum == 1)
////			operation = "SUB";
////		else if (randNum == 2)
////			operation = "MUL";
////		else if (randNum == 3)
////			operation = "DIV";
////		else
////			operation = "MOD";
////		switch (randNum)
////		{
////		case 0: {
////			int random_Number1 = 100 + (rand() % 101);
////			int random_Number2 = 100 + (rand() % 101);
////			int sum;
////			cout << sign << "   " << random_Number1 << endl;;
////			cout << sign << "  " << random_Number2 << "   " << operation << endl;;
////			cout << "-------" << endl;;
////			cout << "Hey Kido!Enter Your Answer :";cin >> sum;
////			if ((random_Number1 + random_Number2) != sum)
////				cout << "OOPs Kido! Your answer is incorrect. Keep doing the hard word. You will crack it one day." << endl;
////			else
////				cout << "Hurrahhhhh!!! Your answer is Correct" << endl;
////			break;
////		}
////		case 1:
////		{
////			int random_Number1 = 100 + (rand() % 101);
////			int random_Number2 = 100 + (rand() % 101);
////			int sum;
////			cout << sign << "   " << random_Number1 << endl;;
////			cout << sign << "  " << random_Number2 << "   " << operation << endl;;
////			cout << "-------" << endl;;
////			cout << "Hey Kido!Enter Your Answer :";cin >> sum;
////			if ((random_Number1 - random_Number2) != sum)
////				cout << "OOPs Kido! Your answer is incorrect. Keep doing the hard word. You will crack it one day." << endl;
////			else
////				cout << "Hurrahhhhh!!! Your answer is Correct" << endl;
////			break;
////		}
////
////		case 2: {
////			int random_Number1 = 100 + (rand() % 101);
////			int random_Number2 = 100 + (rand() % 101);
////			int sum;
////			cout << sign << "   " << random_Number1 << endl;;
////			cout << sign << "  " << random_Number2 << "   " << operation << endl;;
////			cout << "-------" << endl;;
////			cout << "Hey Kido!Enter Your Answer :";cin >> sum;
////			if ((random_Number1 * random_Number2) != sum)
////				cout << "OOPs Kido! Your answer is incorrect. Keep doing the hard word. You will crack it one day." << endl;
////			else
////				cout << "Hurrahhhhh!!! Your answer is Correct" << endl;
////			break;
////		}
////
////		}
////	}
////}
//
////In this task, our goal is to develop a program, which should be able to guess a number in user’s mind.
////This program will ask the user to think of any number in the range of 1 ~1000.
////Your program should be sharp / intelligent enough to guess the number in user’s mind in not more
////than 10 unsuccessful attempts.At each attempt your program can ask the user the following queries :
////Assume your program guess a number ‘X’, then the program will ask from user :
////§ Is the hidden number equal to ‘X’.
////§ Is the hidden number less than ‘X’.
////§ Is the hidden number greater than ‘X’.
//
////int main()
////{
////	cout << "Guess The Number"<<endl;
////	int max = 1000;
////	int min = 0;
////	int guess = (max+min)/2;
////	int iteration=1;
////	char Ans;
////	while (iteration <= 10)
////	{
////		cout << "The Number is Equal to " << guess << endl;
////		cin >> Ans;
////		if (Ans == 'Y' || Ans == 'y')
////		{
////			cout << "Hurrah";
////			break;
////		}
////		else if (Ans == 'N' || Ans == 'n')
////		{
////			cout << "Is the hidden number less than " << guess << endl;;
////			cout << "Is the hidden number greater than " << guess << endl;
////		}
////		else {
////			cout << "I didnt Understand YOur Output";
////			cin >> Ans;
////		}
////
////		cin >> Ans;
////		if (Ans == 'G' || Ans == 'g')
////		{
////			guess = (guess + (guess * 2)) / 2;
////		}
////		else if (Ans == 'L' || Ans == 'l')
////		{
////			guess = guess / 2;
////		}
////		else
////			cout << "I didnt Understand YOur Output";
////	
////
////		iteration++;
////	}
////}
//
////Task 5: Internet Service Provider, Part 1
////An Internet service provider has three different subscription packages for its customers :
////Package A : For $9.95 per month 10 hours of access are provided.Additional hours are $2.00 per
////hour.
////Package B : For $14.95 per month 20 hours of access are provided.Additional hours are $1.00 per
////hour.
////Package C : For $19.95 per month unlimited access is provided.
////Write a program that calculates a customer’s monthly bill.It should ask which package the customer
////has purchased and how many hours were used.It should then display the total amount due.
////Input Validation : Be sure the user only selects package A, B, or C.Also, the number of hours used in a
////month cannot exceed 744.
//
////int main()
////{
////	char packages;
////	int remaining_Hours;
////	double montly_Due=0;
////	int daily_usage ;
////	int max_Montly_Usage;
////	double extra_Hour_Charges;
////	double bill;
////	int value=0;
////	cout << "Select The packages : ";
////	cin >> packages;
////	int hours;
////	cout << "Enter The No of Hour Customers used in month: ";
////	cin >> hours;
////	cout << endl;
////	while (hours > 744)
////	{
////		cout << "Hour can not exceed than 744" << endl;;
////		cout << "again output" << endl;;
////		cin >> hours;
////	}
////
////	if (packages == 'A' || packages == 'a')
////		value = 0;
////	else if (packages == 'B' || packages == 'b')
////		value = 1;
////	else if (packages == 'C' || packages == 'c')
////		value = 2;
////	else {
////		cout << "Packages Not Exist CHoose Package A ,B,C";
////		value = 3;
////	}
////
////	
////
////
////	switch (value) {
////
////	case 0:
////		montly_Due = 9.95;
////		daily_usage = 10;
////		max_Montly_Usage = daily_usage * 30;
////		if (hours > max_Montly_Usage) {
////			remaining_Hours = abs(max_Montly_Usage - hours);
////		}
////		else
////			remaining_Hours = 0;
////		extra_Hour_Charges = remaining_Hours * 2.0;
////		bill = montly_Due + extra_Hour_Charges;
////		cout << "The total amount due for the Month is :";
////		cout << bill;
////		break;
////
////	case 1:
////		montly_Due = 14.95;
////		daily_usage = 20;
////		max_Montly_Usage = daily_usage * 30;
////		if (hours > max_Montly_Usage) {
////			remaining_Hours = abs(max_Montly_Usage - hours);
////		}
////		else
////			remaining_Hours = 0;
////		extra_Hour_Charges = remaining_Hours * 1.0;
////		bill = montly_Due + extra_Hour_Charges;
////		cout << "The total amount due for the Month is :";
////		cout << bill;
////		break;
////
////	case 2 :
////		montly_Due = 19.95;
////		bill = montly_Due;
////		cout << "The total amount due for the Month is :";
////		cout << bill;
////		break;
////
////	case 3:
////		break;
////	}
////	
////}
//	/*Modify the Program in Task - 7 so that it also displays how much money Package A customers would
//		save if they purchased packages B or C, and how much money Package B customers would save if they
//		purchased Package C.If there would be no savings, no message should be printed.*/
//
//		//int main()
//		//{
//		//	char packages;
//		//	double montly_Due=0,bill_Of_A,bill_Of_B,bill_of_C,remaining_Hours_A,remaining_Hours_B,montly_Due_A ,daily_usage_A,max_Montly_Usage_A 
//		//		,extra_Hour_Charges_A,montly_Due_B,daily_usage_B,max_Montly_Usage_B ,extra_Hour_Charges_B;
//		//	int value = 0;
//		//
//		//	cout << "Select The packages : ";
//		//	cin >> packages;
//		//	int hours;
//		//	cout << "Enter The No of Hour Customers used in month: ";
//		//	cin >> hours;
//		//	cout << endl;
//		//	while (hours > 744)
//		//	{
//		//		cout << "Hour can not exceed than 744" << endl;;
//		//		cout << "again output" << endl;;
//		//		cin >> hours;
//		//	}
//		//
//		//	if (packages == 'A' || packages == 'a')
//		//		value = 0;
//		//	else if (packages == 'B' || packages == 'b')
//		//		value = 1;
//		//	else if (packages == 'C' || packages == 'c')
//		//		value = 2;
//		//	else {
//		//		cout << "Packages Not Exist CHoose Package A ,B,C";
//		//		value = 3;
//		//	}
//		//
//		//	switch (value) {
//		//
//		//	case 0:
//		//		 montly_Due_A = 9.95;
//		//		daily_usage_A = 10;
//		//		 max_Montly_Usage_A = daily_usage_A * 30;
//		//		if (hours > max_Montly_Usage_A) {
//		//			remaining_Hours_A = abs(max_Montly_Usage_A - hours);
//		//		}
//		//		else
//		//			remaining_Hours_A = 0;
//		//		extra_Hour_Charges_A = remaining_Hours_A * 2.0;
//		//		bill_Of_A = montly_Due_A + extra_Hour_Charges_A;
//		//
//		//	case 1:
//		//		 montly_Due_B = 14.95;
//		//		 daily_usage_B = 20;
//		//		max_Montly_Usage_B = daily_usage_B * 30;
//		//		if (hours > max_Montly_Usage_B) {
//		//			remaining_Hours_B = abs(max_Montly_Usage_B - hours);
//		//		}
//		//		else
//		//			remaining_Hours_B = 0;
//		//		extra_Hour_Charges_B = remaining_Hours_B * 1.0;
//		//		bill_Of_B = montly_Due_B + extra_Hour_Charges_B;
//		//
//		//	case 2 :
//		//		montly_Due = 19.95;
//		//		bill_of_C = montly_Due;
//		//
//		//	case 3:
//		//		break;
//		//	}
//		//	
//		//	switch (value)
//		//	{
//		//	case 0:
//		//		cout << "Your bill is " << bill_Of_A << endl;;
//		//		double saving;
//		//		if (hours > 600)
//		//		{
//		//			saving = bill_Of_A - bill_Of_B;
//		//			cout << "If your choose B Then You can save " << saving << endl;;
//		//		}
//		//		else {
//		//			saving = bill_Of_A - montly_Due_B;
//		//			cout << "If your choose B Then You can save " << saving << endl;;
//		//		}
//		//		saving = bill_Of_A - bill_of_C;
//		//		cout << "If your choose C Then You can save " << saving;
//		//	}
//		//}
//
//
//		//Task 7: Internet Service Provider, Part 3
//		//Months with 30 days have 720 hours, and months with 31 days have 744 hours.February, with 28
//		//days, has 672 hours.Enhance the input validation of the Internet Service Provider program by asking
//		//the user for the month(by name), and validating that the number of hours entered is not more than
//		//the maximum for the entire month.
//		//Here is a table of the months, their days, and number of hours in each.
//		//Month Days Hours
//#include "_08_Practice__Conditional_Structure.h"
//#include<iostream>
//#include <iomanip>
//using namespace std;
//
//
//int main()
//{
//	string month_Name;
//	cout << "Enter The Month Name For Bill : ";
//	cin >> month_Name;
//	cout << endl;
//	bool flag = true;
//	int values = 0;
//	while(flag) {
//		if (month_Name == "Jan") {
//			values = 0;
//			flag = false;
//		}
//		else if (month_Name == "Feb") {
//			values = 1;
//			flag = false;
//		}
//
//		else if (month_Name == "Mar") {
//			values = 2;
//			flag = false;
//		}
//
//		else if (month_Name == "Apr") {
//			values = 3;
//			flag = false;
//		}
//		else if (month_Name == "May") {
//			values = 4;
//			flag = false;
//		}
//		else if (month_Name == "Jun") {
//			values = 5;
//			flag = false;
//		}
//		else if (month_Name == "Jul") {
//			values = 6;
//			flag = false;
//		}
//		else if (month_Name == "Aug") {
//			values = 7;
//			flag = false;
//		}
//		else if (month_Name == "Sep") {
//			values = 8;
//			flag = false;
//		}
//		else if (month_Name == "Oct") {
//			values = 9;
//			flag = false;
//		}
//		else if (month_Name == "Nov") {
//			values = 10;
//			flag = false;
//		}
//		else if (month_Name == "Dec") {
//			values = 11;
//			flag = false;
//		}
//		else {
//			cout << "Month is Not Valid use the format first capital then small 2 letters e.g Jan,Feb" << endl;;
//			cout << endl;
//			cout << "Again Enter Month In Correct Format " << endl;;
//			cin >> month_Name;
//			
//		}
//	}
//
//	int max_hour;
//	int hours = 24;
//
//	switch (values)
//	{
//	case 0:
//		max_hour = hours * 31;
//		break;
//	case 1:
//		max_hour = hours * 28;
//		break;
//	case 2:
//		max_hour = hours * 31;
//		break;
//	case 3:
//		max_hour = hours * 30;
//		break;
//	case 4:
//		max_hour = hours * 31;
//		break;
//	case 5:
//		max_hour = hours * 30;
//		break;
//	case 6:
//		max_hour = hours * 31;
//		break;
//	case 7:
//		max_hour = hours * 31;
//		break;
//	case 8:
//		max_hour = hours * 30;
//		break;
//	case 9:
//		max_hour = hours * 31;
//		break;
//	case 10:
//		max_hour = hours * 30;
//		break;
//	case 11:
//		max_hour = hours * 31;
//		break;
//
//	}
//	int used_hours;
//	cout << "Enter The No of Hour Customers used in month: ";
//	cin >> used_hours;
//	while (used_hours > max_hour)
//	{
//		cout << "The max limit for this month is " << max_hour << "Again Check Input " << endl;;
//		cout << "Check Input ";
//		cout << "Enter Again The No of Hour Customers used in month: " << endl;;
//
//		cin >> used_hours;
//		cout << endl;
//
//	}
//	char packages;
//	double montly_Due = 0, bill_Of_A, bill_Of_B, bill_of_C, remaining_Hours_A, remaining_Hours_B, montly_Due_A, daily_usage_A, max_Montly_Usage_A
//		, extra_Hour_Charges_A, montly_Due_B, daily_usage_B, max_Montly_Usage_B, extra_Hour_Charges_B;
//	int value = 0;
//
//	cout << "Select The packages : ";
//	cin >> packages;
//	while (hours > 744)
//	{
//		cout << "Hour can not exceed than 744" << endl;;
//		cout << "again output" << endl;;
//		cin >> hours;
//	}
//
//	if (packages == 'A' || packages == 'a')
//		value = 0;
//	else if (packages == 'B' || packages == 'b')
//		value = 1;
//	else if (packages == 'C' || packages == 'c')
//		value = 2;
//	else {
//		cout << "Packages Not Exist CHoose Package A ,B,C";
//		value = 3;
//	}
//
//	switch (value) {
//
//	case 0:
//		montly_Due_A = 9.95;
//		daily_usage_A = 10;
//		max_Montly_Usage_A = daily_usage_A * 30;
//		if (used_hours > max_Montly_Usage_A) {
//			remaining_Hours_A = abs(max_Montly_Usage_A - used_hours);
//		}
//		else
//			remaining_Hours_A = 0;
//		extra_Hour_Charges_A = remaining_Hours_A * 2.0;
//		bill_Of_A = montly_Due_A + extra_Hour_Charges_A;
//
//	case 1:
//		montly_Due_B = 14.95;
//		daily_usage_B = 20;
//		max_Montly_Usage_B = daily_usage_B * 30;
//		if (used_hours > max_Montly_Usage_B) {
//			remaining_Hours_B = abs(max_Montly_Usage_B - used_hours);
//		}
//		else
//			remaining_Hours_B = 0;
//		extra_Hour_Charges_B = remaining_Hours_B * 1.0;
//		bill_Of_B = montly_Due_B + extra_Hour_Charges_B;
//
//	case 2:
//		montly_Due = 19.95;
//		bill_of_C = montly_Due;
//
//	case 3:
//		break;
//	}
//
//	switch (value)
//	{
//	case 0:
//		cout << "Your bill is " << bill_Of_A << endl;;
//		double saving;
//		if (used_hours >= 600)
//		{
//			saving = bill_Of_A - bill_Of_B;
//			cout << "If your choose B Then You can save " << saving << endl;;
//		}
//		else if(used_hours >300 && used_hours <600) {
//			saving = bill_Of_A - montly_Due_B;
//			cout << "If your choose B Then You can save " << saving << endl;;
//		}
//		else
//			cout << "If your choose B Then You can save Nothing  " << endl;;
//		if (used_hours > 300) {
//			saving = bill_Of_A - bill_of_C;
//			cout << "If your choose C Then You can save " << saving;
//		}
//		else
//		{
//			cout << "If your choose C Then You can save Nothing ";
//		}
//		break;
//	case 1:
//		cout << "Your bill is " << bill_Of_B << endl;;
//		if (used_hours > 600) {
//			saving = bill_Of_B - bill_of_C;
//			cout << "If your choose C Then You can save " << saving;
//		}
//		else
//		{
//			cout << "If your choose C Then You can save Nothing ";
//		}
//		break;
//
//	case 2:
//		cout << "Your bill is " << bill_of_C << endl;;
//		break;
//
//
//	}
//}