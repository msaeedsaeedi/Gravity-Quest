#include <H2DE/Engine.hpp>
#include <H2DE/SceneManager.hpp>
#include <memory>

#include "loading_s.hpp"

int main() {
    H2DE::Engine::init("assets/configurations/config.json");
    H2DE::SceneManager::add_scene("loading", std::make_shared<LoadingScene>());
    H2DE::Engine::run();
    return 0;
}
