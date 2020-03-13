#pragma once

#include <string>
#include <functional>


class Container {

public:
    static std::string containerTypeMap;

    ~Container(); // _ZN9ContainerD2Ev
    virtual void init(); // _ZN9Container4initEv
    virtual void addContentChangeListener(ContainerContentChangeListener *); // _ZN9Container24addContentChangeListenerEP30ContainerContentChangeListener
    virtual void removeContentChangeListener(ContainerContentChangeListener *); // _ZN9Container27removeContentChangeListenerEP30ContainerContentChangeListener
    virtual bool hasRoomForItem(ItemStack const&); // _ZN9Container14hasRoomForItemERK9ItemStack
    virtual void addItem(ItemStack &); // _ZN9Container7addItemER9ItemStack
    virtual void addItemToFirstEmptySlot(ItemStack &); // _ZN9Container23addItemToFirstEmptySlotER9ItemStack
    virtual void removeItem(int, int); // _ZN9Container10removeItemEii
    virtual void removeAllItems(); // _ZN9Container14removeAllItemsEv
    virtual void dropContents(BlockSource &, Vec3 const&, bool); // _ZN9Container12dropContentsER11BlockSourceRK4Vec3b
    virtual void getSlotCopies()const; // _ZNK9Container13getSlotCopiesEv
    virtual void getSlots()const; // _ZNK9Container8getSlotsEv
    virtual void getItemCount(ItemDescriptor const&); // _ZN9Container12getItemCountERK14ItemDescriptor
    virtual void getItemCount(ItemStack const&); // _ZN9Container12getItemCountERK9ItemStack
    virtual void findFirstSlotForItem(ItemStack const&)const; // _ZNK9Container20findFirstSlotForItemERK9ItemStack
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK9Container13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK9Container14canPullOutItemER11BlockSourceiiRK12ItemInstance
    virtual void setContainerChanged(int); // _ZN9Container19setContainerChangedEi
    virtual void setContainerMoved(); // _ZN9Container17setContainerMovedEv
    virtual void setCustomName(std::string const&); // _ZN9Container13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool hasCustomName()const; // _ZNK9Container13hasCustomNameEv
    virtual void readAdditionalSaveData(CompoundTag const&); // _ZN9Container22readAdditionalSaveDataERK11CompoundTag
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9Container21addAdditionalSaveDataER11CompoundTag
    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>); // _ZN9Container24createTransactionContextESt8functionIFvRS_iRK9ItemStackS4_EES0_IFvvEE
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&); // _ZN9Container24triggerTransactionChangeEiRK9ItemStackS2_
//  Container(ContainerType); //TODO: incomplete function definition // _ZN9ContainerC2E13ContainerType
//  Container(ContainerType, std::string const&, bool); //TODO: incomplete function definition // _ZN9ContainerC2E13ContainerTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void addSizeChangeListener(ContainerSizeChangeListener *); // _ZN9Container21addSizeChangeListenerEP27ContainerSizeChangeListener
    void removeSizeChangeListener(ContainerSizeChangeListener *); // _ZN9Container24removeSizeChangeListenerEP27ContainerSizeChangeListener
    void getContainerType(); // _ZN9Container16getContainerTypeEv
    void getRedstoneSignalFromContainer(); // _ZN9Container30getRedstoneSignalFromContainerEv
    void setSizeChanged(int); // _ZN9Container14setSizeChangedEi
//  std::string getContainerTypeName(ContainerType); //TODO: incomplete function definition // _ZN9Container20getContainerTypeNameB5cxx11E13ContainerType
    void getContainerTypeId(std::string const&); // _ZN9Container18getContainerTypeIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
