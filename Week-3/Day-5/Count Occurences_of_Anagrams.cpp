//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    bool allZeros(map<char, int> &mp)
    {
        for (auto x : mp)
        {
            if (x.second != 0)
                return false;
        }
        return true;
    }
    int search(string pat, string txt)
    {
        int n = txt.size(), k = pat.size();

        map<char, int> mp;
        for (char c : pat)
        {
            mp[c]++;
        }
        int l = 0, r = 0, ans = 0;

        while (r < n)
        {
            mp[txt[r]]--;

            if (r - l + 1 == k)
            {
                if (allZeros(mp))
                {
                    ans++;
                }
                mp[txt[l]]++;
                l++;
            }
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends