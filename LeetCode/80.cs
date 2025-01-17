public class Solution {
    public int RemoveDuplicates(int[] nums) {
        
        List<int> temp = new List<int>();
        int count = 0;

        for (int i = 0; i < nums.Count(); i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {
                count = 1;
                temp.Add(nums[i]);
            }
            else if (count < 2)
            {
                count++;
                temp.Add(nums[i]);
            }
        }

        for (int i = 0; i < temp.Count(); i++)
        {
            nums[i] = temp[i];
        }

        return temp.Count();
    }
}