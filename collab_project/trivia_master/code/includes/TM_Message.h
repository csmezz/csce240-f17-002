// This describes the message format coming to and from the Trivia Master server.

#include <String>

class TM_Message {
	public:
		String toString();
		String username;
		String user_id;
		String json_message;
}
