#pragma once

#include "../../unmapped/EducationLevelSettings.h"
#include <vector>
#include "../../unmapped/GameRules.h"
#include <string>
#include "../../unmapped/Abilities.h"


class LevelSettings {

public:
    LevelSettings(LevelSettings const&); // _ZN13LevelSettingsC2ERKS_
    ~LevelSettings(); // _ZN13LevelSettingsD2Ev
    LevelSettings(LevelSettings &&); // _ZN13LevelSettingsC2EOS_
    LevelSettings(); // _ZN13LevelSettingsC2Ev
    LevelSettings(LevelSummary const&); // _ZN13LevelSettingsC2ERK12LevelSummary
//  LevelSettings(LevelData const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN13LevelSettingsC2ERK9LevelData11AutomaticIDI9DimensioniE
//  LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&); //TODO: incomplete function definition // _ZN13LevelSettingsC2Ej8GameType10Difficulty11AutomaticIDI9DimensioniE13GeneratorTypeRK8BlockPosbi21EducationEditionOfferffbbbN6Social18GamePublishSettingESB_bbbbbb9GameRulesbb9AbilitiesjbbbRK15BaseGameVersion
    void setEducationFeaturesEnabled(bool); // _ZN13LevelSettings27setEducationFeaturesEnabledEb
    void getDefaultSpawn()const; // _ZNK13LevelSettings15getDefaultSpawnEv
    void getSeed()const; // _ZNK13LevelSettings7getSeedEv
    void getGameType()const; // _ZNK13LevelSettings11getGameTypeEv
    void getDimension()const; // _ZNK13LevelSettings12getDimensionEv
    void getGameDifficulty()const; // _ZNK13LevelSettings17getGameDifficultyEv
    void getTime()const; // _ZNK13LevelSettings7getTimeEv
    void setForceGameType(bool); // _ZN13LevelSettings16setForceGameTypeEb
    void forceGameType()const; // _ZNK13LevelSettings13forceGameTypeEv
    bool hasAchievementsDisabled()const; // _ZNK13LevelSettings23hasAchievementsDisabledEv
    void getGenerator()const; // _ZNK13LevelSettings12getGeneratorEv
    void getRainLevel()const; // _ZNK13LevelSettings12getRainLevelEv
    void getLightningLevel()const; // _ZNK13LevelSettings17getLightningLevelEv
    bool isEducationEditionWorld()const; // _ZNK13LevelSettings23isEducationEditionWorldEv
    void getEducationEditionOffer()const; // _ZNK13LevelSettings24getEducationEditionOfferEv
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition // _ZN13LevelSettings24setEducationEditionOfferE21EducationEditionOffer
    void educationFeaturesEnabled()const; // _ZNK13LevelSettings24educationFeaturesEnabledEv
    void setImmutableWorld(bool); // _ZN13LevelSettings17setImmutableWorldEb
    void getImmutableWorld()const; // _ZNK13LevelSettings17getImmutableWorldEv
    void getGameRules()const; // _ZNK13LevelSettings12getGameRulesEv
    bool hasConfirmedPlatformLockedContent()const; // _ZNK13LevelSettings33hasConfirmedPlatformLockedContentEv
    void getMultiplayerGameIntent()const; // _ZNK13LevelSettings24getMultiplayerGameIntentEv
    void getLanBroadcastIntent()const; // _ZNK13LevelSettings21getLanBroadcastIntentEv
    bool hasXBLBroadcastIntent()const; // _ZNK13LevelSettings21hasXBLBroadcastIntentEv
    void getXBLBroadcastIntent()const; // _ZNK13LevelSettings21getXBLBroadcastIntentEv
    bool hasPlatformBroadcastIntent()const; // _ZNK13LevelSettings26hasPlatformBroadcastIntentEv
    void getPlatformBroadcastIntent()const; // _ZNK13LevelSettings26getPlatformBroadcastIntentEv
    bool hasCommandsEnabled()const; // _ZNK13LevelSettings18hasCommandsEnabledEv
    bool isTexturepacksRequired()const; // _ZNK13LevelSettings22isTexturepacksRequiredEv
    bool hasLockedBehaviorPack()const; // _ZNK13LevelSettings21hasLockedBehaviorPackEv
    bool hasLockedResourcePack()const; // _ZNK13LevelSettings21hasLockedResourcePackEv
    bool isFromLockedTemplate()const; // _ZNK13LevelSettings20isFromLockedTemplateEv
    void useMsaGamertagsOnly()const; // _ZNK13LevelSettings19useMsaGamertagsOnlyEv
    bool hasBonusChestEnabled()const; // _ZNK13LevelSettings20hasBonusChestEnabledEv
    bool hasStartWithMapEnabled()const; // _ZNK13LevelSettings22hasStartWithMapEnabledEv
    void getServerChunkTickRange()const; // _ZNK13LevelSettings23getServerChunkTickRangeEv
    void getDefaultAbilities()const; // _ZNK13LevelSettings19getDefaultAbilitiesEv
    void setOverrideSavedSettings(bool); // _ZN13LevelSettings24setOverrideSavedSettingsEb
    void shouldOverrideSavedSettings()const; // _ZNK13LevelSettings27shouldOverrideSavedSettingsEv
    void overrideSavedSettings(LevelData &)const; // _ZNK13LevelSettings21overrideSavedSettingsER9LevelData
    bool achievementsWillBeDisabledOnLoad()const; // _ZNK13LevelSettings32achievementsWillBeDisabledOnLoadEv
    void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId> const&); // _ZN13LevelSettings33setNewWorldBehaviorPackIdentitiesERKSt6vectorI14PackInstanceIdSaIS1_EE
    void getNewWorldBehaviorPackIdentities()const; // _ZNK13LevelSettings33getNewWorldBehaviorPackIdentitiesEv
    void setNewWorldResourcePackIdentities(std::vector<PackInstanceId> const&); // _ZN13LevelSettings33setNewWorldResourcePackIdentitiesERKSt6vectorI14PackInstanceIdSaIS1_EE
    void getNewWorldResourcePackIdentities()const; // _ZNK13LevelSettings33getNewWorldResourcePackIdentitiesEv
    void setForceExperimentalGameplay(bool); // _ZN13LevelSettings28setForceExperimentalGameplayEb
    void shouldForceExperimentalGameplay()const; // _ZNK13LevelSettings31shouldForceExperimentalGameplayEv
    bool isFromWorldTemplate()const; // _ZNK13LevelSettings19isFromWorldTemplateEv
    bool isWorldTemplateOptionLocked()const; // _ZNK13LevelSettings27isWorldTemplateOptionLockedEv
    void getOnlySpawnV1Villagers()const; // _ZNK13LevelSettings23getOnlySpawnV1VillagersEv
    void setOnlySpawnV1Villagers(bool); // _ZN13LevelSettings23setOnlySpawnV1VillagersEb
    void getBaseGameVersion()const; // _ZNK13LevelSettings18getBaseGameVersionEv
    void setBaseGameVersion(BaseGameVersion const&); // _ZN13LevelSettings18setBaseGameVersionERK15BaseGameVersion
    void setEducationLevelSettings(EducationLevelSettings); // _ZN13LevelSettings25setEducationLevelSettingsE22EducationLevelSettings
    void getEducationLevelSettings()const; // _ZNK13LevelSettings25getEducationLevelSettingsEv
//  void validateGameDifficulty(Difficulty); //TODO: incomplete function definition // _ZN13LevelSettings22validateGameDifficultyE10Difficulty
//  std::string generatorTypeToString(GeneratorType); //TODO: incomplete function definition // _ZN13LevelSettings21generatorTypeToStringB5cxx11E13GeneratorType
    void parseSeedString(std::string const&, unsigned int); // _ZN13LevelSettings15parseSeedStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
};
