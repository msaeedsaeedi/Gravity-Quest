#pragma once

#include <H2DE/Scene/Scene.hpp>
#include <iostream>

class LoadingScene : public H2DE::Scene
{
    public:
        void init() override;
        void update() override;

    private:
        float m_timer = 0.0f;
};