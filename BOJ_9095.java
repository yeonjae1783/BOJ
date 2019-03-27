//boj_9095_1,2,3´õÇÏ±â(DP)
package boj;

import java.util.*;

public class BOJ_9095 
{
	public static int[] dp;
	
	public static int sum(int n) 
	{
		if(dp[n]!=0)
			return dp[n];
		else if(n>3)
		{
			dp[n]=sum(n-1)+sum(n-2)+sum(n-3);
			return dp[n];
		}
		else return dp[n];
	}

	public static void main(String[] args)
	{			
		dp = new int[11];
		dp[0]=0;
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		int count,num;
		Scanner sc = new Scanner(System.in);
		count = sc.nextInt();
		for(int i=0;i<count;i++)
		{
			num=sc.nextInt();
			System.out.println(sum(num));
			
		}

	}

}
