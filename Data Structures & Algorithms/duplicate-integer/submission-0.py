class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hm = {}
        for n in nums:
            if n in hm:
                hm[n] += 1
            else :
                hm[n] = 1
        
        for k,v in hm.items():
            if v > 1:
                return True
        return False