#include "pch.h"
#include "main.h"
#include "BallServeur.h"
#include "ServeurUDP.h"

Ball ball;
ServeurUDP server;
char source[1024];

DWORD WINAPI ActualiseValue(void* param) {
    while (true) {
        bool tmpValue = server.Receive();
        if (tmpValue <= 0) {
            // Nothing Happen
            continue;
        }
        float x;
        float y;
        
        std::memcpy(&x, server.buffer, 4);
        std::memcpy(&y, server.buffer+4, 4);

        ball.SetPosition(x, y);
    }
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR cmdLine, int cmdShow)
{
    // Create Socket Server --> Socket Serveur
    // thread (main)        --> Afficher les valeurs (SFML)
    // thread (function)    --> Récupérer les valeurs

    sf::RenderWindow window(sf::VideoMode(500, 500), "Server SFML");

    ball.SetPosition(250, 250);

    CreateThread(nullptr, 0, ActualiseValue, nullptr, NULL, 0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(ball.GetShape());
        window.display();
    }

    return 0;
}