//Algorithm 4.7: (Matrix Multiplication

// #include <bits/stdc++.h>
// using namespace std;

// void matrixMultiply(int A[][10], int B[][10], int C[][10], int row, int col, int col_B) 
// {
//     for (int i = 0; i < row; i++) 
//     {
//         for (int j = 0; j < col_B; j++) 
//         {
//             C[i][j] = 0; 
//             for (int k = 0; k < col; k++) 
//             {
//                 C[i][j] += A[i][k] * B[k][j]; 
//             }
//         }
//     }
// }

// int main() 
// {
//     int row = 2, col = 3, col_B = 2;
//     int A[10][10] = {{1, 2, 3}, {4, 5, 6}};  
//     int B[10][10] = {{7, 8}, {9, 10}, {11, 12}}; 
//     int C[10][10] = {0}; // Result M x N matrix

//     matrixMultiply(A, B, C, row, col, col_B);

//     cout << "Product of matrix A and B is:" << endl;
//     for (int i = 0; i < row; i++) 
//     {
//         for (int j = 0; j < col_B; j++) 
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1,n1,m2,n2;
    cin>>m1>>n1>>m2>>n2;
    int a[m1][n1];
    int b[m2][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>b[i][j];
        }
    }
    if(n1!=m2)
    {
        cout<<"multiplication not posibale\n";
        return 0;
    }
    int ans[m1][n2]={0};
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            ans[i][j]=0;
           for(int k=0;k<n1;k++)
           {
            ans[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
   for(int i=0;i<m1;i++)
   {
     for(int j=0;j<n2;j++)
     {
        cout<<ans[i][j]<<" ";
     }
     cout<<endl;
   }

}