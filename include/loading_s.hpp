#pragma once

#include <H2DE/scene.hpp>
#include <iostream>

class LoadingScene : public H2DE::Scene
{
    public:
        void init() override;
        void update(const float delta) override;
        void render(const RenderEngine& render_engine) override;

    private:
        float m_timer = 0.0f;
};