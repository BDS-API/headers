#pragma once

class InventoryTransaction {

public:

    void getAllActions(void)const;
    void InventoryTransaction(InventoryTransaction const&);
    void InventoryTransaction(std::vector<InventoryAction, std::allocator<InventoryAction>> const&);
    void InventoryTransaction(void);
    void recalculateBalance(void);
    void addActionToContent(InventoryAction const&);
    void verifyBalance(void)const;
    void forceBalanceTransaction(void);
    void addAction(InventoryAction const&);
    void addItemToContent(ItemStack const&, int);
    void getVerifyFunction(InventorySource const&)const;
    void getExecuteFunction(InventorySource const&)const;
    void verifyFull(Player &, bool)const;
    void executeFull(Player &, bool)const;
    void getActions(InventorySource const&)const;
    void reverse(void)const;
    void _logTransaction(bool)const;
    void resetBalance(void);
    void getSourceCount(void)const;
};
