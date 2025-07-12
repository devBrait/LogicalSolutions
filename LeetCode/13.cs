public class Solution {
    public int RomanToInt(string s) {

        Dictionary<Char, double> dicRoman = new()
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int size = s.Length;
        int finalCount = 0;

        for(int i = 1; i < size; i++)
        {
            if(dicRoman[s[i]] > dicRoman[s[i - 1]])
                finalCount -= (int)dicRoman[s[i - 1]];
            else
                finalCount += (int)dicRoman[s[i - 1]];
        }
    
        return finalCount + (int)dicRoman[s[size - 1]];
    }
}