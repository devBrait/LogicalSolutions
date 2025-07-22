public class Solution {
    public bool IsValid(string s) {
        
        Stack<char> values = new Stack<char>();

        foreach(var val in s){
            if(val == '(') {
                values.Push(')');
                continue;
            }

            if(val == '{'){
                values.Push('}');
                continue;
            }

            if(val == '['){
                values.Push(']');
                continue;
            }

            if(values.Count == 0 || val != values.Pop()) return false;
        }

        return values.Count == 0;
    }
}