#include "board.hpp"
#include <iostream>
#include "shape.hpp"
#include "cross.hpp"
#include "circle.hpp"
#include "empty.hpp"

using namespace std;

Board::Board() {
	for (int i = 0; i < 9; i++) {
		this->board.push_back(new Empty);
	}
}

void Board::printBoard() {
	for (int i = 0; i < 9; i++) {
		cout << "|" << board[i]->getTypeString()  << "|";
		if ((i > 0) && (((i+1) % 3) == 0)) {
			cout << endl;
		}
	}
}

int Board::checkSolved() {
	int total = 0;
	int ary[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, 
	{1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 8}};
	for (int i = 0; i < 8;i++) {
		total = 0;
		for (int j = 0; j < 3; j++) {
			total = total + board[ary[i][j]]->getType();
		}
		if (total == 3) {
			return 1;
		}
		else if (total == -3) {
			return 2;
		}
	}
	return 0;
}

// play_code is 1 for cross, -1 for circle
void Board::makePlay(int x, int y, int play_code) {
	if (play_code == -1) {
		board[(3*x)+y] = new Circle;
	}
	else if (play_code == 1) {
		board[(3*x)+y] = new Cross;
	}
}
