#pragma once

class BeaconBlockActor : BlockActor, Container {

    virtual void Beacon~BeaconBlockActor();
    virtual void Beacon~BeaconBlockActor();
    virtual void Beaconload(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void Beaconsave(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void Beacontick(BlockSource &);
    virtual void isFinished(void);
    virtual void onChanged(BlockSource &);
    virtual void isMovable(BlockSource &);
    virtual void isCustomNameSaved(void);
    virtual void BeacongetUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void BeacononUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void BeaconhasAlphaLayer(void)const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK10BlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK16BeaconBlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void getRepairCost(void)const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer(void);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void BeacongetItem(int)const;
    virtual void BeaconsetItem(int, ItemStack const&);
    virtual void BeaconremoveItem(int, int);
    virtual void BeacongetContainerSize(void)const;
    virtual void BeacongetMaxStackSize(void)const;
    virtual void BeaconstartOpen(Player &);
    virtual void BeaconstopOpen(Player &);
    virtual void ;
    virtual void `non-virtual thunk to'Beacon~BeaconBlockActor();
    virtual void `non-virtual thunk to'Beacon~BeaconBlockActor();
    virtual void init(void);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void `non-virtual thunk to'BeacongetItem(int)const;
    virtual void hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void `non-virtual thunk to'BeaconsetItem(int, ItemStack const&);
    virtual void `non-virtual thunk to'BeaconremoveItem(int, int);
    virtual void removeAllItems(void);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void `non-virtual thunk to'BeacongetContainerSize(void)const;
    virtual void `non-virtual thunk to'BeacongetMaxStackSize(void)const;
    virtual void `non-virtual thunk to'BeaconstartOpen(Player &);
    virtual void `non-virtual thunk to'BeaconstopOpen(Player &);
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