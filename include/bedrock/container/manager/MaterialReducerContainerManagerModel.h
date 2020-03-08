#pragma once

#include "../../item/ItemStack"
#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    MaterialReducerContainerManagerModel::~MaterialReducerContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

    MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void setInput(ItemStack const&);
    void getInput();
    void setOutput(int, ContainerItemStack const&);
    void getOutput(int);
};
