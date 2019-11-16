#pragma once

class SmeltItemFunction : LootItemFunction {

    virtual void SmeltItemFunction::~SmeltItemFunction();
    virtual void SmeltItemFunction::~SmeltItemFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
