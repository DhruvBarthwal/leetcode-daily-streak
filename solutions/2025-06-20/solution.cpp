//Leetcode 3443 - Maximum Manhattan Distance After K Changes
//https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/description/?envType=daily-question&envId=2025-06-20
class Solution {
public:
    int maxDistance(string s, int k) {
        //initialisation
        int n = s.length();
        int ans = 0;
        int north = 0, south = 0, west = 0, east = 0;
        //traversing
        for (int i = 0;i<n;i++){
            char ch = s[i];
            if(ch == 'N'){
                north++;
            }
            else if(ch == 'S'){
                south++;
            }
            else if(ch == 'E'){
                east++;
            }
            else if(ch == 'W'){
                west++;
            }
            //calculating cordinates
            int x = abs(north-south);
            int y = abs(east-west);
            int MD = x+y;
            int dis = MD + min(2*k,i+1-MD);
            ans = max(ans,dis); 
        }
        return ans;
    }
};