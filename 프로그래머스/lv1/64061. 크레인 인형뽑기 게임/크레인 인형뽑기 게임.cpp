#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<int> check;


	for (int i = 0; i < moves.size(); i++)
	{
		for (int j = 0; j < board.size(); j++)
		{
			if (board[j][moves[i] - 1] != 0)
			{
				if (check.empty() == false && check.back() == board[j][moves[i] - 1])
				{
					check.pop_back();
					answer += 2;
				}
				else
				{
					check.push_back(board[j][moves[i] - 1]);
				}
				board[j][moves[i] - 1] = 0;
				break;
			}

			else
				continue;
		}
	}


	return answer;
}
