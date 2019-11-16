#pragma once

class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

    virtual void containerSizeChanged(int);
    virtual void ~PlayerInventoryProxy();
    virtual void ~PlayerInventoryProxy();
    virtual void containerContentChanged(int);
    virtual void createTransactionContext(std::function<void ()(Container &, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void ;
    virtual void `non-virtual thunk to'containerContentChanged(int);
    virtual void `non-virtual thunk to'~PlayerInventoryProxy();
    virtual void `non-virtual thunk to'~PlayerInventoryProxy();
}
