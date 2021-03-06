#pragma once

class MegaTreeFeature : TreeFeature {

    virtual ~MegaTreeFeature();
    virtual ~MegaTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
