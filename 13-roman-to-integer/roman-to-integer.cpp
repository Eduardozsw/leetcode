class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int prevValue = 0;
        int values[256] = {};
        values['I'] = 1; values['V'] = 5; values['X'] = 10; values['L'] = 50; values['C'] = 100; values['D'] = 500; values['M'] = 1000;

        for (char c : s) {
            int currentValue = values[c];
            sum += (currentValue > prevValue) ? (currentValue - 2 * prevValue) : currentValue;
            prevValue = currentValue;
        }
        return sum;
    }
};