class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        spair = {}
        for s in strs:
            strc = ''.join(sorted(s))
            if strc not in spair.keys() :
                spair[strc] = [s]
            else :
                spair[strc].append(s)
        return spair.values()