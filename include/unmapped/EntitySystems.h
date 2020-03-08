#pragma once

#include "../bedrock/level/system/ITickingSystem"


class EntitySystems {

public:

    EntitySystems(void);
    void _registerSystems();
    void _unregisterSystems();
    void tick(EntityRegistry &);
    void registerTickingSystem(std::unique_ptr<ITickingSystem, std::default_delete<ITickingSystem>>);
    void getPlayerInteractionSystem();
    void _registerPlayerInteractionSystem();
    void _unregisterTickingSystems();
    void _unregisterPlayerInteractionSystem();
};
