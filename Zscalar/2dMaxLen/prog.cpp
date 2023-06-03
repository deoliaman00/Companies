#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>arr{{7,2,1},{2,4,6},{3,1,2}};
    int n1=arr.size();

    for(int i=0;i<n1;i++)
    {
        sort(arr[i].begin(),arr[i].end());
    }

    // for(int i=0;i<n1;i++)
    // {
    //     for(int j=0;j<n1;j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    int maxi=-1;
    int sum=0;
    for(int j=0;j<n1;j++)
    {
        for(int i=0;i<n1;i++)
        {
            // cout<<arr[i][j]<<" ";
            maxi=max(maxi,arr[i][j]);
        }
       // cout<<maxi;
        sum+=maxi;
        maxi=-1;
    }
    cout<<sum<<endl;
}