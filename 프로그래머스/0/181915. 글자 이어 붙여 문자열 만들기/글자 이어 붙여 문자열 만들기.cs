using System;

public class Solution {
    public string solution(string my_string, int[] index_list) {
        string answer = "";
        
        foreach(var list in index_list)
        {
            answer += my_string[list];
        }
        
        return answer;
    }
}