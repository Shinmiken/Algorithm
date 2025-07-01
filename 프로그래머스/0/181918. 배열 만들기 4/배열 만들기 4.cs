using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr) {
        List<int> answer = new List<int>();
        int i = 0;

        while (i < arr.Length)
        {
            if (answer.Count == 0)
            {
                answer.Add(arr[i]);
                i++;
            }
            else if (answer[answer.Count - 1] < arr[i])
            {
                answer.Add(arr[i]);
                i++;
            }
            else
            {
                answer.RemoveAt(answer.Count - 1);
            }
        }

        return answer.ToArray();
    }
}