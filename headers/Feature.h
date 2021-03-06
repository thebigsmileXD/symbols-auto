#pragma once

class Feature : IFeature {

    virtual ~Feature();
    virtual ~Feature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
