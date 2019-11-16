#pragma once

class SetSpawnEggFunction : LootItemFunction {

    virtual void SetSpawnEggFunction::~SetSpawnEggFunction();
    virtual void SetSpawnEggFunction::~SetSpawnEggFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
