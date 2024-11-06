//Algorithm 4.7: Linear Search 

// #include<bits/stdc++.h>
// using namespace std;
// int linear_search(int a[],int n,int terget)
// {
//     int inx=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==terget)
//         {
//           inx=i;
//           //break;
//         }
//     }
//     return inx;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n+1];
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     int terget;
//     cin>>terget;
//     int res=linear_search(a,n,terget);
//     if(res!=-1)
//     {
//         cout<<res<<endl;
//     }
//     else
//     {
//         cout<<"Not Found\n";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int terget;
    cin>>terget;
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==terget)
        {
            ind=i;
            break;
        }
    }
    if(ind!=-1)
    {
        cout<<ind<<endl;

    }
    else
    {
        cout<<"Not Found\n";
    }
}