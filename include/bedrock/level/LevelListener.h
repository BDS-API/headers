#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/TextureUVCoordinateSet.h"
#include "../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/MolangVariableMap.h"
#include "../block/unmapped/BlockSourceListener.h"
#include "../util/BlockPos.h"
#include "./LevelChunk.h"
#include "../../unmapped/HashedString.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class LevelListener : BlockSourceListener {

public:
    virtual ~LevelListener();
    virtual void allChanged();
//  virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
//  virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    virtual void playMusic(std::string const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::string const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
//  virtual void levelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    virtual void levelSoundEvent(std::string const&, Vec3 const&, float, float);
    virtual void stopSoundEvent(std::string const&);
    virtual void stopAllSounds();
//  virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
    virtual void playerListChanged();

    LevelListener();
};
