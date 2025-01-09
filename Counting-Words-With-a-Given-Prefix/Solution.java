class Solution {
    public int prefixCount(String[] words, String pref) {
       int length=words.length;
       int count=0;
       int len=pref.length();
      
       for(String s:words)
       {
        boolean isPrefix=true;
        if(s.length()>=len){
         {
          for(int i=0;i<len;i++)
           {
            if(s.charAt(i)!=pref.charAt(i))
            {
            isPrefix=false;
            break;
            }
           }
           if( isPrefix ==true)
            count++;   
        }
        
       }
       }
       
       return count; 
    }
}
