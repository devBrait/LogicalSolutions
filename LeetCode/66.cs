public class Solution {
    public int[] PlusOne(int[] digits) {

        for(int i = digits.Count() - 1; i >= 0; i--){
            if(digits[i]++ < 9){
                return digits;
            }
            digits[i] = 0;
        }

        int[] result = new int[digits.Count() + 1];
        result[0] = 1;
        return result;
    }
}