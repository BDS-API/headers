#pragma once

class InventoryTransactionManager {

public:

    void _createServerSideAction(ItemStack const&, ItemStack const&);
    void InventoryTransactionManager(Player &);
    void getCurrentTransaction(void)const;
    void reset(void);
    void resetExpectedActions(void);
    void addExpectedAction(InventoryAction const&);
    void addAction(InventoryAction const&);
    void checkActionExpected(InventoryAction const&);
    void getSourceCount(void)const;
    void forceBalanceTransaction(void);
    void _logExpectedActions(void)const;
};
