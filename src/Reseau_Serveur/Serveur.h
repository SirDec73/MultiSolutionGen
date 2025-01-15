#pragma once
#include <vector>

class Serveur
{
protected:
	sockaddr_in mAddr;
	SOCKET mServer;

public:
	virtual void CloseServeur() = 0;
};

