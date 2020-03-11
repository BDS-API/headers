#pragma once

#include "./LevelSettings.h"
#include "../../unmapped/ContentIdentity.h"
#include "./LevelData.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/PackIdVersion.h"
#include "../nbt/CompoundTag.h"
#include "../util/Tick.h"
#include "../../unmapped/GameRuleId.h"
#include "../util/BlockPos.h"
#include "../../raknet/BitStream.h"
#include <string>


class LevelData {

public:

    bool hasSpawnPos()const;
    void getLastLoadedWithVersion()const;
    LevelData();
//  LevelData(LevelSettings const&, std::string const&, GeneratorType, BlockPos const&, bool, EducationEditionOffer, float, float); //TODO: incomplete function definition
    void setSpawnPos(BlockPos const&);
    LevelData(CompoundTag const&);
    void getTagData(CompoundTag const&);
    LevelData(LevelData &&);
    ~LevelData();
//  void v1_read(RakNet::BitStream &, StorageVersion); //TODO: incomplete function definition
    void createTag()const;
    void setTagData(CompoundTag &)const;
    void getFlatWorldGeneratorOptions()const;
    bool isEducationEditionLevel()const;
//  void setGameType(GameType); //TODO: incomplete function definition
    void _setGameRulesBasedOnPremiumContentIdentity();
    void getPremiumTemplateContentIdentity()const;
    void getSeed()const;
    void getSpawnPos()const;
    void getTime()const;
    bool isAlwaysDay()const;
    void getGameRules()const;
    bool isGameRule(GameRuleId)const;
    void getServerChunkTickRange()const;
    void setServerChunkTickRange(unsigned int);
    void getLoadedPlayerTag();
    void setSeed(unsigned int);
    void _updateLimitedWorldOrigin(BlockPos const&);
    void setTime(int);
    void clearLoadedPlayerTag();
    std::string getLevelName()const;
    void setLevelName(std::string const&);
    void getGenerator()const;
//  void setGenerator(GeneratorType); //TODO: incomplete function definition
    void touchLastLoadedWithVersion();
    void getLastPlayed()const;
    void updateLastTimePlayed()const;
    bool isLightning()const;
    void getLightningLevel()const;
    void setLightningLevel(float);
    void getLightningTime()const;
    void setLightningTime(int);
    bool isRaining()const;
    void getRainLevel()const;
    void setRainLevel(float);
    void getRainTime()const;
    void setRainTime(int);
    void getGameType()const;
    void getGameDifficulty()const;
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void getForceGameType()const;
    void setForceGameType(bool);
    void getSpawnMobs()const;
    void setSpawnMobs(bool);
    bool hasAchievementsDisabled()const;
    void disableAchievements();
    void getUseMsaGamertagsOnly()const;
    void setUseMsaGamertagsOnly(bool);
    bool achievementsWillBeDisabledOnLoad()const;
    bool hasCommandsEnabled()const;
    void recordStartUp();
    bool isNewLevel()const;
    void getWorldCenter()const;
    void getWorldStartCount()const;
    void getStorageVersion()const;
//  void setStorageVersion(StorageVersion); //TODO: incomplete function definition
    void getMinCompatibleClientVersion()const;
    void getNetworkVersion()const;
    void setNetworkVersion(int);
    bool isPremiumWorldTemplate()const;
    void setPremiumTemplateContentIdentity(ContentIdentity const&);
    void getWorldTemplateIdentity()const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void getBaseGameVersion()const;
    void setBaseGameVersion(BaseGameVersion const&);
    void getCurrentTick()const;
    void incrementTick();
    void setCurrentTick(Tick &);
    void getAdventureSettings();
    void getGameRules();
    void getDefaultAbilities()const;
    void getDefaultAbilities();
    void getEducationEditionOffer()const;
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    void educationFeaturesEnabled()const;
    void setEducationFeaturesEnabled(bool);
    bool hasConfirmedPlatformLockedContent()const;
    void setConfirmedPlatformLockedContent(bool);
    void getMultiplayerGameIntent()const;
    void setMultiplayerGameIntent(bool);
    bool isMultiplayerGame()const;
    void setMultiplayerGame(bool);
    void getLANBroadcastIntent()const;
    void setLANBroadcastIntent(bool);
    void getLANBroadcast()const;
    void setLANBroadcast(bool);
    void getXBLBroadcastIntent()const;
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getXBLBroadcastMode()const;
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void getPlatformBroadcastIntent()const;
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getPlatformBroadcastMode()const;
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void setCommandsEnabled(bool);
    bool hasExperimentalGameplayEnabled()const;
    bool isTexturepacksRequired()const;
    void setTexturepacksRequired(bool);
    bool hasLockedBehaviorPack()const;
    void setHasLockedBehaviorPack(bool);
    bool hasLockedResourcePack()const;
    void setHasLockedResourcePack(bool);
    bool isFromLockedTemplate()const;
    void setFromLockedTemplate(bool);
    bool isFromWorldTemplate()const;
    void setFromWorldTemplate(bool);
    bool isWorldTemplateOptionLocked()const;
    void setWorldTemplateOptionLocked(bool);
    std::string getEducationOid()const;
    void setEducationOid(std::string const&);
    std::string getEducationProductId()const;
    void setEducationProductId(std::string const&);
    bool hasBonusChestEnabled()const;
    void getBonusChestSpawned()const;
    void setBonusChestEnabled(bool);
    void setBonusChestSpawned(bool);
    bool hasStartWithMapEnabled()const;
    void setStartWithMapEnabled(bool);
    bool hasMapsCenteredToOrigin()const;
    void setOnlySpawnV1Villagers(bool);
    void getOnlySpawnV1Villagers()const;
    void getNetherScale()const;
    bool isLegacyLevel()const;
    bool requiresCopiedPackRemovalCheck()const;
    void setRequiresCopiedPackRemovalCheck(bool);
};
