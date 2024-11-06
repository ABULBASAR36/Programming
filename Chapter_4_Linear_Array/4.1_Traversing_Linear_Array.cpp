//Traversing a Linear Array) Here LA is a linear array with lower bound LB and
//upper bound UB. This algorithm traverses LA applying an operation PROCESS
//to each element of LA.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
}