#pragma once

#include "../bedrock/actor/Player.h"
#include "InventoryAction.h"
#include "../bedrock/item/ItemStack.h"


class InventoryTransactionManager {

public:
    void getCurrentTransaction()const;
    void forceBalanceTransaction();
    void addAction(InventoryAction const&);
    void reset();
    void addExpectedAction(InventoryAction const&);
    void checkActionExpected(InventoryAction const&);
    void getSourceCount()const;
    void resetExpectedActions();
    InventoryTransactionManager(Player &);
    void _logExpectedActions()const;
    void _createServerSideAction(ItemStack const&, ItemStack const&);
    ~InventoryTransactionManager();
};
