#pragma once

class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~HorseContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init(void);

    void HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
    void getEntity(void)const;
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
};
