#pragma once

class EnchantWithLevelsFunction : LootItemFunction {

    virtual void EnchantWithLevelsFunction::~EnchantWithLevelsFunction();
    virtual void EnchantWithLevelsFunction::~EnchantWithLevelsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
