#pragma once

#include <string>
#include "../block/unmapped/BlockSourceListener.h"


class LevelListener : BlockSourceListener {

public:
    virtual void playStreamingMusic(std::string const&, int, int, int);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void allChanged();
    virtual void onChunkUnloaded(LevelChunk &);
//  virtual void levelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
    virtual void playerListChanged();
    virtual void stopSoundEvent(std::string const&);
    virtual void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void stopAllSounds();
//  virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    virtual void onEntityAdded(Actor &);
    ~LevelListener();
    virtual void levelSoundEvent(std::string const&, Vec3 const&, float, float);
//  virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
//  virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    virtual void playMusic(std::string const&, Vec3 const&, float, float);
    LevelListener();
};
