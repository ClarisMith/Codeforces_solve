#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin >> n;
    int m = n;
    if(m==n)
    {
        cout << "int" << " " << m;
    }
    else
    {
        cout << "float" << " " << m << " " << fixed << setprecision(3) << n-m;
    }
}