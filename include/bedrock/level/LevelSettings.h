#pragma once

#include "./LevelSettings.h"
#include "./LevelData.h"
#include "./LevelSummary.h"
#include "../../unmapped/Dimension.h"
#include "../../unmapped/Abilities.h"
#include "../../unmapped/PackInstanceId.h"
#include "../../unmapped/BaseGameVersion.h"
#include <memory>
#include "../util/BlockPos.h"
#include <vector>
#include "../../unmapped/GameRules.h"
#include "../../unmapped/EducationLevelSettings.h"
#include <string>


class LevelSettings {

public:

    LevelSettings(LevelSettings const&);
    ~LevelSettings();
    LevelSettings(LevelSettings &&);
    LevelSettings();
    LevelSettings(LevelSummary const&);
//  LevelSettings(LevelData const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&); //TODO: incomplete function definition
    void setEducationFeaturesEnabled(bool);
    void getDefaultSpawn()const;
    void getSeed()const;
    void getGameType()const;
    void getDimension()const;
    void getGameDifficulty()const;
    void getTime()const;
    void setForceGameType(bool);
    void forceGameType()const;
    bool hasAchievementsDisabled()const;
    void getGenerator()const;
    void getRainLevel()const;
    void getLightningLevel()const;
    bool isEducationEditionWorld()const;
    void getEducationEditionOffer()const;
//  void setEducationEditionOffer(EducationEditionOffer); //TODO: incomplete function definition
    void educationFeaturesEnabled()const;
    void setImmutableWorld(bool);
    void getImmutableWorld()const;
    void getGameRules()const;
    bool hasConfirmedPlatformLockedContent()const;
    void getMultiplayerGameIntent()const;
    void getLanBroadcastIntent()const;
    bool hasXBLBroadcastIntent()const;
    void getXBLBroadcastIntent()const;
    bool hasPlatformBroadcastIntent()const;
    void getPlatformBroadcastIntent()const;
    bool hasCommandsEnabled()const;
    bool isTexturepacksRequired()const;
    bool hasLockedBehaviorPack()const;
    bool hasLockedResourcePack()const;
    bool isFromLockedTemplate()const;
    void useMsaGamertagsOnly()const;
    bool hasBonusChestEnabled()const;
    bool hasStartWithMapEnabled()const;
    void getServerChunkTickRange()const;
    void getDefaultAbilities()const;
    void setOverrideSavedSettings(bool);
    void shouldOverrideSavedSettings()const;
    void overrideSavedSettings(LevelData &)const;
    bool achievementsWillBeDisabledOnLoad()const;
    void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&);
    void getNewWorldBehaviorPackIdentities()const;
    void setNewWorldResourcePackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&);
    void getNewWorldResourcePackIdentities()const;
    void setForceExperimentalGameplay(bool);
    void shouldForceExperimentalGameplay()const;
    bool isFromWorldTemplate()const;
    bool isWorldTemplateOptionLocked()const;
    void getOnlySpawnV1Villagers()const;
    void setOnlySpawnV1Villagers(bool);
    void getBaseGameVersion()const;
    void setBaseGameVersion(BaseGameVersion const&);
    void setEducationLevelSettings(EducationLevelSettings);
    void getEducationLevelSettings()const;
//  void validateGameDifficulty(Difficulty); //TODO: incomplete function definition
//  std::string generatorTypeToString(GeneratorType); //TODO: incomplete function definition
    void parseSeedString(std::string const&, unsigned int);
};
