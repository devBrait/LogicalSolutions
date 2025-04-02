public class Solution {
    public void Rotate(int[] nums, int k) {
          
        int n = nums.Length;
        k = k % n; 
        
        for(int i = 0; i < n / 2; i++) {
            int temp = nums[i];
            nums[i] = nums[n - 1 - i];
            nums[n - 1 - i] = temp;
        }

        for(int i = 0; i < k / 2; i++) {
            int temp = nums[i];
            nums[i] = nums[k - 1 - i];
            nums[k - 1 - i] = temp;
        }

        for(int i = 0; i < (n - k) / 2; i++) {
            int temp = nums[k + i];
            nums[k + i] = nums[n - 1 - i];
            nums[n - 1 - i] = temp;
        }
    }
}