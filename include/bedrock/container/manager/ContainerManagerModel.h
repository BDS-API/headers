#pragma once

class ContainerManagerModel : IContainerManager {

public:
    virtual ContainerManagerModel::~ContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void init(void);
    virtual bool isValid(float);

    ContainerManagerModel(ContainerID, Player &);
    void tick(int);
    void grantExperience(int);
    void registerInformControllerOfDestructionCallback(std::function<void ()(ContainerManagerModel&)>);
    void debitPlayerXP(int);
    void getPlayerXP(void)const;
    bool isCreativeMode(void)const;
    bool isClientSide(void)const;
    void getPlayer(void)const;
    void _addContainer(std::shared_ptr<ContainerModel>);
};
