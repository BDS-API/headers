#pragma once

#include <string>
#include "../block/unmapped/BlockSourceListener.h"


class LevelListener : BlockSourceListener {

public:
    ~LevelListener(); // _ZN13LevelListenerD2Ev
    virtual void allChanged(); // _ZN13LevelListener10allChangedEv
//  virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition // _ZN13LevelListener11addParticleE12ParticleTypeRK4Vec3S3_iPK11CompoundTagb
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition // _ZN13LevelListener24sendServerLegacyParticleE12ParticleTypeRK4Vec3S3_i
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&); // _ZN13LevelListener17addParticleEffectERK12HashedStringRK4Vec3RK17MolangVariableMap
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&); // _ZN13LevelListener17addParticleEffectERK12HashedStringRK5ActorS2_RK4Vec3RK17MolangVariableMap
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float); // _ZN13LevelListener24addTerrainParticleEffectERK8BlockPosRK5BlockRK4Vec3fff
    virtual void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float); // _ZN13LevelListener21addTerrainSlideEffectERK8BlockPosRK5BlockRK4Vec3fff
//  virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition // _ZN13LevelListener29addBreakingItemParticleEffectERK4Vec312ParticleTypeRK22TextureUVCoordinateSetb
    virtual void playMusic(std::string const&, Vec3 const&, float, float); // _ZN13LevelListener9playMusicERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3ff
    virtual void playStreamingMusic(std::string const&, int, int, int); // _ZN13LevelListener18playStreamingMusicERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiii
    virtual void onEntityAdded(Actor &); // _ZN13LevelListener13onEntityAddedER5Actor
    virtual void onEntityRemoved(Actor &); // _ZN13LevelListener15onEntityRemovedER5Actor
    virtual void onNewChunk(BlockSource &, LevelChunk &); // _ZN13LevelListener10onNewChunkER11BlockSourceR10LevelChunk
    virtual void onNewChunkFor(Player &, LevelChunk &); // _ZN13LevelListener13onNewChunkForER6PlayerR10LevelChunk
    virtual void onChunkLoaded(LevelChunk &); // _ZN13LevelListener13onChunkLoadedER10LevelChunk
    virtual void onChunkUnloaded(LevelChunk &); // _ZN13LevelListener15onChunkUnloadedER10LevelChunk
    virtual void onLevelDestruction(std::string const&); // _ZN13LevelListener18onLevelDestructionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition // _ZN13LevelListener10levelEventE10LevelEventRK4Vec3i
//  virtual void levelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition // _ZN13LevelListener10levelEventE10LevelEventRK11CompoundTag
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN13LevelListener15levelSoundEventE15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
    virtual void levelSoundEvent(std::string const&, Vec3 const&, float, float); // _ZN13LevelListener15levelSoundEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3ff
    virtual void stopSoundEvent(std::string const&); // _ZN13LevelListener14stopSoundEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void stopAllSounds(); // _ZN13LevelListener13stopAllSoundsEv
//  virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition // _ZN13LevelListener11takePictureERN2cg11ImageBufferEP5ActorS4_R17ScreenshotOptions
    virtual void playerListChanged(); // _ZN13LevelListener17playerListChangedEv
    LevelListener(); // _ZN13LevelListenerC2Ev
};
