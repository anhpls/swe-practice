#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;



class Solution{
public:
    vector<vector<int>> findWinners(const vector<vector<int>>& matches){
        unordered_map<int, int> losses;
        vector<vector<int>> answer(2); 

        for (auto match : matches){
            int winner = match[0];
            int loser = match[1];

            if (!losses.count(winner)) losses[winner] = 0;
            losses[loser]++;
        }

        // player.first = player ID
        // player.second = # of losses
        for (auto player : losses){
            if (player.second == 0){
                answer[0].push_back(player.first);
            }
            if (player.second == 1){
                answer[1].push_back(player.first);
            }
        }
        // use unordered for faster insertion and need to sort at the end 
        // if used map<int, int> it would've been O(log n) instead of O(1)

        sort(answer[0].begin(), answer[0].end());
        sort(answer[1].begin(), answer[1].end());
        return answer;
    };
};



int main(){
    Solution s;

    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> result = s.findWinners(matches);

    for(auto row : result){
        for (int player : row){
            cout << player << " "; 
        }
        cout << endl;
    }
}