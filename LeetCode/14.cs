public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        
        int minLength = strs[0].Length;

        for (int i = 1; i < strs.Length; i++) {
            if (strs[i].Length < minLength)
                minLength = strs[i].Length;
        }

        string prefix = "";
        for (int i = 0; i < minLength; i++) {
            char currentChar = strs[0][i];
            bool allMatch = true;

            for (int j = 1; j < strs.Length; j++) {
                if (strs[j][i] != currentChar) {
                    allMatch = false;
                    break;
                }
            }
            if (allMatch)
                prefix += currentChar; 
            else
                break;
        }
        
        return prefix;
    }
}