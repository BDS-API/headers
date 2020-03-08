#pragma once

#include "../model/ContainerModel"
#include "../../actor/Player"


class ContainerManagerModel : IContainerManager {

public:
    ContainerManagerModel::~ContainerManagerModel()
    virtual void getContainerId()const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType()const;
    virtual void setContainerType(ContainerType);
    virtual void init();
    virtual bool isValid(float);

    ContainerManagerModel(ContainerID, Player &);
    void tick(int);
    void grantExperience(int);
    void registerInformControllerOfDestructionCallback(std::function<void ()(ContainerManagerModel&)>);
    void debitPlayerXP(int);
    void getPlayerXP()const;
    bool isCreativeMode()const;
    bool isClientSide()const;
    void getPlayer()const;
    void _addContainer(std::shared_ptr<ContainerModel>);
};
