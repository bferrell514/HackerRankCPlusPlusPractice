#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Write Your Code Here
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        cout << arr[n-1] << endl;
    } else {
        cout << "Greater than 9" << endl;
    }
}