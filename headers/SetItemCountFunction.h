#pragma once

class SetItemCountFunction : LootItemFunction {

    virtual void SetItemCountFunction::~SetItemCountFunction();
    virtual void SetItemCountFunction::~SetItemCountFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
