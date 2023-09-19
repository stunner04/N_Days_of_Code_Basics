//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int pos = 0 ;
        while (n > 0)
        {   
            pos++;
            if (n & 1)
            {
                break;
            }
            n = n >> 1;
        }
        return pos;
    }
};


int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
    return 0;
}
