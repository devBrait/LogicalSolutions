public class Solution {
    public bool CanJump(int[] nums) {

        int maxJump = nums[0];
        int size = nums.Count();

        for(int i = 0; i < size; i++)
        {
            if(i > maxJump)
                return false;
            
            maxJump = Math.Max(maxJump, i + nums[i]);

            if(maxJump >= size - 1)
                return true;
        }

        return false;
    }
}