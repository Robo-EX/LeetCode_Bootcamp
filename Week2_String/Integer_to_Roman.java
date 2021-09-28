// https://leetcode.com/problems/integer-to-roman/

class Solution {
    private static final int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        private static final String[] roman = {"M", "CM", "D","CD","C","XC","L","Xl","X","IX","V","IV","I"};
    public String intToRoman(int num) {
        
        StringBuilder ans = new StringBuilder();
        
        for(int i = 0; i < values.length && num > 0; i++){
            // 950
            while(values[i] <= num){ 900 < 950
                num = num - values[i]; // 50 - 50 = 0
                ans.append(roman[i]);// CML
            }
        }
        return ans.toString();
        
    }
}
