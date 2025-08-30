// Source: https://leetcode.com/problems/integer-to-roman/description
//approach: In this approach, we will use a greedy algorithm to convert the integer to a Roman numeral.
class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        # Roman numeral values and symbols
        values = [
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4,
            1
        ]
        symbols = [
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
        ]
        
        result = []
        for i in range(len(values)):
            while num >= values[i]:
                num -= values[i]
                result.append(symbols[i])
        return "".join(result)
