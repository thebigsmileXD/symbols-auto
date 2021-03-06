#pragma once

class CoralHangFeature : Feature {

    virtual ~CoralHangFeature();
    virtual ~CoralHangFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
