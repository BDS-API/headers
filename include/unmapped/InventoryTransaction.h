#pragma once

#include "./InventoryAction.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include "./InventorySource.h"
#include "../bedrock/actor/Player.h"
#include <vector>
#include "./InventoryTransaction.h"


class InventoryTransaction {

public:

    ~InventoryTransaction();
    void getAllActions()const;
    InventoryTransaction(InventoryTransaction const&);
    InventoryTransaction(std::vector<InventoryAction, std::allocator<InventoryAction>> const&);
    InventoryTransaction();
    void recalculateBalance();
    void addActionToContent(InventoryAction const&);
    void verifyBalance()const;
    void forceBalanceTransaction();
    void addAction(InventoryAction const&);
    void addItemToContent(ItemStack const&, int);
    void getVerifyFunction(InventorySource const&)const;
    void getExecuteFunction(InventorySource const&)const;
    void verifyFull(Player &, bool)const;
    void _dropCreatedItems(Player &)const;
    void executeFull(Player &, bool)const;
    void getActions(InventorySource const&)const;
    void reverse()const;
    void _logTransaction(bool)const;
    void resetBalance();
    void getSourceCount()const;
};
