#pragma once

#include <string>
#include "ContainerManagerModel.h"


class EnchantingContainerManagerModel : ContainerManagerModel {

public:
    static long NUM_OPTIONS;

    ~EnchantingContainerManagerModel(); // _ZN31EnchantingContainerManagerModelD2Ev
    virtual void getItems(); // _ZN31EnchantingContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN31EnchantingContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN31EnchantingContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN31EnchantingContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN31EnchantingContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN31EnchantingContainerManagerModel4initEv
//  EnchantingContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN31EnchantingContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    void recalculateOptions(); // _ZN31EnchantingContainerManagerModel18recalculateOptionsEv
    bool isTableValid(float); // _ZN31EnchantingContainerManagerModel12isTableValidEf
    void getLapisCount(); // _ZN31EnchantingContainerManagerModel13getLapisCountEv
    void getNewEnchantmentSeed(); // _ZN31EnchantingContainerManagerModel21getNewEnchantmentSeedEv
    void clearOptions(); // _ZN31EnchantingContainerManagerModel12clearOptionsEv
    void _getEnchantmentCost(ItemInstance const&); // _ZN31EnchantingContainerManagerModel19_getEnchantmentCostERK12ItemInstance
    void getShouldBookBeOpen()const; // _ZNK31EnchantingContainerManagerModel19getShouldBookBeOpenEv
    void setShouldBookBeOpen(bool); // _ZN31EnchantingContainerManagerModel19setShouldBookBeOpenEb
    void getEnchantmentCosts()const; // _ZNK31EnchantingContainerManagerModel19getEnchantmentCostsEv
    void getEnchants()const; // _ZNK31EnchantingContainerManagerModel11getEnchantsEv
    std::string getEnchantNames()const; // _ZNK31EnchantingContainerManagerModel15getEnchantNamesB5cxx11Ev
};
