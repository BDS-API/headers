#pragma once

#include <memory>


class EntitySystems {

public:
    void _registerPlayerInteractionSystem();
    void _unregisterTickingSystems();
    void _unregisterSystems();
    void _registerSystems();
    void getPlayerInteractionSystem();
    ~EntitySystems();
    void tick(EntityRegistry &);
    void _unregisterPlayerInteractionSystem();
    void registerTickingSystem(std::unique_ptr<ITickingSystem>);
    EntitySystems();
};
