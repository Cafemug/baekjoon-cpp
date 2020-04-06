class Solution {
        long[][] d = new long[101][101];
        public void findAnswer(int m,int n){
            d[1][1] = 1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(i==1 && j==1) continue;
                    if(d[i][j] == -1) d[i][j] =0;
                    else{
                        d[i][j] = (d[i-1][j] + d[i][j-1])%1000000007;
                    }
                }
            }
        }
        public int solution(int m, int n, int[][] puddles) {
            long answer = 0;
            int puLen = puddles.length;
            for(int i=0;i<puLen;i++){
                d[puddles[i][1]][puddles[i][0]] = -1;
            }
            findAnswer(m,n);
            answer = d[n][m]%1000000007;
            return (int)answer;
        }
    }