#pragma once

class SetBookContentsFunction : LootItemFunction {

    virtual void SetBookContentsFunction::~SetBookContentsFunction();
    virtual void SetBookContentsFunction::~SetBookContentsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
