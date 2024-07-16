#include "loading_s.hpp"

#include <H2DE/engine.hpp>
#include <H2DE/scene_manager.hpp>
#include <iostream>

#include "game_s.hpp"

void LoadingScene::init() {
}

void LoadingScene::update(const float delta) {
    if (m_timer < 3.0f) {
        m_timer += delta;
        std::cout << "Loading..." << std::endl;
    } else {
        H2DE::SceneManager::remove_scene("loading");
        H2DE::SceneManager::add_scene("game", std::make_shared<GameScene>());
        H2DE::SceneManager::change_scene("game");
    }
}

void LoadingScene::render(const RenderEngine& render_engine) {
    render_engine.draw();
}