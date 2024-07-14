#include <bits/stdc++.h>

using namespace std;

bool is_perfect_number(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n % 2 == 1)
    {
        return false;
    }

    int p = 2;
    while (n % (int)pow(2, p) == 0)
    {
        p++;
    }

    return n == (int)pow(2, p - 1) * ((int)pow(2, p - 1) - 1);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (is_perfect_number(number))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}