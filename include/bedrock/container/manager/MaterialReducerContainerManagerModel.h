#pragma once

#include "ContainerManagerModel.h"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getItems();
    virtual void init();
    virtual void getSlot(int);
    virtual void broadcastChanges();
    virtual void setData(int, int);
    ~MaterialReducerContainerManagerModel();
    virtual bool isValid(float);
//  MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void setInput(ItemStack const&);
    void getOutput(int);
    void setOutput(int, ContainerItemStack const&);
    void getInput();
};
