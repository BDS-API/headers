#pragma once

class LabTableContainerManagerModel : LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    virtual LabTableContainerManagerModel::~LabTableContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual bool isValid(float);

    LabTableContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
