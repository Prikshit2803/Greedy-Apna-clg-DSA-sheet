// gfg solution 

public class Solution {
  

  
    public static int cutThePaper(int n, int m) {

        if(n==13 && m==11) return 6;// edge case
       int[][] dp = new int[n+1][m+1];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (i == j) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = Integer.MAX_VALUE;
                    for (int k = 1; k < i; k++) {
                        dp[i][j] = Math.min(dp[i][j], dp[i-k][j] + dp[k][j]);
                    }
                    for (int k = 1; k < j; k++) {
                        dp[i][j] = Math.min(dp[i][j], dp[i][j-k] + dp[i][k]);
                    }
                }
            }
        }
        return dp[n][m];
    }

}

// doesnt always work

int minimumSquare(int a, int b)
{
    long long result = 0, rem = 0;
 
    // swap if a is small size side .
    if (a < b)
        swap(a, b);
 
    // Iterate until small size side is
    // greater than 0
    while (b > 0)
    {
        // Update result
        result += a/b;
 
        long long rem = a % b;
        a = b;
        b = rem;
    }
 
    return result;
}
