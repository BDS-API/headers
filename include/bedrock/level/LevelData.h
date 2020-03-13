#pragma once

#include <string>
#include "../../unmapped/GameRuleId.h"


class LevelData {

public:
    bool hasSpawnPos()const; // _ZNK9LevelData11hasSpawnPosEv
    void getLastLoadedWithVersion()const; // _ZNK9LevelData24getLastLoadedWithVersionEv
    LevelData(); // _ZN9LevelDataC2Ev
//  LevelData(LevelSettings const&, std::string const&, GeneratorType, BlockPos const&, bool, EducationEditionOffer, float, float); //TODO: incomplete function definition // _ZN9LevelDataC2ERK13LevelSettingsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13GeneratorTypeRK8BlockPosb21EducationEditionOfferff
    void setSpawnPos(BlockPos const&); // _ZN9LevelData11setSpawnPosERK8BlockPos
    LevelData(CompoundTag const&); // _ZN9LevelDataC2ERK11CompoundTag
    void getTagData(CompoundTag const&); // _ZN9LevelData10getTagDataERK11CompoundTag
    LevelData(LevelData &&); // _ZN9LevelDataC2EOS_
    ~LevelData(); // _ZN9LevelDataD2Ev
//  void v1_read(RakNet::BitStream &, StorageVersion); //TODO: incomplete function definition // _ZN9LevelData7v1_readERN6RakNet9BitStreamE14StorageVersion
    void createTag()const; // _ZNK9LevelData9createTagEv
    void setTagData(CompoundTag &)const; // _ZNK9LevelData10setTagDataER11CompoundTag
    void getFlatWorldGeneratorOptions()const; // _ZNK9LevelData28getFlatWorldGeneratorOptionsEv
    bool isEducationEditionLevel()const; // _ZNK9LevelData23isEducationEditionLevelEv
//  void setGameType(GameType); //TODO: incomplete function definition // _ZN9LevelData11setGameTypeE8GameType
    void _setGameRulesBasedOnPremiumContentIdentity(); // _ZN9LevelData42_setGameRulesBasedOnPremiumContentIdentityEv
    void getPremiumTemplateContentIdentity()const; // _ZNK9LevelData33getPremiumTemplateContentIdentityEv
    void getSeed()const; // _ZNK9LevelData7getSeedEv
    void getSpawnPos()const; // _ZNK9LevelData11getSpawnPosEv
    void getTime()const; // _ZNK9LevelData7getTimeEv
    bool isAlwaysDay()const; // _ZNK9LevelData11isAlwaysDayEv
    void getGameRules()const; // _ZNK9LevelData12getGameRulesEv
    bool isGameRule(GameRuleId)const; // _ZNK9LevelData10isGameRuleE10GameRuleId
    void getServerChunkTickRange()const; // _ZNK9LevelData23getServerChunkTickRangeEv
    void setServerChunkTickRange(unsigned int); // _ZN9LevelData23setServerChunkTickRangeEj
    void getLoadedPlayerTag(); // _ZN9LevelData18getLoadedPlayerTagEv
    void setSeed(unsigned int); // _ZN9LevelData7setSeedEj
    void _updateLimitedWorldOrigin(BlockPos const&); // _ZN9LevelData25_updateLimitedWorldOriginERK8BlockPos
    void setTime(int); // _ZN9LevelData7setTimeEi
    void clearLoadedPlayerTag(); // _ZN9LevelData20clearLoadedPlayerTagEv
    std::string getLevelName()const; // _ZNK9LevelData12getLevelNameB5cxx11Ev
    void setLevelName(std::string const&); // _ZN9LevelData12setLevelNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getGenerator()const; // _ZNK9LevelData12getGeneratorEv
//  void setGenerator(GeneratorType); //TODO: incomplete function definition // _ZN9LevelData12setGeneratorE13GeneratorType
    void touchLastLoadedWithVersion(); // _ZN9LevelData26touchLastLoadedWithVersionEv
    void getLastPlayed()const; // _ZNK9LevelData13getLastPlayedEv
    void updateLastTimePlayed()const; // _ZNK9LevelData20updateLastTimePlayedEv
    bool isLightning()const; // _ZNK9LevelData11isLightningEv
    void getLightningLevel()const; // _ZNK9LevelData17getLightningLevelEv
    void setLightningLevel(float); // _ZN9LevelData17setLightningLevelEf
    void getLightningTime()const; // _ZNK9LevelData16getLightningTimeEv
    void setLightningTime(int); // _ZN9LevelData16setLightningTimeEi
    bool isRaining()const; // _ZNK9LevelData9isRainingEv
    void getRainLevel()const; // _ZNK9LevelData12getRainLevelEv
    void setRainLevel(float); // _ZN9LevelData12setRainLevelEf
    void getRainTime()const; // _ZNK9LevelData11getRainTimeEv
    void setRainTime(int); // _ZN9LevelData11setRainTimeEi
    void getGameType()const; // _ZNK9LevelData11getGameTypeEv
    void getGameDifficulty()const; // _ZNK9LevelData17getGameDifficultyEv
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition // _ZN9LevelData17setGameDifficultyE10Difficulty
    void getForceGameType()const; // _ZNK9LevelData16getForceGameTypeEv
    void setForceGameType(bool); // _ZN9LevelData16setForceGameTypeEb
    void getSpawnMobs()const; // _ZNK9LevelData12getSpawnMobsEv
    void setSpawnMobs(bool); // _ZN9LevelData12setSpawnMobsEb
    bool hasAchievementsDisabled()const; // _ZNK9LevelData23hasAchievementsDisabledEv
    void disableAchievements(); // _ZN9LevelData19disableAchievementsEv
    void getUseMsaGamertagsOnly()const; // _ZNK9LevelData22getUseMsaGamertagsOnlyEv
    void setUseMsaGamertagsOnly(bool); // _ZN9LevelData22setUseMsaGamertagsOnlyEb
    bool achievementsWillBeDisabledOnLoad()const; // _ZNK9LevelData32achievementsWillBeDisabledOnLoadEv
    bool hasCommandsEnabled()const; // _ZNK9LevelData18hasCommandsEnabledEv
    void recordStartUp(); // _ZN9LevelData13recordStartUpEv
    bool isNewLevel()const; // _ZNK9LevelData10isNewLevelEv
    void getWorldCenter()const; // _ZNK9LevelData14getWorldCenterEv
    void getWorldStartCount()const; // _ZNK9LevelData18getWorldStartCountEv
    void getStorageVersion()const; // _ZNK9LevelData17getStorageVersionEv
//  void setStorageVersion(StorageVersion); //TODO: incomplete function definition // _ZN9LevelData17setStorageVersionE14StorageVersion
    void getMinCompatibleClientVersion()const; // _ZNK9LevelData29getMinCompatibleClientVersionEv
    void getNetworkVersion()const; // _ZNK9LevelData17getNetworkVersionEv
    void setNetworkVersion(int); // _ZN9LevelData17setNetworkVersionEi
    bool isPremiumWorldTemplate()const; // _ZNK9LevelData22isPremiumWorldTemplateEv
    void setPremiumTemplateContentIdentity(ContentIdentity const&); // _ZN9LevelData33setPremiumTemplateContentIdentityERK15ContentIdentity
    void getWorldTemplateIdentity()const; // _ZNK9LevelData24getWorldTemplateIdentityEv
    void setWorldTemplateIdentity(PackIdVersion const&); // _ZN9LevelData24setWorldTemplateIdentityERK13PackIdVersion
    void getBaseGameVersion()const; // _ZNK9LevelData18getBaseGameVersionEv
    void setBaseGameVersion(BaseGameVersion const&); // _ZN9LevelData18setBaseGameVersionERK15BaseGameVersion
    void getCurrentTick()const; // _ZNK9LevelData14getCurrentTickEv
    void incrementTick(); // _ZN9LevelData13incrementTickEv
    void setCurrentTick(Tick &); // _ZN9LevelData14setCurrentTickER4Tick
    void getAdventureSettings(); // _ZN9LevelData20getAdventureSettingsEv
    void getGameRules(); // _ZN9LevelData12getGameRulesEv
    void getDefaultAbilities()const; // _ZNK9LevelData19getDefaultAbilitiesEv
    void getDefaultAbilities(); // _ZN9LevelData19getDefaultAbilitiesEv
    void getEducationEditionOffer()const; // _ZNK9LevelData24getEducationEditionOfferEv
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition // _ZN9LevelData24setEducationEditionOfferE21EducationEditionOffer
    void educationFeaturesEnabled()const; // _ZNK9LevelData24educationFeaturesEnabledEv
    void setEducationFeaturesEnabled(bool); // _ZN9LevelData27setEducationFeaturesEnabledEb
    bool hasConfirmedPlatformLockedContent()const; // _ZNK9LevelData33hasConfirmedPlatformLockedContentEv
    void setConfirmedPlatformLockedContent(bool); // _ZN9LevelData33setConfirmedPlatformLockedContentEb
    void getMultiplayerGameIntent()const; // _ZNK9LevelData24getMultiplayerGameIntentEv
    void setMultiplayerGameIntent(bool); // _ZN9LevelData24setMultiplayerGameIntentEb
    bool isMultiplayerGame()const; // _ZNK9LevelData17isMultiplayerGameEv
    void setMultiplayerGame(bool); // _ZN9LevelData18setMultiplayerGameEb
    void getLANBroadcastIntent()const; // _ZNK9LevelData21getLANBroadcastIntentEv
    void setLANBroadcastIntent(bool); // _ZN9LevelData21setLANBroadcastIntentEb
    void getLANBroadcast()const; // _ZNK9LevelData15getLANBroadcastEv
    void setLANBroadcast(bool); // _ZN9LevelData15setLANBroadcastEb
    void getXBLBroadcastIntent()const; // _ZNK9LevelData21getXBLBroadcastIntentEv
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN9LevelData21setXBLBroadcastIntentEN6Social18GamePublishSettingE
    void getXBLBroadcastMode()const; // _ZNK9LevelData19getXBLBroadcastModeEv
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN9LevelData19setXBLBroadcastModeEN6Social18GamePublishSettingE
    void getPlatformBroadcastIntent()const; // _ZNK9LevelData26getPlatformBroadcastIntentEv
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN9LevelData26setPlatformBroadcastIntentEN6Social18GamePublishSettingE
    void getPlatformBroadcastMode()const; // _ZNK9LevelData24getPlatformBroadcastModeEv
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN9LevelData24setPlatformBroadcastModeEN6Social18GamePublishSettingE
    void setCommandsEnabled(bool); // _ZN9LevelData18setCommandsEnabledEb
    bool hasExperimentalGameplayEnabled()const; // _ZNK9LevelData30hasExperimentalGameplayEnabledEv
    bool isTexturepacksRequired()const; // _ZNK9LevelData22isTexturepacksRequiredEv
    void setTexturepacksRequired(bool); // _ZN9LevelData23setTexturepacksRequiredEb
    bool hasLockedBehaviorPack()const; // _ZNK9LevelData21hasLockedBehaviorPackEv
    void setHasLockedBehaviorPack(bool); // _ZN9LevelData24setHasLockedBehaviorPackEb
    bool hasLockedResourcePack()const; // _ZNK9LevelData21hasLockedResourcePackEv
    void setHasLockedResourcePack(bool); // _ZN9LevelData24setHasLockedResourcePackEb
    bool isFromLockedTemplate()const; // _ZNK9LevelData20isFromLockedTemplateEv
    void setFromLockedTemplate(bool); // _ZN9LevelData21setFromLockedTemplateEb
    bool isFromWorldTemplate()const; // _ZNK9LevelData19isFromWorldTemplateEv
    void setFromWorldTemplate(bool); // _ZN9LevelData20setFromWorldTemplateEb
    bool isWorldTemplateOptionLocked()const; // _ZNK9LevelData27isWorldTemplateOptionLockedEv
    void setWorldTemplateOptionLocked(bool); // _ZN9LevelData28setWorldTemplateOptionLockedEb
    std::string getEducationOid()const; // _ZNK9LevelData15getEducationOidB5cxx11Ev
    void setEducationOid(std::string const&); // _ZN9LevelData15setEducationOidERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getEducationProductId()const; // _ZNK9LevelData21getEducationProductIdB5cxx11Ev
    void setEducationProductId(std::string const&); // _ZN9LevelData21setEducationProductIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasBonusChestEnabled()const; // _ZNK9LevelData20hasBonusChestEnabledEv
    void getBonusChestSpawned()const; // _ZNK9LevelData20getBonusChestSpawnedEv
    void setBonusChestEnabled(bool); // _ZN9LevelData20setBonusChestEnabledEb
    void setBonusChestSpawned(bool); // _ZN9LevelData20setBonusChestSpawnedEb
    bool hasStartWithMapEnabled()const; // _ZNK9LevelData22hasStartWithMapEnabledEv
    void setStartWithMapEnabled(bool); // _ZN9LevelData22setStartWithMapEnabledEb
    bool hasMapsCenteredToOrigin()const; // _ZNK9LevelData23hasMapsCenteredToOriginEv
    void setOnlySpawnV1Villagers(bool); // _ZN9LevelData23setOnlySpawnV1VillagersEb
    void getOnlySpawnV1Villagers()const; // _ZNK9LevelData23getOnlySpawnV1VillagersEv
    void getNetherScale()const; // _ZNK9LevelData14getNetherScaleEv
    bool isLegacyLevel()const; // _ZNK9LevelData13isLegacyLevelEv
    bool requiresCopiedPackRemovalCheck()const; // _ZNK9LevelData30requiresCopiedPackRemovalCheckEv
    void setRequiresCopiedPackRemovalCheck(bool); // _ZN9LevelData33setRequiresCopiedPackRemovalCheckEb
};
