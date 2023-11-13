#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>

int main()
{
    short r{}, g{}, b{};
    sf::RenderWindow window(sf::VideoMode(300, 400), "Traffic Light");

    sf::RectangleShape base(sf::Vector2f(100, 250));
    base.setFillColor(sf::Color(0, 0, 0));
    base.setPosition(sf::Vector2f(50, 50));


    sf::CircleShape circle1(25);
    circle1.setOutlineThickness(1);
    circle1.setOutlineColor(sf::Color(255, 255, 255));
    circle1.setPosition(sf::Vector2f(75, 75));
    circle1.setFillColor(sf::Color(255, 0, 0));

    sf::CircleShape circle2(25);
    circle2.setOutlineThickness(1);
    circle2.setOutlineColor(sf::Color(255, 255, 255));
    circle2.setPosition(sf::Vector2f(75, 150));
    circle2.setFillColor(sf::Color(255, 255, 0));

    sf::CircleShape circle3(25);
    circle3.setOutlineThickness(1);
    circle3.setOutlineColor(sf::Color(255, 255, 255));
    circle3.setPosition(sf::Vector2f(75, 225));
    circle3.setFillColor(sf::Color(0, 255, 0));

    window.clear(sf::Color(255, 255, 255));  

    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.draw(base);
        window.draw(circle1);
        window.display();

        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        window.clear(sf::Color(255, 255, 255));

        window.draw(base);
        window.draw(circle2);
        window.display();
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        window.clear(sf::Color(255, 255, 255));

        window.draw(base);
        window.draw(circle3);
        window.display();
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        window.clear(sf::Color(255, 255, 255));

    }

    return 0;
}