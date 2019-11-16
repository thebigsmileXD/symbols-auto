#pragma once

class TheEndDimension : Dimension {

    virtual void TheEnd~TheEndDimension();
    virtual void TheEnd~TheEndDimension();
    virtual void BlockSourceListener::onSourceCreated(BlockSource &);
    virtual void BlockSourceListener::onSourceDestroyed(BlockSource &);
    virtual void BlockSourceListener::onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void BlockSourceListener::onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void BlockSourceListener::onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void BlockSourceListener::onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void BlockSourceListener::onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void LevelListener::allChanged(void);
    virtual void LevelListener::addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    virtual void LevelListener::sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void LevelListener::addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void LevelListener::addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void LevelListener::addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void LevelListener::addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    virtual void LevelListener::playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void LevelListener::playStreamingMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int);
    virtual void LevelListener::onEntityAdded(Actor &);
    virtual void LevelListener::onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void LevelListener::onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void LevelListener::onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void LevelListener::levelEvent(LevelEvent, Vec3 const&, int);
    virtual void LevelListener::levelEvent(LevelEvent, CompoundTag const&);
    virtual void LevelListener::levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    virtual void LevelListener::levelSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void LevelListener::stopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void LevelListener::stopAllSounds(void);
    virtual void LevelListener::takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    virtual void LevelListener::playerListChanged(void);
    virtual void TheEndinit(void);
    virtual void TheEndtick(void);
    virtual void tickRedstone(void);
    virtual void TheEndcreateGenerator(void);
    virtual void updateLightRamp(void);
    virtual void TheEndisNaturalDimension(void)const;
    virtual void TheEndisValidSpawn(int, int)const;
    virtual void TheEndgetFogColor(float)const;
    virtual void getMaxFogEnd(void)const;
    virtual void getMaxFogStart(void)const;
    virtual void TheEndisFoggyAt(int, int)const;
    virtual void TheEndgetCloudHeight(void)const;
    virtual void TheEndgetDefaultBiome(void)const;
    virtual void TheEndmayRespawn(void)const;
    virtual void TheEndhasGround(void)const;
    virtual void TheEndgetSpawnPos(void)const;
    virtual void TheEndgetSpawnYPosition(void)const;
    virtual void hasBedrockFog(void);
    virtual void getClearColorScale(void);
    virtual void showSky(void)const;
    virtual void TheEndisDay(void)const;
    virtual void TheEndgetSunIntensity(float, Vec3 const&, float)const;
    virtual void TheEndtranslatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void TheEnddeserialize(CompoundTag const&);
    virtual void TheEndserialize(CompoundTag &)const;
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void TheEndstartLeaveGame(void);
    virtual void TheEndgetTimeOfDay(int, float)const;
    virtual void ;
    virtual void `non-virtual thunk to'TheEnd~TheEndDimension();
    virtual void `non-virtual thunk to'TheEnd~TheEndDimension();
    virtual void `non-virtual thunk to'TheEnddeserialize(CompoundTag const&);
    virtual void `non-virtual thunk to'TheEndserialize(CompoundTag &)const;
}