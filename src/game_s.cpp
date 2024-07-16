#include "game_s.hpp"

#include <iostream>

void GameScene::init() {
    std::cout << "GameScene::init" << std::endl;
}

void GameScene::update(const float delta) {
    std::cout << "GameScene::update" << std::endl;
}

void GameScene::render(const RenderEngine& render_engine) {
}
