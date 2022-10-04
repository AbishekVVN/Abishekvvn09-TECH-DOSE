class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        //Converting array to list so that we can use indexOf method
        List<Integer> numsList = new ArrayList();
        for(int num : nums) {
            numsList.add(num);
        }
        
        for(int i=0; i<numsList.size(); i++) {
            int complement = target - nums[i];
            int indexOfComplement = numsList.indexOf(complement);
            if(indexOfComplement != -1 && indexOfComplement != i) {
                return new int[]{i, indexOfComplement};
            }
        }
        return new int[2];
    }
}
