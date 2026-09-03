class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        n = len(candies)
        maxi = max(candies)
        ans = []
        for i in range(n):
            if candies[i] >= maxi - extraCandies :
                ans.append(True)
            else :
                 ans.append(False)
        return ans
        
