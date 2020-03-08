#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"


class LabTableContainerManagerModel : LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    virtual LabTableContainerManagerModel::~LabTableContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

    LabTableContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
