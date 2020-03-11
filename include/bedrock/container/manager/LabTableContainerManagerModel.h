#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./LevelContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class LabTableContainerManagerModel : LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    virtual ~LabTableContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

//  LabTableContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
