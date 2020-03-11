#pragma once

#include <memory>
#include "./ContainerManagerModel.h"
#include "../../actor/Player.h"
#include "./IContainerManager.h"
#include "../../util/BlockPos.h"
#include "../model/ContainerModel.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <functional>
#include <string>


class ContainerManagerModel : IContainerManager {

public:
    virtual ~ContainerManagerModel();
    virtual void getContainerId()const;
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
    virtual void getContainerType()const;
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    virtual void init();
    virtual bool isValid(float);

//  ContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
    void tick(int);
    void grantExperience(int);
    std::string getBlockName(BlockPos const&)const;
    std::string getEntityName(ActorUniqueID const&)const;
//  void registerInformControllerOfDestructionCallback(std::function<void (ContainerManagerModel &)>); //TODO: incomplete function definition
    void debitPlayerXP(int);
    void getPlayerXP()const;
    bool isCreativeMode()const;
    bool isClientSide()const;
    std::string getContainers();
    void getPlayer()const;
    void _addContainer(std::shared_ptr<ContainerModel>);
};
