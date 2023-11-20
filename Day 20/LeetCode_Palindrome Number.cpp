Problem ; Palindrome Number

Input:
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        long int r=0;
        long int temp=x;

        while(temp!=0)
        {
            int dig=temp%10;
            r=r*10+dig;
            temp/=10;
        }
        return (r==x);
    }
};
