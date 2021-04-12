class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if needle == "": #Checks if empty
            return 0
        for i in range(len(haystack)-len(needle)+1): #Length of haystack - length of needle + 1
            if (haystack[i:i + len(needle)] == needle):
                return i
        return -1
