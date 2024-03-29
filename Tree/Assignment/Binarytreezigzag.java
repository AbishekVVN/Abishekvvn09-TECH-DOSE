class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
          List<List<Integer>> ans=new LinkedList<>();
        Queue<TreeNode> que=new LinkedList<>();
        if (root==null){
            return ans;
        }
        int level=0;
        que.offer(root);
        while (!que.isEmpty()){
            List<Integer> subList=new LinkedList<>();
            int size=que.size();
                for (int i = 0; i < size; i++) {
                    if (que.peek().left!=null){
                        que.offer(que.peek().left);
                    }
                    if (que.peek().right!=null){
                        que.offer(que.peek().right);
                    }
                    subList.add(que.poll().val);
                }
            if (level%2==1){
                Collections.reverse(subList);
            }
            ans.add(subList);
            level++;
        }
        return ans;
    }
}
1
1
