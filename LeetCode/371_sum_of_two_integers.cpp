class Solution {
public:
    int getSum(int a, int b) {
        vector < int > v(2001);

        if (a < b) swap (a, b);
        int k = 0;
        
        if (a > 0) {
            while(a--) {
                k++;
            }
        }
        else if (a < 0) {
            while (a++) {
                k--;
            }
        }

        if (b > 0) {
            while(b--) {
                k++;
            }
        }
        else if (b < 0) {
            while (b++) {
                k--;
            }
        }
         
        return k;
        
    }
};
