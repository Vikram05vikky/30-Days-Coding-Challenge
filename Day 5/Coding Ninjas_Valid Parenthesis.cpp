Problem:  Valid Parenthesis

You're given a string 'S' containing of "{","}","(",")","[","]".
Return true if the given string 'S' is balanced, else return false.

Input:

public class Solution {
    public static boolean isValidParenthesis(String s) {
        
    int c1=0; //'{' '}'
    int c2=0; //'(' ')'
    int c3=0; //'[' ']'

    int n=s.length();

    for(int i=0;i<n;i++)
    {
        char a=s.charAt(i);

        if(a == '{' || a == '}')
            c1++;
        else if(a == '(' || a==')')
            c2++;
        else if(a == '[' || a==']')
            c3++;
    }

    if(c1%2 == 0 && c2 %2 == 0 && c3 % 2 ==0)
        return true;
    else    
        return false;
}
}
