#pragma once

class SetItemDataFunction : LootItemFunction {

    virtual void SetItemDataFunction::~SetItemDataFunction();
    virtual void SetItemDataFunction::~SetItemDataFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
