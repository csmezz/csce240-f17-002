#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <queue>
#include <string>
#include <vector>
#include "shape.hpp"

using namespace std;

class Board {
	protected:
		vector<Shape*> board;
	public:
		Board();
		void printBoard();
		int checkSolved();
		void makePlay(int x, int y, int play_code);
};

#endif
