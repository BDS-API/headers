#pragma once

class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

    virtual void containerSizeChanged(int);
    virtual void PlayerInventoryProxy::~PlayerInventoryProxy();
    virtual void PlayerInventoryProxy::~PlayerInventoryProxy();
    virtual void containerContentChanged(int);
    virtual void createTransactionContext(std::function<void ()(Container &, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void ;
    virtual void `non-virtual thunk to'PlayerInventoryProxy::containerContentChanged(int);
    virtual void `non-virtual thunk to'PlayerInventoryProxy::~PlayerInventoryProxy();
    virtual void `non-virtual thunk to'PlayerInventoryProxy::~PlayerInventoryProxy();
}
