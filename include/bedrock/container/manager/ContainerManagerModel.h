#pragma once

#include "../../actor/Player.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <functional>
#include <memory>
#include "../../util/BlockPos.h"
#include "../model/ContainerModel.h"
#include "IContainerManager.h"


class ContainerManagerModel : IContainerManager {

public:
    virtual void getContainerType()const;
    virtual bool isValid(float);
    ~ContainerManagerModel();
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
    virtual void getContainerId()const;
    virtual void init();
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    void getPlayerXP()const;
    bool isCreativeMode()const;
    void registerInformControllerOfDestructionCallback(std::function<void (ContainerManagerModel &)>);
    std::string getBlockName(BlockPos const&)const;
//  ContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
    void debitPlayerXP(int);
    std::string getContainers();
    std::string getEntityName(ActorUniqueID const&)const;
    bool isClientSide()const;
    void tick(int);
    void grantExperience(int);
    void _addContainer(std::shared_ptr<ContainerModel>);
    void getPlayer()const;
};
