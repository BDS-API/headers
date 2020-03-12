#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/container/model/ContainerModel.h"
#include "../bedrock/container/manager/IContainerManager.h"
#include <memory>


namespace ContainerFactory {

    void _setPlayerContainerManager(Player &, std::shared_ptr<IContainerManager>);
    void _getPlayerContainerManager(Player &);
    void createController(std::shared_ptr<ContainerModel>);
};
