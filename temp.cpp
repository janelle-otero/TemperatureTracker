#include <iostream>
#include <iomanip>
using namespace std;

/* Name: Janelle Otero
Date: 9/30/19
Section: 10
Assignment: Homework #3
Due Date: 10/4/19
About this project: With this project I will be able to calculate the temperature from Fahrenheit to Celcius. Then I will show the user how many temperatures I converted and what teh average of those temperatures were.

All work below was performed by Janelle Otero */

int main() {

    //setting up the degrees as doubles to be decimals, allowing the user to put Y/y/N/n to another temp, and initiating counter

    double degreesinF;
    double degreesinC;
    char anothertemp;
    int count = 1;

    //initiating the while loop

    while (true) {

        double totaldegrees;

        //asking for the temperature in Fahrenehit

        cout << "Temperature to convert from F to C: ";
        cin >> degreesinF;

        //calculation for turning Fahrenheit to Celcius

        degreesinC = (5.0 / 9) * (degreesinF - 32);
        cout << degreesinF << " = " << fixed << setprecision(2) << degreesinC << "C";
        totaldegrees += degreesinC; //keeping up with sum of the total temps input by the user


        cout << "\nEnter another? (Y or N): " << endl;
        cin >> anothertemp;

        double avgcelcius;

        //if the user put yes then we can increase the counter and continue with the loop again

        if (anothertemp == 'Y' || anothertemp == 'y') {
            count ++;
            continue;

        //if the user said no then print out the number of times we went through the loop and the average of all the temperatures

        } else if (anothertemp == 'N' || anothertemp == 'n') {
            cout << "Number of Temps Converted: " << count << endl;
            avgcelcius = (totaldegrees/count);
            cout << "Average Temp: " << fixed << setprecision(2) << avgcelcius << "C" << endl;
            break;

        //exit program if random int/char input

        } else {
            cout << "Invalid Character Entry... Aborting program.";
            return 0;
        }
    }
    return 0;

}