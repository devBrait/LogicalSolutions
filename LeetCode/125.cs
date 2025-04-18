using System.Text.RegularExpressions;

public class Solution {
    public bool IsPalindrome(string s) {
        
        string formattedS = Regex.Replace(s, "[^a-zA-Z0-9]", "").ToLower();
        int size = formattedS.Length;
        int pos = 0;
        
        for(int i = size - 1; i >= 0; i--){
            if(formattedS[i] != formattedS[pos])
                return false;
            
            pos++;
        }

        return true;
    }
}