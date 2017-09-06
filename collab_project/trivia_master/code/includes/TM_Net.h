// This is the networking code for the "Trivia Master" game code. This should be treated like a "black box" and you should
// only ever need to call the public functions of this class.

#include "TM_Net.h"
#include <String>
#include "TM_Message.h"

class TM_Net {
	public:
		String poll();
		void send(String message);
	private:
}
