//#include "_07_Practice__Input__Type_Coercion__Type_Casting.h"
////int  main()
////{
////	int number1, number2;
////	float quotient;
////	cout << "Enter two numbers and I will divide\n";
////	cout << "the first by the second for you.\n";
////	cin >> number1, number2;
////	//In your book following syntax is used
////	//quotient = float<static_cast>(number1) / number2;
////	//but in class initially we shall use C Style type cast
////	quotient = (float)number1 / number2;
////	cout << quotient;
////}
////#include <iostream>
////#include <iomanip>
////using namespace std;
////void main()
////{
////	double cost;
////	double area;
////	double bagSize;
////	cout << fixed << showpoint << setprecision(2);
////	cout << "Enter the amount of fertilizer, in pounds, " << "in one bag: ";
////	cin >> bagSize;
////	cout << endl;
////	cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
////	cin >> cost;
////	cout << endl;
////	cout << "Enter the area, in square feet, that can be " << "fertilized by one bag: ";
////	cin >> area;
////	cout << endl;
////	cout << "The cost of the fertilizer per pound is: $" << bagSize / cost << endl;
////	cout << "The cost of fertilizing per square foot is: $" << area / cost << endl;
////}
//
//#include <iostream>
//#include <iomanip>  // setprecision() setw()
//#include <cmath>    // pow(6, 2) 6^2
//using namespace std;
//
//int main()
//{
//    // Constant
//    const int ONE = 1,
//        HUNDRED = 100,
//        NUMBER_OF_MONTHS = 12;
//
//    // Variables
//    int N;
//
//    float Rate,
//        L,
//        Payment,
//        amount_paid_back,
//        interest_paid;
//
//    // Ask the user for Rate, number of paymets, and amount of the loan
//    cout << endl;
//    cout << "What is interest rate of the loan? %";
//    cin >> Rate;
//    cout << "What is the Amount of the loan? ";
//    cin >> L;
//    cout << "Number of payments? ";
//    cin >> N;
//
//    // Calculation
//    Rate /= NUMBER_OF_MONTHS;
//
//    Rate /= HUNDRED; // 4.25% == .0425
//
//    // Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L
//    Payment = ((Rate)*pow(ONE + (Rate), N) / (pow(ONE + (Rate), N) - ONE)) * L;
//
//    Rate *= HUNDRED; // .0425 == 4.25
//
//    amount_paid_back = N * Payment;
//
//    interest_paid = (N * Payment) - L;
//
//    // Display
//    /************************************************
//     *       Loan Amount:            $ 10000.00     *
//     *       Monthly Interest Rate:          1%     *
//     *       Number of Payments:             36     *
//     *       Monthly Payment:        $   332.14     *
//     *       Amount Paid Back:       $ 11957.15     *
//     *       Interest Paid:          $  1957.15     *
//     ************************************************/
//
//    cout << setprecision(2) << fixed << right << endl;
//
//    cout << "Loan Amount:           $";
//    cout << setw(10) << L << endl;
//
//    cout << "Monthly Interest Rate: ";
//    cout << setw(10) << Rate << '%' << endl;
//
//    cout << "Number of Payments:     ";
//    cout << setw(10) << N << endl;
//
//    cout << "Monthly Payment:       $";
//    cout << setw(10) << Payment << endl;
//
//    cout << "Amount Paid Back:      $";
//    cout << setw(10) << amount_paid_back << endl;
//
//    cout << "Interest Paid:         $";
//    cout << setw(10) << interest_paid;
//
//    cout << endl << endl;
//
//
//    // Terminate Program
//    return 0;
//}