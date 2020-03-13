#pragma once

#include <memory>


namespace ContainerFactory {

    void createController(std::shared_ptr<ContainerModel>); // _ZN16ContainerFactory16createControllerESt10shared_ptrI14ContainerModelE
    void _getPlayerContainerManager(Player &); // _ZN16ContainerFactory26_getPlayerContainerManagerER6Player
    void _setPlayerContainerManager(Player &, std::shared_ptr<IContainerManager>); // _ZN16ContainerFactory26_setPlayerContainerManagerER6PlayerSt10shared_ptrI17IContainerManagerE
};
