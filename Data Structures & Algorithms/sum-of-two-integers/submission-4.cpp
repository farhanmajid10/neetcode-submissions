class Solution {
public:
    int getSum(int a, int b) {
        int result = 0;
        int carry = 0;
        for(int i = 0; i < 32; i++){
            int a_bit = (a & 1);
            int b_bit = (b & 1);
            int sum = (a_bit ^ b_bit ^ carry);
            carry = ((a_bit & b_bit)|(a_bit & carry)|(b_bit & carry)); 
            a >>= 1;
            b >>= 1;
            sum <<= i;
            result |= sum;
        }
        return result;
    }
};
