//boj_11726_2*nÅ¸ÀÏ¸µ(DP)
package boj;

import java.util.*;

public class BOJ_11726 {
	public static int[] dp;

	public static int tiling(int n) {
		if (dp[n] != 0)
			return dp[n];
		if (n > 2) {
			dp[n] = (tiling(n - 1) + tiling(n - 2)) % 10007;
		}
		return dp[n];
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		dp = new int[1001];
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		System.out.println(tiling(num));

	}

}
