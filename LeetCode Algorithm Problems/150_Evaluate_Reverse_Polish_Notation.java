class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> s = new Stack<Integer>();
        int  first,second;
        for(int i = 0;i<tokens.length;i++){
            if(tokens[i].equals("+") || tokens[i].equals("-") || tokens[i].equals("*") || tokens[i].equals("/")){
                second = s.pop();
                first = s.pop();
                if(tokens[i].equals("+"))
                    s.push(first+second);
                else if(tokens[i].equals("-"))
                    s.push(first-second);
                else if(tokens[i].equals("*"))
                    s.push(first*second);
                else
                    s.push(first/second);
            }
            else
                s.push(Integer.parseInt(tokens[i]));
                
        }
        return s.pop();
    }
}
