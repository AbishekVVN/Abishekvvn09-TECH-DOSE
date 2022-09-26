class Solution {
public int maxProfit(int[] prices) {

    Map<Integer,Integer> map = new HashMap<>();
    int max = prices[prices.length-1];
    for(int i=prices.length-1;i>=0;i--){
        if(max<prices[i]){
            max = prices[i];
        }
        map.put(i,max);
    }
    
    int result = 0;
    for(int i=0;i<prices.length;i++){
        int diff = map.get(i)-prices[i];
        if(diff>result){
            result = diff;
        }
    }
    return result;
}
}
