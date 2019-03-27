package boj;
import java.util.*;
public class BOJ_11057_2 {
	public static long[][] mem;
	public static int mod= 10007;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		long ans=0;
		mem=new long[1001][11];
		for(int i=0;i<10;i++)
			mem[1][i]=1;
		for(int i=2;i<=num;i++)
		{
			for(int j=0;j<10;j++) 
			{
				for(int k=j;k<10;k++)
					mem[i][j]=(mem[i][j]+mem[i-1][k])%mod;
			}
		}
		for(int u=0;u<10;u++) {
			ans=(ans+mem[num][u])%mod;
		}
		System.out.println(ans);
	}

}
