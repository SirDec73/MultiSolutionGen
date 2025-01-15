#pragma once
#include "Serveur.h"

class ServeurUDP : public Serveur
{
public:
	char buffer[8];
	ServeurUDP();
	void CloseServeur() override;
	bool Receive();
};

