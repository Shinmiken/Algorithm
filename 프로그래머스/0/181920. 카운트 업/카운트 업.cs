using System;

public class Solution {
    public int[] solution(int start_num, int end_num) {
        int num = end_num - start_num + 1;
        int[] answer = new int[num];
        int cnt = 0;
        for(int i = start_num; i <= end_num; i++)
        {
            answer[cnt] = i;
            cnt++;
        }
        return answer;
    }
}