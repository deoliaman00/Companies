#include<bits/stdc++.h>
using namespace std;

int main()
{
   string test="UTTARAKHAND";
   int k=8909;
   k=k%26;
   k=26-k;
   for(auto i:test)
   {
    char cc='A'+(i-'A'+k)%26;
    cout<<cc<<" ";
   }
}