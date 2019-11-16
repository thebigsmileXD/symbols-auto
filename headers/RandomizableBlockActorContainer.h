#pragma once

class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

    virtual void RandomizableBlockActor~RandomizableBlockActorContainer();
    virtual void RandomizableBlockActor~RandomizableBlockActorContainer();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void BlockActor::saveItemInstanceData(CompoundTag &);
    virtual void BlockActor::saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void BlockActor::loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void BlockActor::onCustomTagLoadDone(BlockSource &);
    virtual void BlockActor::tick(BlockSource &);
    virtual void BlockActor::isFinished(void);
    virtual void BlockActor::onChanged(BlockSource &);
    virtual void BlockActor::isMovable(BlockSource &);
    virtual void BlockActor::isCustomNameSaved(void);
    virtual void BlockActor::getUpdatePacket(BlockSource &);
    virtual void BlockActor::onPlace(BlockSource &);
    virtual void BlockActor::onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void BlockActor::onMove(void);
    virtual void BlockActor::onRemoved(BlockSource &);
    virtual void BlockActor::triggerEvent(int, int);
    virtual void BlockActor::clearCache(void);
    virtual void BlockActor::onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void BlockActor::getShadowRadius(BlockSource &)const;
    virtual void BlockActor::hasAlphaLayer(void)const;
    virtual void BlockActor::getCrackEntity(BlockSource &, BlockPos const&);
    virtual void BlockActor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK10BlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK10BlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void BlockActor::getRepairCost(void)const;
    virtual void BlockActor::getOwningPiston(BlockSource &);
    virtual void BlockActor::getContainer(void);
    virtual void BlockActor::getDeletionDelayTimeSeconds(void)const;
    virtual void BlockActor::onChunkLoaded(LevelChunk &);
    virtual void BlockActor::onChunkUnloaded(LevelChunk &);
    virtual void RandomizableBlockActorstartOpen(Player &);
    virtual void RandomizableBlockActordropContents(BlockSource &, Vec3 const&, bool);
    virtual void ;
    virtual void `non-virtual thunk to'RandomizableBlockActor~RandomizableBlockActorContainer();
    virtual void `non-virtual thunk to'RandomizableBlockActor~RandomizableBlockActorContainer();
    virtual void init(void);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void RandomizableBlockActorstopOpen(Player &);
    virtual void hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void init(void);
    virtual void removeItem(int, int);
    virtual void removeAllItems(void);
    virtual void `non-virtual thunk to'RandomizableBlockActordropContents(BlockSource &, Vec3 const&, bool);
    virtual void hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void `non-virtual thunk to'RandomizableBlockActorstartOpen(Player &);
    virtual void `non-virtual thunk to'RandomizableBlockActorsetItem(int, ItemStack const&);
    virtual void getSlotCopies(void)const;
    virtual void getSlots(void)const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void getItemCount(ItemStack const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual void canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setContainerChanged(int);
    virtual void setContainerMoved(void);
    virtual void setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void hasCustomName(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
}