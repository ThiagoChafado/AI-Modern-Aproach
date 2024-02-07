#include "Util.h"

bool verifyEqual(const std::vector<std::vector<int>>& board1, const std::vector<std::vector<int>>& board2) {
    if (board1.size() != board2.size() || board1.empty()) {
        return false;
    }
    
    for (size_t i = 0; i < board1.size(); ++i) {
        if (board1[i].size() != board2[i].size()) {
            return false;
        }
        
        for (size_t j = 0; j < board1[i].size(); ++j) {
            if (board1[i][j] != board2[i][j]) {
                return false;
            }
        }
    }
    
    return true;
}
