#pragma once

class PillagerOutpostStart : StructureStart {

    virtual void ~PillagerOutpostStart();
    virtual void ~PillagerOutpostStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}