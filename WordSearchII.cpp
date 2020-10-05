// class Solution {
// public:
//     int visited[100][100] = {0};
//     int dfs(string word, vector<vector<char>> board, int i, int j, int kd) { 
//         if(board[i][j]==word[kd] || i<0 || j<0 || i>board.size()-1 || j>board[0].size()-1 || kd==word.length() || visited[i][j]==1) return 0;
//         visited[i][j]=1;
//         cout << kd << endl;
//         dfs(word, board, i+1, j, kd++);
//         dfs(word, board, i-1, j, kd++);
//         dfs(word, board, i, j+1, kd++);
//         dfs(word, board, i, j-1, kd++);
//         return -1;
//     }
//     vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
//         vector<string> v;
//         for(string w : words) {
//             for(int i=0; i<board.size(); i++) {
//                 for(int j=0; j<board[0].size(); j++) {
//                     if(w[0]==board[i][j]) {
//                         int res = dfs(w, board, i, j, 0);
//                         if(res!=-1) v.push_back(w);
//                     } else break;
//                 }
//             }
//         }
//         return v;
//     }
// };





