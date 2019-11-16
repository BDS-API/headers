#pragma once

class RandomAuxValueFunction : LootItemFunction {

    virtual void RandomAuxValueFunction::~RandomAuxValueFunction();
    virtual void RandomAuxValueFunction::~RandomAuxValueFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
