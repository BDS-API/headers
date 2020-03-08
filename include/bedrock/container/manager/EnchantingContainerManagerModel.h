#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"


class EnchantingContainerManagerModel : ContainerManagerModel {

public:
    static long NUM_OPTIONS;

    virtual EnchantingContainerManagerModel::~EnchantingContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

    EnchantingContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void recalculateOptions();
    bool isTableValid(float);
    void getLapisCount();
    void getNewEnchantmentSeed();
    void clearOptions();
    void _getEnchantmentCost(ItemInstance const&);
    void getShouldBookBeOpen()const;
    void setShouldBookBeOpen(bool);
    void getEnchantmentCosts()const;
    void getEnchants()const;
};
