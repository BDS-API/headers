#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    virtual ~MaterialReducerContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

//  MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void setInput(ItemStack const&);
    void getInput();
    void setOutput(int, ContainerItemStack const&);
    void getOutput(int);
};
