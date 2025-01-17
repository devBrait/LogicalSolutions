public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if (nums.Length == 0) return 0;

        int totalNums = 0;

        for (int i = 1; i < nums.Length; i++) {
            if (nums[i] != nums[totalNums]) {
                totalNums++; 
                nums[totalNums] = nums[i]; 
            }
        }

        return totalNums + 1;
    }
}