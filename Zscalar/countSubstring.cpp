#include<bits/stdc++.h>
using namespace std;
#define N 26

bool check(int A[],int k)
{
    for(int i=0;i<26;i++)
    {
        if(A[i]!=0 && A[i]!=k)
        {
            return false;
        }
    }
    return true;
}

int func(string test,int k)
{
    int tot=0;
    for(int i=0;test[i];i++)
    {
        int C[N]={0};
        for(int j=i;test[j];j++)
        {
            int ii=test[j]-'a';
            C[ii]++;
            if(C[ii]>k)
            {
                break;
            }
            else if(C[ii]==k and check(C,k)==true)
            {
                tot++;
            }
        }
    }

    return tot;
}
int main()
{
    string test="aafbbmcc";
    int k=2;
    int ans=func(test,k);
    cout<<ans<<endl;
}