/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ind = -1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i + 1] > v[i])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[ind] < v[i])
            {
                swap(v[ind], v[i]);
                break;
            }
        }
        reverse(v.begin() + ind + 1, v.end());
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}
