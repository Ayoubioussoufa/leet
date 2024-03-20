from typing import List

class Solution:
    def evenOddBit(self, n: int) -> List[int]:
        binary_str = bin(n)[2:]
        even_count = 0
        odd_count = 0
        for i, bit in enumerate(binary_str[::-1]):
            if i % 2 == 0:
                even_count += int(bit)
            else:
                odd_count += int(bit)
        return [even_count, odd_count]

n = 17
p = Solution()
print(p.evenOddBit(n))
