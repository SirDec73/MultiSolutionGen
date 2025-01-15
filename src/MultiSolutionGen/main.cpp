#include "pch.h"
#include "Ball.h"
#include "CLient.h"

Client client;
Ball ball;

DWORD WINAPI SendPosition(void* param) {
    while (true) {
        char tmpValue[8];

        float tmp_x = ball.GetPositionX();
        float tmp_y = ball.GetPositionY();

        std::memcpy(tmpValue, &tmp_x , 4);
        std::memcpy(tmpValue + 4, &tmp_y, 4);

        int res = client.SendRequest(tmpValue);

        if (res <= 0) {
            int temp = WSAGetLastError();
            std::cout << WSAGetLastError() << std::endl;
        }

    }
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR cmdLine, int cmdShow)
{
    // Create Socket Client --> Socket Client
    // thread (main)        --> Actualiser les valeurs + Affichage visuel (SFML)
    // thread (function)    --> Envoyer les données


    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");


    ball.SetPosition(250.5f, 250.3f);
    ball.SetDirection(2, 1);

    sf::Clock clock;
    float start = clock.getElapsedTime().asSeconds();
    float end = clock.getElapsedTime().asSeconds();
    float dt = end - start;

    CreateThread(nullptr, 0, SendPosition, nullptr, NULL, 0);

    while (window.isOpen())
    {
        start = clock.getElapsedTime().asSeconds();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ball.Move(dt);
        ball.CheckCollisionWindow(500, 500);
        

        window.clear();
        window.draw(ball.GetShape());
        window.display();
        end = clock.getElapsedTime().asSeconds();
        dt = end - start;
    }

    return 0;
}
