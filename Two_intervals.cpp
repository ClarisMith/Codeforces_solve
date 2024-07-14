#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin >> l1 >>r1 >> l2 >>r2;
    if(r1>=l2 && r2>=l1)
    {
        if(l2>=l1)
        {
            l1=l2;
        }
        if(r1<=r2)
        {
            r2=r1;
        }
        cout << l1 <<" " << r2;
    }
    else
    {
        cout << "-1";
    }
}