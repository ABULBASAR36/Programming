//Algtthrn 3.1: A text T and it P ac in memory. This algorithm deletes every occurrence of P in T.

#include<bits/stdc++.h>
using namespace std;

int main() 
{
  string s,p;
  getline(cin,s);
  getline(cin,p);
  int k=s.find(p);
  while(k!=string::npos)
  {
    s.erase(k,p.size());
    k=s.find(p);
  }
  cout<<s<<endl;
}
