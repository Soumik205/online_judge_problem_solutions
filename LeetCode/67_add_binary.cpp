class Solution {
public:
    string addBinary(string a, string b) {
        reverse (a.begin(), a.end());
        reverse (b.begin(), b.end());
        string s;
        int carry = 0;

        if (b.size() > a.size()) swap (a, b);

        for (int i = 0; i < a.size(); i++) {
            int x = a[i] - '0';
            int y = 0;
            if (i < b.size()) {
                y = b[i] - '0';
            }

            if (x == 1 && y == 1) {
                if (carry == 0) {
                    s += to_string(0);
                    carry = 1;
                }
                else {
                    s += to_string(1);
                    carry = 1;
                }  
            }
            else if (x == 0 && y == 0) {
                if (carry == 0) {
                    s += to_string(0);
                    carry = 0;
                } 
                else {
                    s += to_string(1);
                    carry = 0;
                } 
            }
            else {
                if (carry == 0) {
                    s += to_string(1);
                    carry = 0;
                }
                else {
                    s += to_string(0);
                    carry = 1;
                }   
            }
        }
        if (carry == 1) s+= to_string(1);
        reverse(s.begin(), s.end());

        return s;
    }
};
