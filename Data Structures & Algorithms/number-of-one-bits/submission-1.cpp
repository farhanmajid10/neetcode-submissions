class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        uint32_t m = n;
        for(int i = 0;i < 32; i++){
            if(m & 1){
                result++;
            }
            m = m >> 1;
        }
        return result;
    }
};
