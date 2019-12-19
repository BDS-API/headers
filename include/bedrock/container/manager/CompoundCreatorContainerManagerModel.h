#pragma once

class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    virtual CompoundCreatorContainerManagerModel::~CompoundCreatorContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual bool isValid(float);

    CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void getInputItems(void);
    void setOutput(ContainerItemStack const&);
    void getOutput(void);
};
