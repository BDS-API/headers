#pragma once



class InventoryTransactionManager {

public:
    void forceBalanceTransaction();
    void addAction(InventoryAction const&);
    void resetExpectedActions();
    void getSourceCount()const;
    void reset();
    ~InventoryTransactionManager();
    void getCurrentTransaction()const;
    void addExpectedAction(InventoryAction const&);
    void _createServerSideAction(ItemStack const&, ItemStack const&);
    void checkActionExpected(InventoryAction const&);
    InventoryTransactionManager(Player &);
    void _logExpectedActions()const;
};
