#include<bits/stdc++.h>
using namespace std;

int main()
{
    string test = "PPPPPP@PPP@PP$PP";
    int maxi=0;
    int n=test.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(test[i]!='@' || test[i]!='$')
        {
            count++;
        }
        else if(test[i]=='@' || test[i]=='$')
        {
            cout<<count<<endl;
            maxi=max(maxi,count+1);
            count=0;
        }
    }
    cout<<count<<endl;
}