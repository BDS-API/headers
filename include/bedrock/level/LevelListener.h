#pragma once

#include "LevelChunk.h"
#include <string>
#include "../../unmapped/TextureUVCoordinateSet.h"
#include "../util/BlockPos.h"
#include "../../unmapped/HashedString.h"
#include "../actor/Actor.h"
#include "../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/MolangVariableMap.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "../../unmapped/Block.h"
#include "../block/unmapped/BlockSourceListener.h"
#include "../block/unmapped/BlockSource.h"


class LevelListener : BlockSourceListener {

public:
    virtual void playerListChanged();
    virtual void onEntityRemoved(Actor &);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
    virtual void onChunkLoaded(LevelChunk &);
    virtual void playMusic(std::string const&, Vec3 const&, float, float);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
//  virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
//  virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
//  virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
//  virtual void levelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    virtual void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    ~LevelListener();
    virtual void allChanged();
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void levelSoundEvent(std::string const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::string const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void stopAllSounds();
    virtual void stopSoundEvent(std::string const&);
    LevelListener();
};
