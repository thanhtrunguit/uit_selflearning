#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
        int integer_number; //from 100-999
        int remainder;

        cout << "put in the integer_number: ";
        cin >> integer_number;
        cout << "the integer_number is: " << integer_number << endl;

        if(integer_number < 999 and integer_number > 100)
        {// return hundredth number
            cout << "hundredth: " << integer_number / 100 << endl;

            integer_number = integer_number % 100;
            remainder = integer_number % 10;

            // return tenth number
            cout << "tenth: " << integer_number / 10 << endl;

            // return number
            cout << "number: " << remainder;
        }
        else {cout << "error, the integer_number is bigger or smaller than the limit!"; }


}