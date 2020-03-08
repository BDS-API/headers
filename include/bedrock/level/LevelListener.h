#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/BlockSourceListener"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../nbt/CompoundTag"
#include "../../unmapped/HashedString"
#include "../../unmapped/Vec3"


class LevelListener : BlockSourceListener {

public:
    virtual LevelListener::~LevelListener();
    virtual void allChanged(void);
    virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    virtual void playMusic(std::string const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::string const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
    virtual void levelEvent(LevelEvent, Vec3 const&, int);
    virtual void levelEvent(LevelEvent, CompoundTag const&);
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    virtual void levelSoundEvent(std::string const&, Vec3 const&, float, float);
    virtual void stopSoundEvent(std::string const&);
    virtual void stopAllSounds(void);
    virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    virtual void playerListChanged(void);

    LevelListener(void);
};
