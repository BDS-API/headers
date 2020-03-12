#pragma once

#include "../../item/ItemStack.h"
#include "ContainerManagerModel.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    virtual void getSlot(int);
    virtual void getItems();
    virtual void broadcastChanges();
    virtual void setData(int, int);
    virtual void init();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual bool isValid(float);
    ~MaterialReducerContainerManagerModel();
//  MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void setInput(ItemStack const&);
    void getInput();
    void setOutput(int, ContainerItemStack const&);
    void getOutput(int);
};
