#pragma once

class EnchantRandomlyFunction : LootItemFunction {

    virtual void ~EnchantRandomlyFunction();
    virtual void ~EnchantRandomlyFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}