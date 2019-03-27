//boj_1463_1로만들기 (DP)
package boj;

import java.util.*;
import java.math.*;

public class BOJ_1463 {
	public static int[] dp;

	public static int makeNumOne(int num) {
		int result = 0;
		if (num == 1)
			return 0;
		if (dp[num] != 0)
			return dp[num];
		result = makeNumOne(num - 1) + 1;
		if (num % 3 == 0)
			result = Math.min(result, makeNumOne(num / 3) + 1);
		else if (num % 2 == 0)
			result = Math.min(result, makeNumOne(num / 2) + 1);

		dp[num] = result;
		return dp[num];
	}

	public static void main(String[] args) {
		int num;
		Scanner input = new Scanner(System.in);
		num = input.nextInt();
		dp = new int[num + 1];
		System.out.println(makeNumOne(num));
	}
}
