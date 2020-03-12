#pragma once

#include "../bedrock/actor/Player.h"
#include "InventorySource.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "InventoryAction.h"


class InventoryTransaction {

public:
    void verifyBalance()const;
    void recalculateBalance();
    void verifyFull(Player &, bool)const;
    void getVerifyFunction(InventorySource const&)const;
    void getAllActions()const;
    void getExecuteFunction(InventorySource const&)const;
    InventoryTransaction();
    void getActions(InventorySource const&)const;
    InventoryTransaction(InventoryTransaction const&);
    void _dropCreatedItems(Player &)const;
    void _logTransaction(bool)const;
    void resetBalance();
    void addActionToContent(InventoryAction const&);
    void addItemToContent(ItemStack const&, int);
    void reverse()const;
    void executeFull(Player &, bool)const;
    void forceBalanceTransaction();
    ~InventoryTransaction();
    void addAction(InventoryAction const&);
    void getSourceCount()const;
    InventoryTransaction(std::vector<InventoryAction> const&);
};
