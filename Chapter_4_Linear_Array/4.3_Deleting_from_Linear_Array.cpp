// //(Deleting from a Linear Array) 
// #include <bits/stdc++.h>
// using namespace std;

// void deleteelement(int a[], int k, int &n) 
// {

//     if (k < 1 || k > n) 
//     {
//         cout << "Invalid Position" << endl;
//         return;
//     }
    
//     for (int i = k - 1; i < n - 1; i++) 
//     {
//         a[i] = a[i + 1];
//     }
//     n -= 1; 
// }

// int main() 
// {
//     int n;
//     //cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int a[n]; 
//     //cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> a[i];
//     }

//     int k;
//     //cout << "Enter the position to delete: ";
//     cin >> k;

//     deleteelement(a, k, n);

//     cout << "New Array: ";
//     for (int i = 0; i < n; i++) 
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void deletion(int k,int a[],int &n)
{
    if(k<1||k>n)
    {
        cout<<"NOT posibale\n";
        return;
    }
    for(int i=k-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n-=1;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    deletion(k,a,n);
    cout<<"NEW Array:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}