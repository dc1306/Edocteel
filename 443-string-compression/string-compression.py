class Solution:
    def compress(self, chars: List[str]) -> int:
        n = len(chars)
        ans = 0
        cnt = 1
        j = 0
        for i in range(1,n):
            if chars[i] == chars[i-1]:
                cnt+=1
            elif cnt == 1:
                chars[j] = chars[i - 1]
                j += 1
                ans += 1
            else :
                ans += len(str(cnt)) + 1
                chars[j] = chars[i - 1]
                j += 1
                for p in range(len(str(cnt))):
                    chars[j] = str(cnt)[p]
                    j+=1
                cnt = 1
        if cnt == 1:
            chars[j] = chars[n - 1]
            j += 1
            ans += 1
        else :
            ans += len(str(cnt)) + 1
            chars[j] = chars[n - 1]
            j += 1
            for p in range(len(str(cnt))):
                chars[j] = str(cnt)[p]
                j+=1
            cnt = 1
        return ans
        


        