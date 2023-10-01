#include "../header.hpp"

ll N, M;
ll solution_count = 0;

void print_board(mi board)
{
	cout << "board:" << endl;
	for (ll i = 0; i < N; i++)
	{
		for (ll j = 0; j < N; j++)
		{
			cout << board[i][j] << " ";
		}

		cout << endl;
	}
	
}

bool legal_move(mi& board, ll row, ll col)
{
	ll c1 = col, c2 = col, c3 = col;
	for (ll i = row; i >= 0; i--)
	{
		if (c1 >= 0 && board[i][c1] == 1) return false;
		if (          board[i][c2] == 1) return false;
		if (c3 < N && board[i][c3] == 1) return false;

		c1--;
		c3++;
	}
	return true;
}

void count_solutions(mi board, ll row)
{
	// print_board(board);
	if (row == N)
	{
		solution_count++;
		return;
	}

	for (ll col = 0; col < N; col++)
	{
		if (board[row][col] == -1) continue;

		
		if (!legal_move(board, row, col)) {
			continue;
		}

		mi new_board = board;

		new_board[row][col] = 1;
		count_solutions(new_board, row+1);
	}
	
}

int main() {
	cin >> N >> M;

	while (!(N == 0 && M == 0)) {

		mi board(N, vi(N, 0));

		// read holes
		ll row, col;
		for (ll i = 0; i < M; i++) {
			cin >> row >> col;
			board[row][col] = -1;
		}

		// config_count configuration
		solution_count = 0;
		count_solutions(board, 0);

		cout << solution_count << endl;
		
		cin >> N >> M;
	}

	return 0;
}

// .Q..
// ...Q
// Q...
// ..Q.