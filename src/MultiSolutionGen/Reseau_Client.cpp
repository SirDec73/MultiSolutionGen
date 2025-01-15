// Reseau_Serveur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "pch.h"

//#include "../TheoriqueMultijoueur/ClientTCP.h"

//int main() {
//	WSADATA data;
//	WSAStartup(MAKEWORD(2, 2), &data);
//
//	ClientTCP client1 = ClientTCP();
//	ClientTCP client2 = ClientTCP();
//
//	client1.CloseClient();
//	client2.CloseClient();
//}

//int main()
//{
//	WSADATA data;
//	WSAStartup(MAKEWORD(2, 2), &data);
//
//	sockaddr_in addr;
//	addr.sin_port = htons(6666); // toujours penser à traduire le port en réseau
//	addr.sin_family = AF_INET; // notre socket est TCP
//	addr.sin_addr = { 127,0,0,1 };
//
//	SOCKET client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (client == INVALID_SOCKET) {
//		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//	
//	//inet_pton(AF_INET, "127.0.0.1", &(addr.sin_addr)); // Convertit "127.0.0.1" en format réseau
//
//	if (connect(client, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR){
//		std::cout << "Erreur connection : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//
//	std::cout << "Connexion réussie au serveur !" << std::endl;
//
//	SOCKET client2 = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (client2 == INVALID_SOCKET) {
//		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//
//	if (connect(client2, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) {
//		std::cout << "Erreur connection : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//	std::cout << "Connexion réussie au serveur !" << std::endl;
//
//
//	closesocket(client);
//	closesocket(client2);
//	WSACleanup();
//}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
