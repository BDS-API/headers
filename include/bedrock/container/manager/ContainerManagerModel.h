#pragma once

#include <string>
#include <memory>
#include <functional>
#include "IContainerManager.h"


class ContainerManagerModel : IContainerManager {

public:
    ~ContainerManagerModel(); // _ZN21ContainerManagerModelD2Ev
    virtual void getContainerId()const; // _ZNK21ContainerManagerModel14getContainerIdEv
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition // _ZN21ContainerManagerModel14setContainerIdE11ContainerID
    virtual void getContainerType()const; // _ZNK21ContainerManagerModel16getContainerTypeEv
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition // _ZN21ContainerManagerModel16setContainerTypeE13ContainerType
    virtual void init(); // _ZN21ContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN21ContainerManagerModel7isValidEf
//  ContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition // _ZN21ContainerManagerModelC2E11ContainerIDR6Player
    void tick(int); // _ZN21ContainerManagerModel4tickEi
    void grantExperience(int); // _ZN21ContainerManagerModel15grantExperienceEi
    std::string getBlockName(BlockPos const&)const; // _ZNK21ContainerManagerModel12getBlockNameB5cxx11ERK8BlockPos
    std::string getEntityName(ActorUniqueID const&)const; // _ZNK21ContainerManagerModel13getEntityNameB5cxx11ERK13ActorUniqueID
    void registerInformControllerOfDestructionCallback(std::function<void (ContainerManagerModel &)>); // _ZN21ContainerManagerModel45registerInformControllerOfDestructionCallbackESt8functionIFvRS_EE
    void debitPlayerXP(int); // _ZN21ContainerManagerModel13debitPlayerXPEi
    void getPlayerXP()const; // _ZNK21ContainerManagerModel11getPlayerXPEv
    bool isCreativeMode()const; // _ZNK21ContainerManagerModel14isCreativeModeEv
    bool isClientSide()const; // _ZNK21ContainerManagerModel12isClientSideEv
    std::string getContainers(); // _ZN21ContainerManagerModel13getContainersB5cxx11Ev
    void getPlayer()const; // _ZNK21ContainerManagerModel9getPlayerEv
    void _addContainer(std::shared_ptr<ContainerModel>); // _ZN21ContainerManagerModel13_addContainerESt10shared_ptrI14ContainerModelE
};
