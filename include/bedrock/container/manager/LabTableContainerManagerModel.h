#pragma once

#include "LevelContainerManagerModel.h"


class LabTableContainerManagerModel : LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    ~LabTableContainerManagerModel();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getItems();
    virtual void init();
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual bool isValid(float);
    virtual void broadcastChanges();
//  LabTableContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
