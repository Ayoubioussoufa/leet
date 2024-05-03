class Solution(object):
    def compareVersion(self, version1, version2):
        """
        :type version1: str
        :type version2: str
        :rtype: int
        """
        v1 = version1.split('.')
        v2 = version2.split('.')
        for i, j in zip(v1, v2):
            print(i, j)
            if (int(i) > int(j)):
                return 1
            elif int(i) < int(j):
                return -1
        if (len(v1) > len(v2)):
            for x in range(len(v2), len(v1)):
                if (int(v1[x]) != 0):
                    return 1
        elif len(v2) > len(v1):
            for y in range(len(v1), len(v2)):
                if (int(v2[y]) != 0):
                    return -1
        return 0
    
s = Solution()
version1 = "1.0"
version2 = "1.0.0"
print(s.compareVersion(version1, version2))