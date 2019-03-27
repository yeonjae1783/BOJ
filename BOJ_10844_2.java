//boj_10844_쉬운계단수
package boj;

import java.util.*;

public class BOJ_10844_2 {
	public static long[][] mem;
	static int mod = 1000000000;

	public static long stairNum(int num) {
		long ans = 0;
		if (num == 1)
			return 9;
		else {
			for (int k = 2; k <= num; k++) {
				for (int i = 0; i < 10; i++) {
					if (i == 0)
						mem[k][i] = mem[k - 1][i + 1] % mod;
					else if (i == 9)
						mem[k][i] = mem[k - 1][i - 1] % mod;
					else
						mem[k][i] = (mem[k - 1][i - 1] + mem[k - 1][i + 1]) % mod;
				}
			}
			for (int j = 0; j < 10; j++)
				ans =(ans+ mem[num][j])%mod; //여기서 왜 또 나머지? 더해서 십만보다 더 커질 수 있어서?
			return ans;
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		mem = new long[101][11];
		for (int i = 1; i < 10; i++)
			mem[1][i] = 1;
		System.out.println(stairNum(num));

	}

}
