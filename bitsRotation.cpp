
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int binaryToDecimal(int n)
    {
        bitset<16> binaryRep(n);
        int x = static_cast<int>(binaryRep.to_ulong());
        return x;
    }

    vector<int> rotate(int n, int d) // 28 , 2
    {

        vector<int> ans(2, 0);
        int store = n;
        n = n << d;
        // ans.push_back( binaryToDecimal(n));
        ans[0] = binaryToDecimal(n);
        n = store;
        n = n >> d;
        // ans.push_back( binaryToDecimal(n));
        ans[1] = binaryToDecimal(n);

        return ans;
    }

    vector<int> rotate(int n, int d) // working
    {
        d = d % 16;
        bitset<16> bit(n);
        int left, right;
        left = (bit >> d).to_ulong() + (bit << (16 - d)).to_ulong();
        right = (bit >> (16 - d)).to_ulong() + (bit << d).to_ulong();
        return {right, left};
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, d;
        cin >> n >> d;
        Solution ob;
        vector<int> res = ob.rotate(n, d);
        cout << res[0] << endl
             << res[1] << endl;
    }
}

// string bin("0000000000000111");
// int dec = stoi(bin, nullptr, 2); // dec = 13
// cout<<dec;
