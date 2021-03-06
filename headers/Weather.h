#pragma once

class Weather : LevelListener {

    virtual ~Weather();
    virtual ~Weather();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void allChanged(void);
    virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    virtual void playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void levelEvent(LevelEvent, Vec3 const&, int);
    virtual void levelEvent(LevelEvent, CompoundTag const&);
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    virtual void levelSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void stopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void stopAllSounds(void);
    virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    virtual void playerListChanged(void);
}
