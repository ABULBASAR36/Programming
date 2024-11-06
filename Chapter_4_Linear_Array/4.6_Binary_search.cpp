//Algorithm 4.8:Binary Search

// #include <bits/stdc++.h>
// using namespace std;

// int Binary_search(int a[], int n, int target) 
// {
//     int l = 0, r = n - 1;
//     int inx = -1;

//     while (l <= r) 
//     {
//         int mid = (l + r)/ 2;
//         if (a[mid] == target) 
//         {
//             inx = mid; 
//             break;
//         } 
//         else if (a[mid] > target) 
//         {
//             r = mid - 1; 
//         } 
//         else 
//         {
//             l = mid + 1; 
//         }
//     }
//     return inx;
// }

// int main() 
// {
//     int n;
//     cin >> n;
//     int a[n + 1];
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n); 
//     int target;
//     cin >> target; 
//     cout << Binary_search(a, n, target) << endl; 
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int terget;
    cin>>terget;
    int l=0,r=n-1;
    int ind=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid==terget)
        {
          ind=mid;

          break;
        }
        else if(a[mid]>terget)
        {
            r=mid-1;
        }
        else
        l=mid+1;

    }
    if(ind!=-1)
    {
        cout<<ind<<endl;
    }
    else
    cout<<"NOT FOUND\n";
}