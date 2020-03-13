#pragma once

#include <memory>


class EntitySystems {

public:
    EntitySystems(); // _ZN13EntitySystemsC2Ev
    void _registerSystems(); // _ZN13EntitySystems16_registerSystemsEv
    ~EntitySystems(); // _ZN13EntitySystemsD2Ev
    void _unregisterSystems(); // _ZN13EntitySystems18_unregisterSystemsEv
    void tick(EntityRegistry &); // _ZN13EntitySystems4tickER14EntityRegistry
    void registerTickingSystem(std::unique_ptr<ITickingSystem>); // _ZN13EntitySystems21registerTickingSystemESt10unique_ptrI14ITickingSystemSt14default_deleteIS1_EE
    void getPlayerInteractionSystem(); // _ZN13EntitySystems26getPlayerInteractionSystemEv
    void _registerPlayerInteractionSystem(); // _ZN13EntitySystems32_registerPlayerInteractionSystemEv
    void _unregisterTickingSystems(); // _ZN13EntitySystems25_unregisterTickingSystemsEv
    void _unregisterPlayerInteractionSystem(); // _ZN13EntitySystems34_unregisterPlayerInteractionSystemEv
};
