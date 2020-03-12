#pragma once

#include <string>
#include "ContainerManagerModel.h"


class EnchantingContainerManagerModel : ContainerManagerModel {

public:
    static long NUM_OPTIONS;

    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void broadcastChanges();
    virtual void init();
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual void getItems();
    ~EnchantingContainerManagerModel();
    void getEnchantmentCosts()const;
    bool isTableValid(float);
    void getLapisCount();
//  EnchantingContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void clearOptions();
    void getEnchants()const;
    void setShouldBookBeOpen(bool);
    void getNewEnchantmentSeed();
    void getShouldBookBeOpen()const;
    void recalculateOptions();
    void _getEnchantmentCost(ItemInstance const&);
    std::string getEnchantNames()const;
};
