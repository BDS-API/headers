#pragma once

#include "../../util/BlockPos.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"
#include "../../../unmapped/ContainerItemStack.h"


class LabTableContainerManagerModel : LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    virtual void getItems();
    ~LabTableContainerManagerModel();
    virtual void setData(int, int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual void init();
//  LabTableContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
