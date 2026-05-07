class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint32_t final = 0;
        for(int i = 0; i < 32; i++){
            result = result << 1;
            if(n & 1){
                result += 1;
            }
            //result = result << 1;
            n = n >> 1;
        }
        for(int i = 0; i < 32; i++){
            if(result & 1){
                final += pow(2,i);
            }
            result = result >> 1;
        }
        return final;
    }
};
