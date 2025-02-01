class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder res=new StringBuilder();
        int j=0,i=0;
        for(j=0;j<s.length();j++)
        {
             if(i<spaces.length)
        {
            if(j==spaces[i] )
            {
            res.append(" ");
            i++;
            } 
        } 
            res.append(s.charAt(j));    
        }
        
        return res.toString();
    }
}
