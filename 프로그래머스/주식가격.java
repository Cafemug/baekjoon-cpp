class Solution {
    public int[] solution(int[] prices) {
        int len = prices.length;
        int[] answer = new int[len];
        for(int i = 0;i < len - 1; i++){
            int count = 0;
            for(int j = i+1; j< len; j++){
                if(prices[i]>prices[j]) {
                    count++;
                    break;
                }
                count++;
            }
            answer[i] = count;            
        }
        return answer;
    }
}