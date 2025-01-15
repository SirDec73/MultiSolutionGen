#pragma once
#include <WinSock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")

class Client 
{
protected:
	sockaddr_in mAddr;
	SOCKET mClient;

public:
	Client();
	void CloseClient();
	int SendRequest(const char* buffer);
	friend class ServeurTCP;
};