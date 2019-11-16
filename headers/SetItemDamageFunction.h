#pragma once

class SetItemDamageFunction : LootItemFunction {

    virtual void SetItemDamageFunction::~SetItemDamageFunction();
    virtual void SetItemDamageFunction::~SetItemDamageFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
