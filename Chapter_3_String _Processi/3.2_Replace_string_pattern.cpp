//AIrithm 3.2: A text T and patterns P and Q are in memory. This algorithm replaces every occurrence of P in T by Q.

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s,p,q;
//   // getline(cin,s);
//   // getline(cin,p);
//   // getline(cin,q);
//   for (auto& str : {&s, &p, &q}) 
//   {
//         getline(cin, *str);
//   }
//   if (q.find(p) != string::npos) 
//   {
//         cout << "Error: The replacement pattern Q must not contain the pattern P." << endl;
//         return 1; 
//   }
//   int k=s.find(p);
//   while(k!=string::npos)
//   {
//     s.replace(k,p.size(),q);
//     k=s.find(p,k+q.size());
//   }
//   cout<<s<<endl;

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,p,q;
  getline(cin,s);
  getline(cin,p);
  getline(cin,q);
  if(q.find(p)!=string::npos)
  {
    cout<<"Error\n";
    return 0;
  }
  int k=s.find(p);
  while(k!=string::npos)
  {
    s.replace(k,p.size(),q);
    k=s.find(p,k+q.size());
  }
  cout<<s<<endl;
}