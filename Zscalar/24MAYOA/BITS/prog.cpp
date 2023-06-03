#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
void solve()
{
    ll total, n, m;
    ll ans = 0;
    cout << "Enter total no: ";
    cin >> total;
    cout << endl;
    cout << "Enter no of packets: ";
    cin >> n;
    vector<vector<ll>> arr;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end());
    int first = arr[0][0] - 1;

    ans += check(first);
    // cout<<"No of bits: "<<ans<<endl;
    for (int i = 0; i < n - 1; i++)
    {

        int left = arr[i + 1][0] - arr[i][1] - 1;
        ans += check(left);

        // cout<<"No of bits: "<<ans<<endl;
    }
    int last = total - arr[n - 1][1];
    ans += check(last);
    // cout<<"No of bits: "<<ans<<endl;
    cout << "Final answer: ";
    cout << ans << endl;
}

int main()
{
    solve();
}