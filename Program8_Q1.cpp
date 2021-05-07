#include<iostream>
using namespace std;
void get_user_input(int i, double val[]);//function prototypes
double find_highest(int i, double val[], double high);
double find_lowest(int i, double val[], double low);
const int SIZE = 10;//global constant to set size of array
int main()
{
    int i;
    double values[SIZE], highest = 0, lowest = values[0];//declaring array that can hold 10 integers, declaring other variables
    cout << "Enter 10 numbers and I will return the highest and lowest of them.";
    cout << endl << endl;
    get_user_input(i, values);//function call to gather user inout
    highest = find_highest(i, values, highest);//calling double functions to find the highest and lowest of the input
    lowest = find_lowest(i, values, lowest);//then assigning the returned values to variables
    cout << "Your lowest value is " << lowest << ", and your highest value is ";
    cout << highest << "." << endl << endl;//displaying results
    return 0;
}
void get_user_input(int i, double val[])//input function
{
    for(i = 0; i < SIZE; i++)//for loop to fill each array element with user input
    {   cout << "Please enter value #" << i + 1 << ": ";
        cin >> val[i];
        cout << endl;
    }
}
double find_highest(int i, double val[], double high)//function to find highest element of array
{
    for(i = 0; i < SIZE; i++)
    {   if(val[i] > high)
        high = val[i];
    }
    return high;//returns highest value
}
double find_lowest(int i, double val[], double low)//function to find lowest element of array
{
    for(i = 0; i < SIZE; i++)
    {   if(val[i] < low)
        low = val[i];
    }
    return low;//returns lowest value
}