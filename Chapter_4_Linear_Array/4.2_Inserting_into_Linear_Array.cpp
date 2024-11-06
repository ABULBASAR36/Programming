//Algorithm 4.2: (Inserting into a Linear Array)

// #include<bits/stdc++.h>
// using namespace std;

// void insertElement(int LA[], int &N, int K, int ITEM) 
// {
//     if (K < 1 || K > N + 1) 
//     {
//         cout << "Invalid position to insert." << endl;
//         return;
//     }

//     int J = N;

//     while (J >= K) 
//     {
//         LA[J] = LA[J - 1];
//         J--;
//     }

//     LA[K - 1] = ITEM;

//     N = N + 1;
// }

// int main() 
// {
//     int LA[100] = {1, 2, 3, 4, 5}; 
//     int N = 5; 
//     int K, ITEM;

//     cout << "Enter position to insert (1-based index): ";
//     cin >> K;
//     cout << "Enter the item to insert: ";
//     cin >> ITEM;

//     insertElement(LA, N, K, ITEM);

//     cout << "Array after insertion: ";
//     for (int i = 0; i < N; i++) {
//         cout << LA[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void insertelement(int a[], int x, int k, int &n) 
// {
    
//     if (k < 1 || k > n + 1) 
//     {
//         cout << "Invalid Position" << endl;
//         return;
//     }
   
//     for (int i = n; i >= k; i--) 
//     {
//         a[i] = a[i - 1];
//     }
//     a[k - 1] = x;
//     n += 1;
// }

// int main() 
// {
//     int n;
//     //cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int a[n + 1]; 
//     //cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int x, k;
//    // cout << "Enter the element to insert and the position: ";
//     cin >> x >> k;

//     insertelement(a, x, k, n);

//     cout << "New Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void insertion(int x,int k,int a[],int &n)
{
    if(k<1||k>n+1)
    {
        cout<<"NOT posibale\n";
        return;
    }
    for(int i=n;i>=k;i--)
    {
        a[i]=a[i-1];
    }
    a[k-1]=x;
    n+=1;
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
    int x,k;
    cin>>x>>k;
    insertion(x,k,a,n);
    cout<<"NEW Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}