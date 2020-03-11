#pragma once

#include "../bedrock/container/model/ContainerModel.h"
#include <memory>
#include "../bedrock/actor/Player.h"
#include "../bedrock/container/manager/IContainerManager.h"


class ContainerFactory {

public:

    void createController(std::shared_ptr<ContainerModel>);
    void _getPlayerContainerManager(Player &);
    void _setPlayerContainerManager(Player &, std::shared_ptr<IContainerManager>);
};
