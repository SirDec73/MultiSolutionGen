//// Reseau_Serveur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
////
#include "pch.h"
//#include <WinSock2.h>
//#include <iostream>
//#include <WS2tcpip.h>
//#pragma comment(lib, "Ws2_32.lib")
//
//
////int main() {
////	WSADATA data;
////	WSAStartup(MAKEWORD(2, 2), &data);
////
////	ServeurTCP pServeur = ServeurTCP();
////	pServeur.WaitForNewClient();
////	pServeur.WaitForNewClient();
////	pServeur.WaitForNewClient();
////	pServeur.CloseServeur();
////}
//
////int main()
////{
////	int port = 6666;
////	WSADATA data;
////	WSAStartup(MAKEWORD(2, 2), &data);
////
////	sockaddr_in addr;
////	addr.sin_addr.s_addr = INADDR_ANY; // indique que toutes les sources seront acceptées
////	addr.sin_port = htons(port); // toujours penser à traduire le port en réseau
////	addr.sin_family = AF_INET; // notre socket est TCP
////
////	SOCKET server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
////	if (server == INVALID_SOCKET) {
////		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
////		return 0;
////	}
////	std::cout << "Socket Server Create !" << std::endl;
////
////	int res = bind(server, (sockaddr*)&addr, sizeof(addr));
////	if (res != 0) {
////		std::cout << "Erreur de creation du serveur local" << std::endl;
////		WSACleanup();
////		return 0;
////	}
////	std::cout << "Creation Server Local !" << std::endl;
////
////	res = listen(server, SOMAXCONN);
////	if (res == SOCKET_ERROR)
////	{
////		std::cout << "Erreur listen : " << WSAGetLastError();
////		return 0;
////	}
////
////	sockaddr_in from = { 0 };
////	socklen_t addrlen = sizeof(from);
////	SOCKET newClient = accept(server, (sockaddr*)(&from), &addrlen);
////
////	if (newClient != INVALID_SOCKET) {
////
////		char buff[INET6_ADDRSTRLEN] = { 0 };
////		//std::string clientAddress = inet_ntop(addr.sin_family, (void*)&(addr.sin_addr), buff, INET6_ADDRSTRLEN);
////		std::string clientAddress = inet_ntop(AF_INET, &(from.sin_addr), buff, INET6_ADDRSTRLEN);
////		//std::cout << "Connexion de " << clientAddress.c_str() << ":" << addr.sin_port << std::endl;
////		std::cout << "Connexion de " << clientAddress.c_str() << ":" << ntohs(from.sin_port) << std::endl;
////	}
////
////	sockaddr_in from2 = { 0 };
////	socklen_t addrlen2 = sizeof(from2);
////	SOCKET newClient2 = accept(server, (sockaddr*)(&from2), &addrlen2);
////
////	if (newClient2 != INVALID_SOCKET) {
////
////		char buff[INET6_ADDRSTRLEN] = { 0 };
////		//std::string clientAddress = inet_ntop(addr.sin_family, (void*)&(addr.sin_addr), buff, INET6_ADDRSTRLEN);
////		std::string clientAddress = inet_ntop(AF_INET, &(from2.sin_addr), buff, INET6_ADDRSTRLEN);
////		//std::cout << "Connexion de " << clientAddress.c_str() << ":" << addr.sin_port << std::endl;
////		std::cout << "Connexion de " << clientAddress.c_str() << ":" << ntohs(from2.sin_port) << std::endl;
////	}
////
////	closesocket(server);
////	WSACleanup();
////}
//
//// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
//// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
//
//// Astuces pour bien démarrer : 
////   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
////   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
////   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
////   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
////   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
////   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
