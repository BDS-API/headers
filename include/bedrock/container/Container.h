#pragma once

#include <string>
#include <functional>


class Container {

public:
    static std::string containerTypeMap;

    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void removeAllItems();
    virtual void removeItem(int, int);
    virtual void getSlotCopies()const;
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void setContainerChanged(int);
    ~Container();
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual void addItem(ItemStack &);
    virtual void setContainerMoved();
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual bool hasRoomForItem(ItemStack const&);
    virtual void getItemCount(ItemStack const&);
    virtual void setCustomName(std::string const&);
    virtual void init();
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getItemCount(ItemDescriptor const&);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>);
    virtual void getSlots()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool hasCustomName()const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    void addSizeChangeListener(ContainerSizeChangeListener *);
//  std::string getContainerTypeName(ContainerType); //TODO: incomplete function definition
    void getRedstoneSignalFromContainer();
    void setSizeChanged(int);
    void getContainerTypeId(std::string const&);
    void getContainerType();
//  Container(ContainerType, std::string const&, bool); //TODO: incomplete function definition
//  Container(ContainerType); //TODO: incomplete function definition
    void removeSizeChangeListener(ContainerSizeChangeListener *);
};
