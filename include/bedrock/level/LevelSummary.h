#pragma once

#include "../../unmapped/ContentIdentity.h"
#include "./LevelData.h"
#include "./LevelSummary.h"
#include "../../core/Path.h"
#include "../../unmapped/GameVersion.h"
#include <string>


class LevelSummary {

public:
    static std::string INVALID_LEVEL_ID;
    static std::string CUSTOM_ICON_FILENAME;
    static std::string WORLD_ICON_FILENAME;
    static std::string DEFAULT_WORLD_ICON_FILENAME;


    void getSeed()const;
    void getGameType()const;
    void getGameDifficulty()const;
    void getEduOffer()const;
    bool isEdu()const;
    bool hasConfirmedPlatformLockedContent()const;
    void getLANBroadcastIntent()const;
    void getXBLBroadcastIntent()const;
    bool hasCommandsEnabled()const;
    void setId(std::string);
    void setName(std::string);
    void setLastPlayed(long);
//  void setGameType(GameType); //TODO: incomplete function definition
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void setSizeOnDisk(unsigned long);
    std::string buildCustomIconPath(Core::Path const&);
    std::string buildWorldIconPath(Core::Path const&);
    LevelSummary();
//  LevelSummary(std::string const&, std::string const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&); //TODO: incomplete function definition
    void _initializeWorldIconPath(Core::Path const&);
    LevelSummary(LevelData const&, Core::Path const&, Core::Path const&);
    void reinitializeWorldSize(Core::Path const&);
    void operator<(LevelSummary const&)const;
    bool isEditionCompatible()const;
    bool isGameVersionCompatible()const;
    bool isStorageCompatible()const;
    bool isVersionCompatible()const;
    void reinitializeWorldIconPath(Core::Path const&);
    void operator==(LevelSummary const&)const;
    void operator!=(LevelSummary const&)const;
};
