#pragma once

#include "../util/BlockPos.h"
#include "LevelSettings.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/GameRuleId.h"
#include <string>
#include "../util/Tick.h"
#include "../../raknet/BitStream.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/PackIdVersion.h"


class LevelData {

public:
    bool isWorldTemplateOptionLocked()const;
    void getMultiplayerGameIntent()const;
    bool isLegacyLevel()const;
    bool isEducationEditionLevel()const;
    void setCommandsEnabled(bool);
    void getBaseGameVersion()const;
//  LevelData(LevelSettings const&, std::string const&, GeneratorType, BlockPos const&, bool, EducationEditionOffer, float, float); //TODO: incomplete function definition
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    bool hasAchievementsDisabled()const;
    void getGameDifficulty()const;
    void setUseMsaGamertagsOnly(bool);
    void getForceGameType()const;
    bool hasSpawnPos()const;
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    bool hasLockedResourcePack()const;
    void setBonusChestEnabled(bool);
    void getGameRules()const;
//  void v1_read(RakNet::BitStream &, StorageVersion); //TODO: incomplete function definition
    void setLANBroadcastIntent(bool);
    void clearLoadedPlayerTag();
    void setOnlySpawnV1Villagers(bool);
    void createTag()const;
    void setTexturepacksRequired(bool);
    void setRequiresCopiedPackRemovalCheck(bool);
    void incrementTick();
    void setHasLockedResourcePack(bool);
    void getServerChunkTickRange()const;
    void getWorldCenter()const;
    void getGameType()const;
    bool hasCommandsEnabled()const;
    bool hasStartWithMapEnabled()const;
    void getAdventureSettings();
    void setFromWorldTemplate(bool);
    void setSpawnMobs(bool);
    void setBaseGameVersion(BaseGameVersion const&);
    void getSeed()const;
    LevelData(LevelData &&);
    void getWorldTemplateIdentity()const;
    void getTime()const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void getXBLBroadcastMode()const;
    void setServerChunkTickRange(unsigned int);
    void educationFeaturesEnabled()const;
    void getTagData(CompoundTag const&);
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void setMultiplayerGame(bool);
    LevelData();
    bool isPremiumWorldTemplate()const;
    bool hasBonusChestEnabled()const;
    bool isFromLockedTemplate()const;
    void getSpawnPos()const;
    void setTime(int);
    void getDefaultAbilities()const;
    void setMultiplayerGameIntent(bool);
    void setRainLevel(float);
    bool hasExperimentalGameplayEnabled()const;
    void setEducationFeaturesEnabled(bool);
    bool isTexturepacksRequired()const;
    void disableAchievements();
    void setSeed(unsigned int);
    void getLANBroadcast()const;
    void getGenerator()const;
    void getFlatWorldGeneratorOptions()const;
    void getDefaultAbilities();
    void setEducationProductId(std::string const&);
    void getRainLevel()const;
    bool isAlwaysDay()const;
    void setRainTime(int);
    void _setGameRulesBasedOnPremiumContentIdentity();
    void setStartWithMapEnabled(bool);
    void setWorldTemplateOptionLocked(bool);
    void setPremiumTemplateContentIdentity(ContentIdentity const&);
    void setNetworkVersion(int);
    void getOnlySpawnV1Villagers()const;
//  void setGameType(GameType); //TODO: incomplete function definition
    void setConfirmedPlatformLockedContent(bool);
    void setCurrentTick(Tick &);
    bool hasMapsCenteredToOrigin()const;
    void setForceGameType(bool);
    void getRainTime()const;
    void setFromLockedTemplate(bool);
    void setLevelName(std::string const&);
    void getPremiumTemplateContentIdentity()const;
    bool isNewLevel()const;
//  void setGenerator(GeneratorType); //TODO: incomplete function definition
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    bool isMultiplayerGame()const;
    bool requiresCopiedPackRemovalCheck()const;
    void setBonusChestSpawned(bool);
    void getLastLoadedWithVersion()const;
    void getUseMsaGamertagsOnly()const;
    void getCurrentTick()const;
    LevelData(CompoundTag const&);
    void getLastPlayed()const;
    void getPlatformBroadcastMode()const;
    bool isFromWorldTemplate()const;
    void setTagData(CompoundTag &)const;
    bool isRaining()const;
    void setLANBroadcast(bool);
    bool isLightning()const;
    void getLANBroadcastIntent()const;
    bool hasLockedBehaviorPack()const;
    bool isGameRule(GameRuleId)const;
//  void setStorageVersion(StorageVersion); //TODO: incomplete function definition
    void setLightningTime(int);
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void getBonusChestSpawned()const;
    void updateLastTimePlayed()const;
    void getXBLBroadcastIntent()const;
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getSpawnMobs()const;
    void _updateLimitedWorldOrigin(BlockPos const&);
    std::string getLevelName()const;
    void getLightningTime()const;
    void setEducationOid(std::string const&);
    void getLightningLevel()const;
    std::string getEducationProductId()const;
    void getEducationEditionOffer()const;
    void getNetworkVersion()const;
    void setHasLockedBehaviorPack(bool);
    ~LevelData();
    void getLoadedPlayerTag();
    void getNetherScale()const;
    void getStorageVersion()const;
    void getPlatformBroadcastIntent()const;
    void getMinCompatibleClientVersion()const;
    void setLightningLevel(float);
    void getWorldStartCount()const;
    bool hasConfirmedPlatformLockedContent()const;
    void setSpawnPos(BlockPos const&);
    bool achievementsWillBeDisabledOnLoad()const;
    void recordStartUp();
    void getGameRules();
    void touchLastLoadedWithVersion();
    std::string getEducationOid()const;
};
