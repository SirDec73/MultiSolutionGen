// Reseau_Serveur.cpp : Ce fichier contient la fonction 'main'. L'ex�cution du programme commence et se termine � cet endroit.
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
//	addr.sin_port = htons(6666); // toujours penser � traduire le port en r�seau
//	addr.sin_family = AF_INET; // notre socket est TCP
//	addr.sin_addr = { 127,0,0,1 };
//
//	SOCKET client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (client == INVALID_SOCKET) {
//		std::cout << "Erreur creation socket : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//	
//	//inet_pton(AF_INET, "127.0.0.1", &(addr.sin_addr)); // Convertit "127.0.0.1" en format r�seau
//
//	if (connect(client, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR){
//		std::cout << "Erreur connection : " << WSAGetLastError() << std::endl;
//		_ASSERT(false);
//	}
//
//	std::cout << "Connexion r�ussie au serveur !" << std::endl;
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
//	std::cout << "Connexion r�ussie au serveur !" << std::endl;
//
//
//	closesocket(client);
//	closesocket(client2);
//	WSACleanup();
//}

// Ex�cuter le programme�: Ctrl+F5 ou menu D�boguer�> Ex�cuter sans d�bogage
// D�boguer le programme�: F5 ou menu D�boguer�> D�marrer le d�bogage

// Astuces pour bien d�marrer�: 
//   1. Utilisez la fen�tre Explorateur de solutions pour ajouter des fichiers et les g�rer.
//   2. Utilisez la fen�tre Team Explorer pour vous connecter au contr�le de code source.
//   3. Utilisez la fen�tre Sortie pour voir la sortie de la g�n�ration et d'autres messages.
//   4. Utilisez la fen�tre Liste d'erreurs pour voir les erreurs.
//   5. Acc�dez � Projet�> Ajouter un nouvel �l�ment pour cr�er des fichiers de code, ou � Projet�> Ajouter un �l�ment existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, acc�dez � Fichier�> Ouvrir�> Projet et s�lectionnez le fichier .sln.
