#pragma once

#include "../../unmapped/GameRules.h"
#include <vector>
#include "../../unmapped/EducationLevelSettings.h"
#include <string>
#include "../../unmapped/Abilities.h"


class LevelSettings {

public:
    bool isEducationEditionWorld()const;
    void setEducationFeaturesEnabled(bool);
    void getRainLevel()const;
    void getDefaultSpawn()const;
    bool hasPlatformBroadcastIntent()const;
    void setImmutableWorld(bool);
    void useMsaGamertagsOnly()const;
    bool isWorldTemplateOptionLocked()const;
    void setEducationLevelSettings(EducationLevelSettings);
    bool hasConfirmedPlatformLockedContent()const;
//  void validateGameDifficulty(Difficulty); //TODO: incomplete function definition
    LevelSettings(LevelSummary const&);
    LevelSettings(LevelSettings const&);
    void getEducationEditionOffer()const;
    void setNewWorldResourcePackIdentities(std::vector<PackInstanceId> const&);
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    bool hasAchievementsDisabled()const;
    bool hasBonusChestEnabled()const;
    void getDefaultAbilities()const;
    bool hasLockedBehaviorPack()const;
    void getXBLBroadcastIntent()const;
    void setBaseGameVersion(BaseGameVersion const&);
    void getLanBroadcastIntent()const;
    void getEducationLevelSettings()const;
    void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId> const&);
    void getOnlySpawnV1Villagers()const;
    void getLightningLevel()const;
    void getSeed()const;
    void overrideSavedSettings(LevelData &)const;
    void shouldOverrideSavedSettings()const;
    bool achievementsWillBeDisabledOnLoad()const;
    bool hasXBLBroadcastIntent()const;
    void getImmutableWorld()const;
    bool hasCommandsEnabled()const;
    bool hasLockedResourcePack()const;
    bool isFromWorldTemplate()const;
    void setForceGameType(bool);
    void getGenerator()const;
    bool isTexturepacksRequired()const;
    void shouldForceExperimentalGameplay()const;
    void getDimension()const;
    void parseSeedString(std::string const&, unsigned int);
    void educationFeaturesEnabled()const;
    void getPlatformBroadcastIntent()const;
    void getNewWorldBehaviorPackIdentities()const;
//  LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&); //TODO: incomplete function definition
    void getMultiplayerGameIntent()const;
    LevelSettings();
    bool hasStartWithMapEnabled()const;
    void getGameRules()const;
    void getGameDifficulty()const;
    void setOnlySpawnV1Villagers(bool);
//  std::string generatorTypeToString(GeneratorType); //TODO: incomplete function definition
    void getNewWorldResourcePackIdentities()const;
    void forceGameType()const;
    LevelSettings(LevelSettings &&);
    void getGameType()const;
    void getTime()const;
    void getServerChunkTickRange()const;
//  LevelSettings(LevelData const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    ~LevelSettings();
    void setOverrideSavedSettings(bool);
    void setForceExperimentalGameplay(bool);
    bool isFromLockedTemplate()const;
    void getBaseGameVersion()const;
};
