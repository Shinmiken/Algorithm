using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] intStrs, int k, int s, int l) {
        List<int> answer = new List<int>();
        
        for(int i = 0; i < intStrs.Length; i++)
        {
            int num = int.Parse(intStrs[i].Substring(s, l));
            
            if(num > k)
            {
                answer.Add(num);
            }
        }
        return answer.ToArray();
    }
}