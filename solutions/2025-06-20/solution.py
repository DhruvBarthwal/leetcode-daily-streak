#Leetcode 3443 - Maximum Manhattan Distance After K Changes
#https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/description/?envType=daily-question&envId=2025-06-20
class Solution:
    def maxDistance(self, s: str, k: int) -> int:
        #initialization
        n = len(s)
        ans = 0
        north = south = east = west = 0
        #traversal
        for i in range(n):
            ch = s[i]
            if ch == 'N':
                north+=1
            elif ch == 'S':
                south += 1
            elif ch == 'W':
                west += 1
            elif ch == 'E':
                east +=1
            #calculating cordinates
            x = abs(north-south)
            y = abs(east-west)
            MD = x+y
            dis = MD + min(2*k, 1+i-MD)
            ans = max(ans, dis) 
        return ans



        