#pragma once
#include <H2DE/scene.hpp>
class GameScene : public H2DE::Scene
{
    public:
        void init() override;
        void update(const float delta) override;
        void render(const RenderEngine& render_engine) override;
};