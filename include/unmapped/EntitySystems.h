#pragma once

#include "EntityRegistry.h"
#include "../bedrock/level/system/ITickingSystem.h"
#include <memory>


class EntitySystems {

public:
    ~EntitySystems();
    void _registerSystems();
    void tick(EntityRegistry &);
    void getPlayerInteractionSystem();
    void _unregisterPlayerInteractionSystem();
    void registerTickingSystem(std::unique_ptr<ITickingSystem>);
    void _registerPlayerInteractionSystem();
    void _unregisterSystems();
    EntitySystems();
    void _unregisterTickingSystems();
};
