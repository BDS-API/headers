#pragma once

#include "../../unmapped/EducationLevelSettings.h"
#include "../../unmapped/Abilities.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Dimension.h"
#include "../../unmapped/BaseGameVersion.h"
#include "LevelSummary.h"
#include "LevelData.h"
#include <vector>
#include "../../unmapped/GameRules.h"
#include "../../unmapped/PackInstanceId.h"


class LevelSettings {

public:
    LevelSettings(LevelSettings const&);
    void setForceGameType(bool);
    bool isTexturepacksRequired()const;
    bool hasLockedBehaviorPack()const;
    bool hasLockedResourcePack()const;
    void getOnlySpawnV1Villagers()const;
    void setImmutableWorld(bool);
    void getServerChunkTickRange()const;
    void getBaseGameVersion()const;
    LevelSettings(LevelSummary const&);
    void getDefaultAbilities()const;
//  LevelSettings(LevelData const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getNewWorldBehaviorPackIdentities()const;
    void shouldForceExperimentalGameplay()const;
    void getMultiplayerGameIntent()const;
    bool hasXBLBroadcastIntent()const;
//  std::string generatorTypeToString(GeneratorType); //TODO: incomplete function definition
    void setEducationFeaturesEnabled(bool);
    void getEducationEditionOffer()const;
    void getNewWorldResourcePackIdentities()const;
    bool isEducationEditionWorld()const;
    void educationFeaturesEnabled()const;
    void setOverrideSavedSettings(bool);
    void getLightningLevel()const;
    void parseSeedString(std::string const&, unsigned int);
    bool achievementsWillBeDisabledOnLoad()const;
    void getGameDifficulty()const;
    void getGameRules()const;
//  LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&); //TODO: incomplete function definition
    void getSeed()const;
    bool hasPlatformBroadcastIntent()const;
    void setEducationLevelSettings(EducationLevelSettings);
    void getPlatformBroadcastIntent()const;
    bool isWorldTemplateOptionLocked()const;
    bool hasBonusChestEnabled()const;
    void getImmutableWorld()const;
    bool hasConfirmedPlatformLockedContent()const;
    bool hasStartWithMapEnabled()const;
    bool isFromWorldTemplate()const;
    ~LevelSettings();
    void setOnlySpawnV1Villagers(bool);
    void getDimension()const;
    void getXBLBroadcastIntent()const;
//  void validateGameDifficulty(Difficulty); //TODO: incomplete function definition
    void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId> const&);
    void getDefaultSpawn()const;
    void setNewWorldResourcePackIdentities(std::vector<PackInstanceId> const&);
    void getEducationLevelSettings()const;
    bool hasAchievementsDisabled()const;
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    void setBaseGameVersion(BaseGameVersion const&);
    void getRainLevel()const;
    LevelSettings(LevelSettings &&);
    void getGameType()const;
    void getTime()const;
    bool hasCommandsEnabled()const;
    void setForceExperimentalGameplay(bool);
    bool isFromLockedTemplate()const;
    void getLanBroadcastIntent()const;
    void shouldOverrideSavedSettings()const;
    void useMsaGamertagsOnly()const;
    void overrideSavedSettings(LevelData &)const;
    void getGenerator()const;
    LevelSettings();
    void forceGameType()const;
};
