#include <bits/stdc++.h>
using namespace std;

vector<string> findAndReplacePattern(vector<string> &words, string p)
{
    vector<string> ans;
    for (auto &w : words)
        if (match(w, p))
            ans.push_back(w);
    return ans;
}
bool match(string &w1, string &w2)
{
    unordered_map<char, char> w1_to_w2, w2_to_w1;
    for (int i = 0; i < w1.size(); i++)
        if ((w1_to_w2.count(w1[i]) && w1_to_w2[w1[i]] != w2[i]) ||
            (w2_to_w1.count(w2[i]) && w2_to_w1[w2[i]] != w1[i]))
            return false;
        else
            w1_to_w2[w1[i]] = w2[i],
            w2_to_w1[w2[i]] = w1[i];
    return true;
}

int main()
{
    vector<string> words{"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string two = "abb";
    findAndReplacePattern(words, two);
    return 0;
}