#include "pch.h"
#include "Client.h"

Client::Client() {
	WSADATA data;
	WSAStartup(MAKEWORD(2, 2), &data);

	mClient = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (mClient == INVALID_SOCKET) {
		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
		_ASSERT(false);
	}
	std::cout << "Creation Success"<< std::endl;

	mAddr.sin_family = AF_INET; // notre socket est TCP
	mAddr.sin_port = htons(6666); // toujours penser à traduire le port en réseau
	inet_pton(AF_INET, "127.0.0.1", &mAddr.sin_addr);

	//ConnectionServeur();
}

int Client::SendRequest(const char* buffer) {
	return sendto(mClient, buffer, sizeof(buffer), 0,reinterpret_cast<const sockaddr*>(&mAddr), sizeof(mAddr));
}

void Client::CloseClient() {
	closesocket(mClient);
	std::cout << "Close with Success" << std::endl;
}