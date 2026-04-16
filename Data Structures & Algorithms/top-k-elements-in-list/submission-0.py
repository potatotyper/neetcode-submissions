class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hmap = {}
        l1 = [[] for x in range(len(nums) + 1)]
        l2 = []
        c = 0;
        for i in nums :
            if i in hmap:
                hmap[i] += 1
            else :
                hmap[i] = 1
        for x,y in hmap.items() :
            l1[y].append(x)
        for i in reversed(l1) :
            if i != [] :
                for x in i :
                    l2.append(x)
                    c += 1
                    if c == k :
                        return l2



