public class Solution {
    public int StrStr(string haystack, string needle) {

        bool find = false;
        int index = -1;

        if (needle.Length == 0) return 0;

        for (int i = 0; i <= haystack.Length - needle.Length; i++) {
            find = true;

            for (int j = 0; j < needle.Length; j++) {
                if (haystack[i + j] != needle[j]) {
                    find = false;
                    break;
                }
            }

            if (find) {
                index = i;
                break;
            }
        }

        return index;
    }
}