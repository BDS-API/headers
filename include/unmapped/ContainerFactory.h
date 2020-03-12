#pragma once

#include <memory>


namespace ContainerFactory {

    void _setPlayerContainerManager(Player &, std::shared_ptr<IContainerManager>);
    void createController(std::shared_ptr<ContainerModel>);
    void _getPlayerContainerManager(Player &);
};
