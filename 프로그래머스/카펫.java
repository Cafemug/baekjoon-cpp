class Solution {
    public int[] solution(int brown, int red) {
        int[] answer = new int[2];
        for(int i=1;i<=red;i++){
            for(int j=red/i;j>=1;j--){
                if(i*j==red && i*2+j*2+4==brown){
                    if(i>=j){
                        answer[0]=i+2;
                        answer[1]=j+2;
                    }else{
                        answer[0]=j+2;
                        answer[1]=i+2;
                    }
                    break;
                }
            }
        }
        return answer;
    }
}