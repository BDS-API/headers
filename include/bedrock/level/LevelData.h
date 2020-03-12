#pragma once

#include <string>
#include "../../unmapped/GameRuleId.h"


class LevelData {

public:
    void getServerChunkTickRange()const;
//  void v1_read(RakNet::BitStream &, StorageVersion); //TODO: incomplete function definition
    void getNetherScale()const;
    bool isRaining()const;
    bool isNewLevel()const;
    bool hasConfirmedPlatformLockedContent()const;
    void setPremiumTemplateContentIdentity(ContentIdentity const&);
    void getFlatWorldGeneratorOptions()const;
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void setLANBroadcastIntent(bool);
    void setForceGameType(bool);
    bool isLightning()const;
    void setStartWithMapEnabled(bool);
    void setConfirmedPlatformLockedContent(bool);
    void setLevelName(std::string const&);
    void getSpawnMobs()const;
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getNetworkVersion()const;
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    void getGameType()const;
    bool isWorldTemplateOptionLocked()const;
    void getLastPlayed()const;
    void getDefaultAbilities();
    bool isFromLockedTemplate()const;
    bool hasMapsCenteredToOrigin()const;
    void clearLoadedPlayerTag();
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    LevelData(CompoundTag const&);
    void getLANBroadcast()const;
    void setRequiresCopiedPackRemovalCheck(bool);
    void setEducationFeaturesEnabled(bool);
    void setLightningLevel(float);
    void getWorldStartCount()const;
    void recordStartUp();
    void getMinCompatibleClientVersion()const;
    void updateLastTimePlayed()const;
    void setTime(int);
    void getPlatformBroadcastIntent()const;
    void getRainTime()const;
    void setBaseGameVersion(BaseGameVersion const&);
    bool hasCommandsEnabled()const;
    void setFromWorldTemplate(bool);
    void getStorageVersion()const;
    void setNetworkVersion(int);
    void getGameRules();
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getForceGameType()const;
    void disableAchievements();
    void getUseMsaGamertagsOnly()const;
    void getOnlySpawnV1Villagers()const;
    void getAdventureSettings();
    void createTag()const;
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void setEducationProductId(std::string const&);
    void setRainLevel(float);
    LevelData();
    bool isEducationEditionLevel()const;
    void getMultiplayerGameIntent()const;
    void getEducationEditionOffer()const;
    void educationFeaturesEnabled()const;
    bool isTexturepacksRequired()const;
    void setTagData(CompoundTag &)const;
//  LevelData(LevelSettings const&, std::string const&, GeneratorType, BlockPos const&, bool, EducationEditionOffer, float, float); //TODO: incomplete function definition
    void setSpawnMobs(bool);
    bool hasLockedResourcePack()const;
    void getPlatformBroadcastMode()const;
    bool hasBonusChestEnabled()const;
    void getTime()const;
    void getWorldCenter()const;
    void setHasLockedResourcePack(bool);
    void getCurrentTick()const;
    void setWorldTemplateOptionLocked(bool);
    void setFromLockedTemplate(bool);
    void setSpawnPos(BlockPos const&);
    std::string getEducationProductId()const;
    void getWorldTemplateIdentity()const;
    void incrementTick();
    void setMultiplayerGame(bool);
    void setRainTime(int);
    bool isAlwaysDay()const;
    void getGameDifficulty()const;
    void getBonusChestSpawned()const;
    void getTagData(CompoundTag const&);
    void setServerChunkTickRange(unsigned int);
    void getLightningTime()const;
    bool isMultiplayerGame()const;
    void setCurrentTick(Tick &);
    std::string getEducationOid()const;
    LevelData(LevelData &&);
    bool hasSpawnPos()const;
    bool isGameRule(GameRuleId)const;
    void setLightningTime(int);
    void getXBLBroadcastMode()const;
//  void setGameType(GameType); //TODO: incomplete function definition
    bool isFromWorldTemplate()const;
    void getSpawnPos()const;
//  void setGenerator(GeneratorType); //TODO: incomplete function definition
    void setUseMsaGamertagsOnly(bool);
    void setOnlySpawnV1Villagers(bool);
    void setTexturepacksRequired(bool);
    void setLANBroadcast(bool);
    void setEducationOid(std::string const&);
    void setWorldTemplateIdentity(PackIdVersion const&);
    void _setGameRulesBasedOnPremiumContentIdentity();
    void touchLastLoadedWithVersion();
    void getPremiumTemplateContentIdentity()const;
    void getLANBroadcastIntent()const;
    bool hasExperimentalGameplayEnabled()const;
    void setHasLockedBehaviorPack(bool);
    void getLastLoadedWithVersion()const;
    void _updateLimitedWorldOrigin(BlockPos const&);
    void getXBLBroadcastIntent()const;
    void setMultiplayerGameIntent(bool);
//  void setStorageVersion(StorageVersion); //TODO: incomplete function definition
    void getBaseGameVersion()const;
    void getDefaultAbilities()const;
    void getSeed()const;
    void getLoadedPlayerTag();
    bool isPremiumWorldTemplate()const;
    void getLightningLevel()const;
    void getRainLevel()const;
    void setBonusChestSpawned(bool);
    void getGenerator()const;
    bool requiresCopiedPackRemovalCheck()const;
    bool hasLockedBehaviorPack()const;
    bool hasStartWithMapEnabled()const;
    bool isLegacyLevel()const;
    void setCommandsEnabled(bool);
    void setBonusChestEnabled(bool);
    bool hasAchievementsDisabled()const;
    void setSeed(unsigned int);
    void getGameRules()const;
    bool achievementsWillBeDisabledOnLoad()const;
    std::string getLevelName()const;
    ~LevelData();
};
