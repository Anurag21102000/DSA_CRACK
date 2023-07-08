#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices) 
{
    int n=prices.size();
    vector<vector<long>>dp(n+1,vector<long>(2,0));
    dp[1][0]=dp[0][1]=0;
    int res=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int permi=0;permi<=1;permi++)
        {
            if(permi)
            {
                res=max(prices[i]+dp[i+1][0],0+dp[i+1][1]);
            }
            else
            {
                res=max(-1*prices[i]+dp[i+1][1],0+dp[i+1][0]);
            }
            dp[i][permi]=res;
        }
    }
    return dp[0][0];
    }
int main()
{
    vector<int> nums{7,1,5,3,6,4};
    int g=maxProfit(nums);
    cout<<g<<endl;
    return 0;
}
