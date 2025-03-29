#include "UDP_Server.h"
#include <iostream>
#include <string>

UDP_Server::UDP_Server() {
	WSADATA data;
	WSAStartup(MAKEWORD(2, 2), &data);

	// mAddr
	mAddr.sin_family = NULL;
	mAddr.sin_addr.s_addr = NULL;
	mAddr.sin_port = NULL;
	mLenAddr = NULL;

	// Socket
	mSocket = NULL;
}

UDP_Server::~UDP_Server() {

}

void UDP_Server::Initialize(int port) {

	mSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	if (mSocket == INVALID_SOCKET) {
		OutputDebugStringA("Erreur de socket : Serveur\n");
		WSACleanup();
		_ASSERT(false);
	}

	mAddr.sin_addr.s_addr = INADDR_ANY;
	mAddr.sin_port = htons(port);
	mAddr.sin_family = AF_INET;
	mLenAddr = sizeof(mAddr);

	OutputDebugString(L"Socket Create : Serveur\n");

	int res = bind(mSocket, (sockaddr*)&mAddr, mLenAddr);
	if (res == SOCKET_ERROR) {
		int err = WSAGetLastError(); 
		closesocket(mSocket);
		WSACleanup();
		_ASSERT(false);
	}
	OutputDebugStringA("Bind Create\n");
}

bool UDP_Server::Reveive() {
	char buffer[255]; 
	memset(&buffer, 0, 255);
	sockaddr_in from;
	int fromLen = sizeof(from);
	OutputDebugStringA("Wait ... \n");
	int bytedReceive = recvfrom(mSocket, buffer, 9, 0, (sockaddr*)&from, &fromLen);
	if (bytedReceive < 0) {
		int Error_Code = WSAGetLastError();
		WSACleanup();
		_ASSERT(false);
		return false;
	}
	OutputDebugString(L"Receive Serveur Bon\n");

	char texte[9];
	memcpy(&texte, buffer, sizeof(char)*9);
	OutputDebugStringA("Server Receive : ");
	OutputDebugStringA(texte);
	OutputDebugStringA("\n");

	return true;
}