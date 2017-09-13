// This is the networking code for the "Trivia Master" game code. This should be treated like a "black box" and you should
// only ever need to call the public functions of this class.

#include <string>
#include "TM_Message.hpp"

class TM_Net {
	public:
		std::string poll();
		void send(std::string message);
	private:
};
