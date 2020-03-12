#pragma once

#include <string>


class LevelSummary {

public:
    static std::string INVALID_LEVEL_ID;
    static std::string CUSTOM_ICON_FILENAME;
    static std::string WORLD_ICON_FILENAME;
    static std::string DEFAULT_WORLD_ICON_FILENAME;

    std::string buildWorldIconPath(Core::Path const&);
    void getLANBroadcastIntent()const;
    bool isEditionCompatible()const;
    LevelSummary(LevelData const&, Core::Path const&, Core::Path const&);
    bool isGameVersionCompatible()const;
    void operator!=(LevelSummary const&)const;
    void getGameDifficulty()const;
    void reinitializeWorldSize(Core::Path const&);
//  LevelSummary(std::string const&, std::string const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&); //TODO: incomplete function definition
    void _initializeWorldIconPath(Core::Path const&);
    void setLastPlayed(long);
    bool hasCommandsEnabled()const;
    std::string buildCustomIconPath(Core::Path const&);
    void getXBLBroadcastIntent()const;
    void reinitializeWorldIconPath(Core::Path const&);
    bool hasConfirmedPlatformLockedContent()const;
    void setId(std::string);
//  void setGameType(GameType); //TODO: incomplete function definition
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition
    void setName(std::string);
    bool isStorageCompatible()const;
    void setSizeOnDisk(unsigned long);
    bool isEdu()const;
    void getSeed()const;
    LevelSummary();
    void operator<(LevelSummary const&)const;
    bool isVersionCompatible()const;
    void getEduOffer()const;
    void operator==(LevelSummary const&)const;
    void getGameType()const;
};
