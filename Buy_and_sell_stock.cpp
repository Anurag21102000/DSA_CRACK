#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{7,1,5,3,6,4};
    int minimum=arr[0];
    int res=0;
    for(int i=1;i<arr.size();i++)
    {
        res=max(res,arr[i]-minimum);
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
    }
    cout<<res<<endl;
}