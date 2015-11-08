#include "sfml_window_manager.h"

bool SfmlWindowManager::initialize() {
    //get the default config
    config = getConfig();

    //following line throws a segfault!?
    //imagechannel = datamanager()->readChannel<lms::imaging::Image>(this,"IMAGE");

    // create the window
    window.create(sf::VideoMode(800, 600),"Window");


    return true;
}

bool SfmlWindowManager::deinitialize() {
    return true;
}

bool SfmlWindowManager::cycle() {

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        //following test works fine
        /** Example Triangle
        // create an array of 3 vertices that define a triangle primitive
        sf::VertexArray triangle(sf::Triangles, 3);

        // define the position of the triangle's points
        triangle[0].position = sf::Vector2f(10, 10);
        triangle[1].position = sf::Vector2f(100, 10);
        triangle[2].position = sf::Vector2f(100, 100);

        // define the color of the triangle's points
        triangle[0].color = sf::Color::Red;
        triangle[1].color = sf::Color::Blue;
        triangle[2].color = sf::Color::Green;

        // no texture coordinates here, we'll see that later

        window.draw(triangle);
        */





        // end the current frame
        window.display();
    }


    return true;
}
