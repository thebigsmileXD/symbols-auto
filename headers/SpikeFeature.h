#pragma once

class SpikeFeature : Feature {

    virtual ~SpikeFeature();
    virtual ~SpikeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
