#ifndef SFML_WINDOW_MANAGER_H
#define SFML_WINDOW_MANAGER_H

#include <lms/datamanager.h>
#include <lms/module.h>
#include "lms/module_config.h"
#include "lms/imaging/image.h"

#include <SFML/Graphics.hpp>

class SfmlWindowManager : public lms::Module {
public:
    bool initialize();
    bool deinitialize();
    bool cycle();
private:
    const lms::ModuleConfig *config;
    //Datachannels
    const lms::imaging::Image* imagechannel;
    sf::RenderWindow window;
};

#endif // SFML_WINDOW_MANAGER_H
