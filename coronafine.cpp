/* Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[])
{
    int n, fine;
    string action;
    cin >> n;

    if (n <= 100) {
        fine = 0;
        action = " No Fine";
    } else if (n <= 200) {
        fine = (n - 100) * 500;
        action = " Warning";
    } else {
        fine = (n - 100) * 1000;
        action = " Register Case";
    }

    cout << fine << action << endl;
}
