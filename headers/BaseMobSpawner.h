#pragma once

class BaseMobSpawner {

    virtual void ~BaseMobSpawner();
    virtual void ~BaseMobSpawner();
    virtual void tick(BlockSource &);
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);
    virtual void getPos(void);
}