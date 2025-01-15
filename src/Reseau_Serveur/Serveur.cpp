#include "pch.h"
#include "Serveur.h"
#include <vector>
//
//Serveur::Serveur() {
//
//	WSADATA data;
//	WSAStartup(MAKEWORD(2, 2), &data);
//
//	mAddr.sin_addr.s_addr = INADDR_ANY; // indique que toutes les sources seront acceptées
//	mAddr.sin_port = htons(6666); // toujours penser à traduire le port en réseau
//	mAddr.sin_family = AF_INET; // notre socket est TCP
//	
//	mServer = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (mServer == INVALID_SOCKET) {
//		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//	std::cout << "Socket Server Create !" << std::endl;
//
//	int res = bind(mServer, (sockaddr*)&mAddr, sizeof(mAddr));
//	if (res == SOCKET_ERROR)
//	{
//		std::cout << "Erreur listen : " << WSAGetLastError();
//		_ASSERT(false);
//	}
//
//	res = listen(mServer, SOMAXCONN);
//	if (res == SOCKET_ERROR)
//	{
//		std::cout << "Erreur listen : " << WSAGetLastError();
//		_ASSERT(false);
//	}
//}
//
//void Serveur::WaitForNewClient() {
//	sockaddr_in from = { 0 };
//	socklen_t addrlen = sizeof(from);
//	SOCKET newClient = accept(mServer, (sockaddr*)(&from), &addrlen);
//
//	if (newClient != INVALID_SOCKET) {
//		char buff[INET6_ADDRSTRLEN] = { 0 };
//		std::string clientAddress = inet_ntop(AF_INET, &(from.sin_addr), buff, INET6_ADDRSTRLEN);
//		std::cout << "Connexion de " << clientAddress.c_str() << ":" << ntohs(from.sin_port) << std::endl;
//	}
//
//	mClients.push_back(newClient);
//}
//
//void Serveur::CloseServeur() {
//	for (SOCKET s : mClients) {
//		closesocket(s);
//	}
//	closesocket(mServer);
//	WSACleanup();
//}