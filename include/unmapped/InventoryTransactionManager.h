#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Player"


class InventoryTransactionManager {

public:

    void _createServerSideAction(ItemStack const&, ItemStack const&);
    InventoryTransactionManager(Player &);
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
