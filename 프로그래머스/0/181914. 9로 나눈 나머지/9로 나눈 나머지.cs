using System;

public class Solution {
    public int solution(string number) {
        int answer = 0;
        int num = 0;
        for(int i = 0; i < number.Length; i++)
        {
            num += number[i] - 48;
        }
        
        return answer = num % 9;
    }
}