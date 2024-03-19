# loop
# class Solution:
#     def isPowerOfTwo(self, n: int) -> bool:
#         if n == 1:
#             return True
#         while n > 2:
#             n /= 2
#         if n == 2:
#             return True
#         return False
    
# # way to optimise this

# recursion

# class Solution:
#     def isPowerOfTwo(self, n: int) -> bool:
#         if n == 1 or n == 2:
#             return True
#         if n < 2:
#             return False
#         return self.isPowerOfTwo(n / 2)
        
#none of the above

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n > 0 and (n & (n - 1)) == 0
        
