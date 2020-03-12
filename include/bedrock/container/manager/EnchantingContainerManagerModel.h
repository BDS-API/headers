#pragma once

#include "ContainerManagerModel.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class EnchantingContainerManagerModel : ContainerManagerModel {

public:
    static long NUM_OPTIONS;

    virtual void setData(int, int);
    virtual void getItems();
    virtual void init();
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void broadcastChanges();
    ~EnchantingContainerManagerModel();
    void getEnchants()const;
    void recalculateOptions();
    void _getEnchantmentCost(ItemInstance const&);
    void getShouldBookBeOpen()const;
    void getEnchantmentCosts()const;
    void getLapisCount();
    std::string getEnchantNames()const;
    void getNewEnchantmentSeed();
    bool isTableValid(float);
    void setShouldBookBeOpen(bool);
//  EnchantingContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void clearOptions();
};
