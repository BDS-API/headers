#pragma once

#include "../bedrock/item/ItemStack.h"
#include "./InventoryAction.h"
#include "../bedrock/actor/Player.h"


class InventoryTransactionManager {

public:

    void _createServerSideAction(ItemStack const&, ItemStack const&);
    InventoryTransactionManager(Player &);
    ~InventoryTransactionManager();
    void getCurrentTransaction()const;
    void reset();
    void resetExpectedActions();
    void addExpectedAction(InventoryAction const&);
    void addAction(InventoryAction const&);
    void checkActionExpected(InventoryAction const&);
    void getSourceCount()const;
    void forceBalanceTransaction();
    void _logExpectedActions()const;
};
