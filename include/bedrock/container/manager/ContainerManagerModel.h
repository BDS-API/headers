#pragma once

#include <string>
#include <memory>
#include "IContainerManager.h"
#include <functional>


class ContainerManagerModel : IContainerManager {

public:
    virtual void init();
    virtual void getContainerId()const;
    virtual void getContainerType()const;
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    ~ContainerManagerModel();
    virtual bool isValid(float);
    std::string getBlockName(BlockPos const&)const;
    void _addContainer(std::shared_ptr<ContainerModel>);
    void debitPlayerXP(int);
    void getPlayerXP()const;
//  ContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
    void grantExperience(int);
    void tick(int);
    std::string getEntityName(ActorUniqueID const&)const;
    void registerInformControllerOfDestructionCallback(std::function<void (ContainerManagerModel &)>);
    std::string getContainers();
    bool isCreativeMode()const;
    void getPlayer()const;
    bool isClientSide()const;
};
