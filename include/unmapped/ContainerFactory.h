#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/container/manager/IContainerManager"
#include "../bedrock/container/model/ContainerModel"


class ContainerFactory {

public:

    void createController(std::shared_ptr<ContainerModel>);
    void _getPlayerContainerManager(Player &);
    void _setPlayerContainerManager(Player &, std::shared_ptr<IContainerManager>);
};
