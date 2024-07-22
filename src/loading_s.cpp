#include "loading_s.hpp"

#include <H2DE/Engine.hpp>
#include <H2DE/SceneManager.hpp>
#include <iostream>

#include "game_s.hpp"

void LoadingScene::init() {
}

void LoadingScene::update() {
    if (m_timer < 3.0f) {
        m_timer += get_delta();
        std::cout << "Loading..." << std::endl;
    } else {
        H2DE::SceneManager::remove_scene("loading");
        H2DE::SceneManager::add_scene("game", std::make_shared<GameScene>());
        H2DE::SceneManager::change_scene("game");
    }
}