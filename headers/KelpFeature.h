#pragma once

class KelpFeature : Feature {

    virtual ~KelpFeature();
    virtual ~KelpFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
