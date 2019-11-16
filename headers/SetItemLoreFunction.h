#pragma once

class SetItemLoreFunction : LootItemFunction {

    virtual void SetItemLoreFunction::~SetItemLoreFunction();
    virtual void SetItemLoreFunction::~SetItemLoreFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
