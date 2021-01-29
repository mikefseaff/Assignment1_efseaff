#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char **argv){
    /*
    hoursWorked is a double representing the hours worked in a week for the employee
    payRate is a double representing the pay per hour for the employee
    totalPay is a double representing the total gross pay for the employee over the week
    socialSecurity is a double representing the amount taken out of the totalPay for the Social Security tax
    federalTax is a double representing the amount taken out of the totalPay for the Federal Income tax
    stateTax is a double representing the amount taken out of the totalPay for the State Income tax
    */
    double hoursWorked = atof(argv[1]);
    double payRate = 16;
    double totalPay;
    double socialSecurity;
    double federalTax;
    double stateTax;
    double medical = 10;
    //valid input check
    if (hoursWorked > 0){
        //overtime extra pay check
        if (hoursWorked > 40){
            totalPay = 40*payRate;
            totalPay += ((payRate*1.5) * (hoursWorked - 40));
        }
        else {
            totalPay = hoursWorked*payRate;
        }
        // ensures the amount is rounded to 2 decimal places (is repeated for all values)
        totalPay = std::ceil(totalPay * 100.0) / 100.0;
        socialSecurity = totalPay * .06;
        federalTax = totalPay * .14;
        stateTax = totalPay * .05;
        socialSecurity = std::ceil(socialSecurity * 100.0) / 100.0;
        federalTax = std::ceil(federalTax * 100.0) / 100.0;
        stateTax = std::ceil(stateTax * 100.0) / 100.0;
        
        cout << "Gross pay: " << totalPay << endl;
        cout << "Social Security Tax: " << socialSecurity << endl; 
        cout << "Federal Income Tax: " << federalTax << endl; 
        cout << "State Income Tax: " << stateTax << endl; 
        cout << "Medical Insurance: " << medical << endl; 
        cout << "Net Pay : " << totalPay - socialSecurity - federalTax - stateTax - medical << endl;
    }
    else {
        cout << "Invalid input or hours worked is less than or equal to 0. Please put a valid amount of hours (ex 45.76)" << endl;
    }
    
	return 0;
}