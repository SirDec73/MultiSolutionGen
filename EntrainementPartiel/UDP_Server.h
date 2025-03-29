#include <WinSock2.h>
#include <WS2tcpip.h>
#pragma comment(lib,"Ws2_32.lib")

class UDP_Server
{
public:
	UDP_Server();
	virtual ~UDP_Server();

	void Initialize(int port);
	bool Reveive();


private:
	SOCKET mSocket;
	sockaddr_in mAddr;
	socklen_t mLenAddr;
};

