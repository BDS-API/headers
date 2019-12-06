#pragma once

class LevelSummary {

public:

    void getSeed(void)const;
    void getGameType(void)const;
    void getGameDifficulty(void)const;
    void getEduOffer(void)const;
    bool isEdu(void)const;
    bool hasConfirmedPlatformLockedContent(void)const;
    void getLANBroadcastIntent(void)const;
    void getXBLBroadcastIntent(void)const;
    bool hasCommandsEnabled(void)const;
    void setId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void setLastPlayed(long);
    void setGameType(GameType);
    void setGameDifficulty(Difficulty);
    void setSizeOnDisk(unsigned long);
    void LevelSummary(void);
    void LevelSummary(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&);
    void _initializeWorldIconPath(Core::Path const&);
    void LevelSummary(LevelData const&, Core::Path const&, Core::Path const&);
    void reinitializeWorldSize(Core::Path const&);
    bool isEditionCompatible(void)const;
    bool isGameVersionCompatible(void)const;
    bool isStorageCompatible(void)const;
    bool isVersionCompatible(void)const;
    void reinitializeWorldIconPath(Core::Path const&);
};