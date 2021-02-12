#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(640, 480), "Hello, SFML");

    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

    while (window.isOpen()) {
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        window.clear(Color::Black);
        window.draw(shape);
        window.display();
    }

    return 0;
}
