#pragma once



class InventoryTransactionManager {

public:
    void _createServerSideAction(ItemStack const&, ItemStack const&); // _ZN27InventoryTransactionManager23_createServerSideActionERK9ItemStackS2_
    InventoryTransactionManager(Player &); // _ZN27InventoryTransactionManagerC2ER6Player
    ~InventoryTransactionManager(); // _ZN27InventoryTransactionManagerD2Ev
    void getCurrentTransaction()const; // _ZNK27InventoryTransactionManager21getCurrentTransactionEv
    void reset(); // _ZN27InventoryTransactionManager5resetEv
    void resetExpectedActions(); // _ZN27InventoryTransactionManager20resetExpectedActionsEv
    void addExpectedAction(InventoryAction const&); // _ZN27InventoryTransactionManager17addExpectedActionERK15InventoryAction
    void addAction(InventoryAction const&); // _ZN27InventoryTransactionManager9addActionERK15InventoryAction
    void checkActionExpected(InventoryAction const&); // _ZN27InventoryTransactionManager19checkActionExpectedERK15InventoryAction
    void getSourceCount()const; // _ZNK27InventoryTransactionManager14getSourceCountEv
    void forceBalanceTransaction(); // _ZN27InventoryTransactionManager23forceBalanceTransactionEv
    void _logExpectedActions()const; // _ZNK27InventoryTransactionManager19_logExpectedActionsEv
};
