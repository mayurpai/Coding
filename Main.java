public class main {
    public static void main(String[] args) {
        int[] nums = {12,345,2,6,7898};
        // int[] nums = {555,901,482,1771};
        System.out.println(findNumbers(nums));
    }

    // static int findNumbers(int[] nums) {
    //     int count = 0, totalCount = 0;
    //     for (int i=0; i<nums.length; i++) {
    //         while (nums[i]!=0) {
    //         nums[i] = nums[i]/10; 
    //         count++;
    //         }
    //     if (count%2==0)
    //         totalCount++;
    //     count = 0;
    // }
    // return totalCount;
    // }

    static int findNumbers(int[] nums) {
        int count = 0;
        for (int ele = 0; ele < nums.length; ele++) {
            if(((int)(Math.log10(nums[ele])) + 1) % 2 == 0)
                count++;
        }
        return count;
    }
}