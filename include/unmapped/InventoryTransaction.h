#pragma once

#include <vector>


class InventoryTransaction {

public:
    ~InventoryTransaction(); // _ZN20InventoryTransactionD2Ev
    void getAllActions()const; // _ZNK20InventoryTransaction13getAllActionsEv
    InventoryTransaction(InventoryTransaction const&); // _ZN20InventoryTransactionC2ERKS_
    InventoryTransaction(std::vector<InventoryAction> const&); // _ZN20InventoryTransactionC2ERKSt6vectorI15InventoryActionSaIS1_EE
    InventoryTransaction(); // _ZN20InventoryTransactionC2Ev
    void recalculateBalance(); // _ZN20InventoryTransaction18recalculateBalanceEv
    void addActionToContent(InventoryAction const&); // _ZN20InventoryTransaction18addActionToContentERK15InventoryAction
    void verifyBalance()const; // _ZNK20InventoryTransaction13verifyBalanceEv
    void forceBalanceTransaction(); // _ZN20InventoryTransaction23forceBalanceTransactionEv
    void addAction(InventoryAction const&); // _ZN20InventoryTransaction9addActionERK15InventoryAction
    void addItemToContent(ItemStack const&, int); // _ZN20InventoryTransaction16addItemToContentERK9ItemStacki
    void getVerifyFunction(InventorySource const&)const; // _ZNK20InventoryTransaction17getVerifyFunctionERK15InventorySource
    void getExecuteFunction(InventorySource const&)const; // _ZNK20InventoryTransaction18getExecuteFunctionERK15InventorySource
    void verifyFull(Player &, bool)const; // _ZNK20InventoryTransaction10verifyFullER6Playerb
    void _dropCreatedItems(Player &)const; // _ZNK20InventoryTransaction17_dropCreatedItemsER6Player
    void executeFull(Player &, bool)const; // _ZNK20InventoryTransaction11executeFullER6Playerb
    void getActions(InventorySource const&)const; // _ZNK20InventoryTransaction10getActionsERK15InventorySource
    void reverse()const; // _ZNK20InventoryTransaction7reverseEv
    void _logTransaction(bool)const; // _ZNK20InventoryTransaction15_logTransactionEb
    void resetBalance(); // _ZN20InventoryTransaction12resetBalanceEv
    void getSourceCount()const; // _ZNK20InventoryTransaction14getSourceCountEv
};
