#include <H2DE/engine.hpp>
#include <H2DE/scene_manager.hpp>
#include <memory>

#include "loading_s.hpp"

int main() {
    H2DE::Engine::init("assets/configurations/config.cfg");
    H2DE::SceneManager::add_scene("loading", std::make_shared<LoadingScene>());
    H2DE::Engine::run();
    return 0;
}
