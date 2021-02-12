#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(640, 480), "Hello, SFML");

    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

    Event event;

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear(Color::Black);
        window.draw(shape);
        window.display();
    }

    return 0;
}
