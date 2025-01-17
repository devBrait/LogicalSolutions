public class Solution {
    public int MajorityElement(int[] nums) {
        
        int major;
        
        for(int i = 0; i < nums.Length; i++)
        {
            major = 0;
            for(int j = 0; j < nums.Length; j++)
            {
                if(nums[i] == nums[j])
                {
                    major++;
                }
            }

            if(major > nums.Length / 2)
                return nums[i];
        }

        return -1;
    }
}