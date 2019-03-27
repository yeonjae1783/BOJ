//boj_11727_2¡¿n Å¸ÀÏ¸µ 2
package boj;
import java.util.*;
public class BOJ_11727 {
	public static int[] dp;

	public static int tiling(int n) {
		if (dp[n] != 0)
			return dp[n];
		if (n > 2) {
			dp[n] = (tiling(n - 1) + tiling(n - 2)*2) % 10007;
		}
		return dp[n];
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		dp = new int[1001];
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 3;
		System.out.println(tiling(num));

	}
}
