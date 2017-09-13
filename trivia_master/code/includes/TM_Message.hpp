// This describes the message format coming to and from the Trivia Master server.

#include <string>

class TM_Message {
	public:
		std::string toString();
		std::string username;
		std::string user_id;
		std::string json_message;
};
