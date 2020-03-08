#pragma once

#include "../../unmapped/GameVersion"
#include "../../unmapped/ContentIdentity"
#include "../../core/Path"


class LevelSummary {

public:
    static long INVALID_LEVEL_ID[abi:cxx11];
    static long CUSTOM_ICON_FILENAME[abi:cxx11];
    static long WORLD_ICON_FILENAME[abi:cxx11];
    static long DEFAULT_WORLD_ICON_FILENAME[abi:cxx11];


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
    void setGameType(GameType);
    void setGameDifficulty(Difficulty);
    void setSizeOnDisk(unsigned long);
    LevelSummary(void);
    LevelSummary(std::string const&, std::string const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&);
    void _initializeWorldIconPath(Core::Path const&);
    LevelSummary(LevelData const&, Core::Path const&, Core::Path const&);
    void reinitializeWorldSize(Core::Path const&);
    bool isEditionCompatible()const;
    bool isGameVersionCompatible()const;
    bool isStorageCompatible()const;
    bool isVersionCompatible()const;
    void reinitializeWorldIconPath(Core::Path const&);
};
