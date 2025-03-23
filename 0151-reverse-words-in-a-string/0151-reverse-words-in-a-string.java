class Solution {
    public String reverseWords(String s) {
        s=s.trim();
        String[] words=s.split("\\s+");
        StringBuilder results=new StringBuilder();
        for(int i=words.length-1;i>=0;i--){
            results.append(words[i]).append(" ");

        }
        return results.toString().trim();
        
    }
}