#pragma once

class LootingEnchantFunction : LootItemFunction {

    virtual void LootingEnchantFunction::~LootingEnchantFunction();
    virtual void LootingEnchantFunction::~LootingEnchantFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
