Problem : Admission in Ninja Gram

Input :
import java.util.* ;
import java.io.*; 
public class Solution {
	
	public static boolean ninjaGram(String str) {

		// Write your code here
		int len=str.length();
		int arr[]=new int[26];
		for(int i=0;i<26;i++)
		{
			arr[i]=-1;
		}

		for(int i=0;i<len;i++)
		{
			char ch=str.charAt(i);
			int index=0;

			if(ch>='a' && ch<='z')
				index=ch-'a';
			else
				index=ch-'A';
		arr[index]=0;
		}

		for(int i=0;i<26;i++)
		{
			if(arr[i]==-1)
				return false;
		}
	return true;
	}
}
