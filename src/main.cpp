#include <H2DE/engine.hpp>
#include <libconfig.h++>
int main() {
    H2DE::Engine engine;
    engine.init("assets/configurations/config.cfg");
    engine.run();
    return 0;
}
