//Agorithm 4.6:Bubble sort

// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(int arr[], int n) 
// {
//     for (int i = 0; i < n - 1; i++) 
//     { 
//         for (int j = 0; j < n - i - 1; j++) 
//         {
//             if (arr[j] > arr[j + 1]) 
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n]; //= {64, 34, 25, 12, 22, 11, 90};
//     //int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          swap(a[j],a[j+1]);
        }
    }
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
}