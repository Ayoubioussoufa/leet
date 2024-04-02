class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
    
        char_map_s = {}  # Map characters from s to t
        char_map_t = {}  # Map characters from t to s

        for ss,tt in zip(s, t):
            if ss not in char_map_s:
                char_map_s[ss] = tt
            elif char_map_s[ss] != tt:
                return False
            if tt not in char_map_t:
                char_map_t[tt] = ss
            elif char_map_t[tt] != ss:
                return False
        return True

# or
return len(set(s))==len(set(zip(s,t)))==len(set(t))