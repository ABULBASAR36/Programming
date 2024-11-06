



//Algorithm 3.4 2nd pattern maching or KMP 
// #include<bits/stdc++.h>
// using namespace std;


// vector<int> createPatternTable(const string &P)
// {
//     int m = P.length();
//     vector<int> F(m + 1, 0); 
//     int j = 0; 

//     for (int i = 1; i < m; i++)
//     {
//         while (j > 0 && P[i] != P[j]) 
//         {
//             j = F[j]; 
//         }
//         if (P[i] == P[j]) 
//         {
//             j++;
//         }
//         F[i + 1] = j; 
//     }

//     return F;
// }


// int KMP(const string &T, const string &P)
//  {
//     int n = T.length();
//     int m = P.length();
//     vector<int> F = createPatternTable(P); 
//     int K = 0; 
//     int S = 0; 

//     while (S < m && K < n) 
//     {
//         char TK = T[K]; 
//         while (S > 0 && P[S] != TK) 
//         {
//             S = F[S]; 
//         }
//         if (P[S] == TK) 
//         {
//             S++; 
//         }
//         K++; 
//     }

//     if (S == m) 
//     {
//         return K - m; 
//     } 
//     else
//     {
//         return -1; 
//     }
// }

// int main()
//  {
//     string T, P;
    
//     cout << "Enter the text (T): ";
//     getline(cin, T);
//     cout << "Enter the pattern (P): ";
//     getline(cin, P);

//     int index = KMP(T, P);
    
//     if (index != -1) 
//     {
//         cout << "Pattern found at index: " << index << endl;
//     } 
//     else 
//     {
//         cout << "Pattern not found." << endl;
//     }

//     return 0;
// }
