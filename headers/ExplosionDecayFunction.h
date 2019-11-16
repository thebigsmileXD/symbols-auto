#pragma once

class ExplosionDecayFunction : LootItemFunction {

    virtual void ~ExplosionDecayFunction();
    virtual void ~ExplosionDecayFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}