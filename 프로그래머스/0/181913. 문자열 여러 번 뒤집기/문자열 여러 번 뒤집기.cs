using System;

public class Solution {
    public string solution(string my_string, int[,] queries) {
        char[] answer = my_string.ToCharArray();
        for(int i = 0; i < queries.GetLength(0); i++)
        {
            int a = queries[i , 0];
            int b = queries[i , 1] - queries[i , 0] + 1;
            
            Array.Reverse(answer, a, b);
        }
        return new String(answer);
    }
}