class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        r = n+m-1
        p = m-1
        q = n-1
        while p >= 0 and q >= 0:
            if nums1[p] > nums2[q]:
                nums1[r] = nums1[p]
                p-=1
                r-=1
            else :
                nums1[r] = nums2[q]
                q-=1
                r-=1
        while q >= 0 and r >= 0:
            print(q,r)
            nums1[r] = nums2[q]
            q-=1
            r-=1
        
        

        