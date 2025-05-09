public class Solution {
    public int Jump(int[] nums) {
        int end = 0;
        int best = 0;
        int jumps = 0;

        for(int i = 0; i < nums.Count() - 1; i++)
        {
            best = Math.Max(best, i + nums[i]);

            if(i == end)
            {
                jumps++;
                end = best;
            }
        }

        return jumps;
    }
}