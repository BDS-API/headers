#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../../item/ItemStack"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    virtual MaterialReducerContainerManagerModel::~MaterialReducerContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual bool isValid(float);

    MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void setInput(ItemStack const&);
    void getInput(void);
    void setOutput(int, ContainerItemStack const&);
    void getOutput(int);
};
