Problem : Reverse vowels in a string

You are given a string 'S'. Your task is to reverse the vowel in the string while keeping the consonants unchanged.

Input: 
#include <bits/stdc++.h>
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
} 
string reverseVowels(string &s)
{
    int n = s.size();
    int  i = 0, j = n - 1;
    while (i < j){
        if (isVowel(s[i])  && isVowel(s[j])) {
            swap(s[i] , s[j]);
            i++;
            j--;
        }
        else if (!isVowel(s[i])) i++;
        else if (!isVowel(s[j])) j--;
    }
    return s;
}
