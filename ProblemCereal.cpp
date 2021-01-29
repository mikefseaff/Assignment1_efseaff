#include <iostream>
using namespace std;

int main (int argc, char **argv){
    /*
    metricTon is a double that records the weight of a metric ton in ounces 
    boxOunces is a double that records the weight of the cereal box in ounces (input from command line) 
    boxMetricTon is a double that records the weight of the cereal box in metric tons
    boxesNeeded in a double that records how many cereal boxes it will take to equal a metric ton
    */
	double metricTon = 35273.92;
    double boxOunces = atof(argv[1]);
    double boxMetricTon;
    double boxesNeeded;
    //invalid input check
    if (boxOunces > 0){
        boxMetricTon = boxOunces/metricTon;
        boxesNeeded = metricTon/boxOunces;
        cout << "the cereal box weighs " << boxMetricTon << " metric tons." << endl;
        cout << "it would take " << boxesNeeded << " boxes of that cereal to weigh a metric ton." << endl;
    }
    else {
        cout << "Input invalid. Please ensure the value is a number and is greater than 0" << endl;
    }
   
	return 0;
}