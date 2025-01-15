#include "pch.h"
#include "ServeurUDP.h"

ServeurUDP::ServeurUDP() {
	WSADATA data;
	WSAStartup(MAKEWORD(2, 2), &data);

	mAddr.sin_addr.s_addr = INADDR_ANY; // indique que toutes les sources seront acceptées
	mAddr.sin_port = htons(6666); // toujours penser à traduire le port en réseau
	mAddr.sin_family = AF_INET; // notre socket est TCP

	mServer = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (mServer == INVALID_SOCKET) {
		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
		_ASSERT(false);
	}
	std::cout << "Socket Server Create !" << std::endl;

	int res = bind(mServer, reinterpret_cast<sockaddr*>(&mAddr), sizeof(mAddr));
	if (res == SOCKET_ERROR)
	{
		std::cout << "Erreur listen : " << WSAGetLastError();
		_ASSERT(false);
	}
}

bool ServeurUDP::Receive() {
	socklen_t lenAddr = sizeof(mAddr);

	int rec = recvfrom(mServer, buffer, sizeof(buffer), 0, reinterpret_cast<sockaddr*>(&mAddr), &lenAddr);
	if (rec <= 0) {
		// Nothing receive
		return false;
	}
	return true;

}


void ServeurUDP::CloseServeur() {
	closesocket(mServer);
	WSACleanup();
}
