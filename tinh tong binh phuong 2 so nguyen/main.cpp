#include <iostream>
#include <cmath>

using namespace std;

int square(int num);
int square(int num) { return num * num; }

int main()
{
    int first_integer;
    int second_integer;

    cout << "nhap so nguyen thu 1:";
    cin >> first_integer;
    cout << "nhap so nguyen thu 2:";
    cin >> second_integer;
    cout << "tong binh phuong 2 so nguyen:" << square(first_integer) + square(second_integer);
}

