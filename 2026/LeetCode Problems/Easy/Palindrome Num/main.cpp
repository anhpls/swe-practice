#include <vector>
#include <iostream>
using namespace std;

/*
	% 10 - grab last digit
	* 10 - shift left
	/= 10 - remove last digit
	x > reversedHalf - stop at halfway
*/

class Solution{
private:
public:
    bool isPalindrome(int& x){
        // if x is negative or ends in 0 & is not 0
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;

        while (x > reversedHalf){
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // even: x == reversedHalf
        // odd: x == reversedHalf / 10 (middle digit ignored)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};





int main(){}