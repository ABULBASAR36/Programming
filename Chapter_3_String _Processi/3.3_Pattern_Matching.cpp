//Algorithm 3.3: (Pattern Matching) P and T are strings with lengths R and S. respectively, and
//Are storcd as arrays with one character per clement. This algorithm finds the
//INDEX of P in T.


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s,p;
//   getline(cin,s);
//   getline(cin,p);
//   int n=p.size();
//   int m=s.size();
//   int mx=m-n+1;
//   int k=0;
//   int inx=0;
//   while(k<=mx)
//   {
//     int i=0;
//     for( i=0;i<n;i++)
//     {
//       if(p[i]!=s[k+i])
//       break;
//     }
//     if(i==n)
//     {
//     inx=k;
//     break;
//     }
//   k++;
//   }
//   if(inx==0&&s.find(p) == string::npos)
//   inx=-1;

//   if(inx!=-1)
//   cout<<inx<<endl;
//   else
//   cout<<"NOT found\n";

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,p;
  getline(cin,s);
  getline(cin,p);
  int S=s.size();
  int R=p.size();
  int mx=S-R+1;
  int inx=-1;
  for(int i=0;i<=mx;i++)
  {
    int j=0;
    for( j=0;j<R;j++)
    {
      if(p[j]!=s[j+i])
      break;
    }
    if(j==R)
    {
     inx=i;
     break;
    }
  }

  if(inx!=-1)
  cout<<"Founded:"<<" "<<inx<<endl;
  else
  cout<<"NOT found\n";

}
