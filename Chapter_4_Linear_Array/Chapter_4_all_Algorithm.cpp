
//Algorithm 4.3: (Deleting from a Linear Array)
// #include<bits/stdc++.h>
// using namespace std;

// void deleteElement(int LA[], int &N, int K, int &ITEM) 
// {
//     if (K < 1 || K > N)
//     {
//         cout << "Invalid position to delete." << endl;
//         return;
//     }

//     ITEM = LA[K - 1];

//     for (int J = K - 1; J < N - 1; J++) 
//     {
//         LA[J] = LA[J + 1];
//     }

//     N = N - 1;
// }

// int main() 
// {
//     int Arr[100] = {1, 2, 3, 4, 5}; 
//     int N = 5; 
//     int K, ITEM;

//     cout << "Enter position to delete (1-based index): ";
//     cin >> K;

//     deleteElement(Arr, N, K, ITEM);

//     cout << "Array after deletion: ";
//     for (int i = 0; i < N; i++) 
//     {
//         cout << Arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Deleted item: " << ITEM << endl;

//     return 0;
// }






