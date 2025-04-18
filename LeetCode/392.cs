public class Solution {
    public bool IsSubsequence(string s, string t) {
        
        int total = 0;
        int sizeS = s.Length;

        if(sizeS == 0) return true;

        for(int i = 0; i < t.Length; i++){

            if(total >= sizeS) break;

            if(t[i] == s[total])
                total++;
        }

        if(total == sizeS)
            return true;
        else 
            return false;

    }
}
