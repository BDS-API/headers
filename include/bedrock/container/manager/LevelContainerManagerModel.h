#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "ContainerManagerModel.h"


class LevelContainerManagerModel : ContainerManagerModel {

public:
    ~LevelContainerManagerModel(); // _ZN26LevelContainerManagerModelD2Ev
    virtual void getItems(); // _ZN26LevelContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN26LevelContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN26LevelContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN26LevelContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN26LevelContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN26LevelContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN26LevelContainerManagerModel7isValidEf
//  LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition // _ZN26LevelContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos14BlockActorType
//  LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition // _ZN26LevelContainerManagerModelC2E11ContainerIDR6Player13ActorUniqueID
    void getEntityUniqueID()const; // _ZNK26LevelContainerManagerModel17getEntityUniqueIDEv
    std::string getEntityName()const; // _ZNK26LevelContainerManagerModel13getEntityNameB5cxx11Ev
    void setEntityUniqueID(ActorUniqueID); // _ZN26LevelContainerManagerModel17setEntityUniqueIDE13ActorUniqueID
    void getBlockPos()const; // _ZNK26LevelContainerManagerModel11getBlockPosEv
    void setBlockPos(BlockPos const&); // _ZN26LevelContainerManagerModel11setBlockPosERK8BlockPos
    void _getBlockEntity(); // _ZN26LevelContainerManagerModel15_getBlockEntityEv
    void _getEntity(); // _ZN26LevelContainerManagerModel10_getEntityEv
    void _getContainer(); // _ZN26LevelContainerManagerModel13_getContainerEv
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN26LevelContainerManagerModel19_onBlockSlotChangedEiRK9ItemStackS2_
};
