#include "sfml_window_manager.h"

extern "C" {
void* getInstance () {
    return new SfmlWindowManager();
}
}
