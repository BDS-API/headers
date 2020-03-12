#pragma once

#include "../../core/Path.h"
#include <string>
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/GameVersion.h"
#include "LevelData.h"


class LevelSummary {

public:
    static std::string INVALID_LEVEL_ID;
    static std::string CUSTOM_ICON_FILENAME;
    static std::string WORLD_ICON_FILENAME;
    static std::string DEFAULT_WORLD_ICON_FILENAME;

//  void setGameType(GameType); //TODO: incomplete function definition
    bool isVersionCompatible()const;
    void setLastPlayed(long);
    std::string buildWorldIconPath(Core::Path const&);
    void getSeed()const;
    void operator<(LevelSummary const&)const;
    std::string buildCustomIconPath(Core::Path const&);
    LevelSummary();
    void reinitializeWorldSize(Core::Path const&);
    void operator!=(LevelSummary const&)const;
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void getXBLBroadcastIntent()const;
    void getGameDifficulty()const;
    void getGameType()const;
    bool isEdu()const;
    bool isGameVersionCompatible()const;
    void setName(std::string);
    void getEduOffer()const;
    bool hasConfirmedPlatformLockedContent()const;
    bool isStorageCompatible()const;
    void _initializeWorldIconPath(Core::Path const&);
    LevelSummary(LevelData const&, Core::Path const&, Core::Path const&);
    bool isEditionCompatible()const;
    bool hasCommandsEnabled()const;
    void setSizeOnDisk(unsigned long);
    void operator==(LevelSummary const&)const;
    void reinitializeWorldIconPath(Core::Path const&);
    void setId(std::string);
//  LevelSummary(std::string const&, std::string const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&); //TODO: incomplete function definition
    void getLANBroadcastIntent()const;
};
