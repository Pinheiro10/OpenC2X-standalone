#include <utility/ICommunication.h>
#include "CommunicationSender.h"
#include "CommunicationReceiver.h"

using namespace std;

class Communication : public CommunicationSender, public CommunicationReceiver {
public:
	Communication(string portIn, string portOut, string envelope, ICommunication* communicator);
	~Communication();
	void run();

private:
	ICommunication* mCommunicator;
};