class Solution(object):
    def checkValidString(self, s):
        """
        :type s: str
        :rtype: bool
        """
        open_stack = []
        star_stack = []

        for i, char in enumerate(s):
            if char == '(':
                open_stack.append(i)
            elif char == '*':
                star_stack.append(i)
            else:  # char == ')'
                if open_stack:
                    open_stack.pop()
                elif star_stack:
                    star_stack.pop()
                else:
                    return False

        while open_stack and star_stack:
            if open_stack[-1] > star_stack[-1]:
                return False
            open_stack.pop()
            star_stack.pop()

        return len(open_stack) == 0
    
s = Solution()
print(s.checkValidString("(((((*(()((((*((**(((()()*)()()()*((((**)())*)*)))))))(())(()))())((*()()(((()((()*(())*(()**)()(())"))

#This line is part of the logic to handle cases where a ')' character is encountered, but there are no '(' characters left in the open_stack to match it with. In such cases, we attempt to use '*' characters from the star_stack to match with the current ')'.

# open_stack[-1] gives us the index of the last '(' character in the open_stack.
# star_stack[-1] gives us the index of the last '*' character in the star_stack.