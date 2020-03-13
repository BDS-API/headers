#pragma once

#include <string>


class LevelSummary {

public:
    static std::string INVALID_LEVEL_ID;
    static std::string CUSTOM_ICON_FILENAME;
    static std::string WORLD_ICON_FILENAME;
    static std::string DEFAULT_WORLD_ICON_FILENAME;

    void getSeed()const; // _ZNK12LevelSummary7getSeedEv
    void getGameType()const; // _ZNK12LevelSummary11getGameTypeEv
    void getGameDifficulty()const; // _ZNK12LevelSummary17getGameDifficultyEv
    void getEduOffer()const; // _ZNK12LevelSummary11getEduOfferEv
    bool isEdu()const; // _ZNK12LevelSummary5isEduEv
    bool hasConfirmedPlatformLockedContent()const; // _ZNK12LevelSummary33hasConfirmedPlatformLockedContentEv
    void getLANBroadcastIntent()const; // _ZNK12LevelSummary21getLANBroadcastIntentEv
    void getXBLBroadcastIntent()const; // _ZNK12LevelSummary21getXBLBroadcastIntentEv
    bool hasCommandsEnabled()const; // _ZNK12LevelSummary18hasCommandsEnabledEv
    void setId(std::string); // _ZN12LevelSummary5setIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setName(std::string); // _ZN12LevelSummary7setNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setLastPlayed(long); // _ZN12LevelSummary13setLastPlayedEl
//  void setGameType(GameType); //TODO: incomplete function definition // _ZN12LevelSummary11setGameTypeE8GameType
//  void setGameDifficulty(Difficulty); //TODO: incomplete function definition // _ZN12LevelSummary17setGameDifficultyE10Difficulty
    void setSizeOnDisk(unsigned long); // _ZN12LevelSummary13setSizeOnDiskEm
    std::string buildCustomIconPath(Core::Path const&); // _ZN12LevelSummary19buildCustomIconPathB5cxx11ERKN4Core4PathE
    std::string buildWorldIconPath(Core::Path const&); // _ZN12LevelSummary18buildWorldIconPathB5cxx11ERKN4Core4PathE
    LevelSummary(); // _ZN12LevelSummaryC2Ev
//  LevelSummary(std::string const&, std::string const&, long, GameType, Difficulty, int, int, unsigned long, bool, bool, Social::GamePublishSetting, bool, EducationEditionOffer, GameVersion const&, GameVersion const&, StorageVersion, Core::Path const&, ContentIdentity const&); //TODO: incomplete function definition // _ZN12LevelSummaryC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_l8GameType10DifficultyiimbbN6Social18GamePublishSettingEb21EducationEditionOfferRK11GameVersionSF_14StorageVersionRKN4Core4PathERK15ContentIdentity
    void _initializeWorldIconPath(Core::Path const&); // _ZN12LevelSummary24_initializeWorldIconPathERKN4Core4PathE
    LevelSummary(LevelData const&, Core::Path const&, Core::Path const&); // _ZN12LevelSummaryC2ERK9LevelDataRKN4Core4PathES6_
    void reinitializeWorldSize(Core::Path const&); // _ZN12LevelSummary21reinitializeWorldSizeERKN4Core4PathE
    void operator<(LevelSummary const&)const; // _ZNK12LevelSummaryltERKS_
    bool isEditionCompatible()const; // _ZNK12LevelSummary19isEditionCompatibleEv
    bool isGameVersionCompatible()const; // _ZNK12LevelSummary23isGameVersionCompatibleEv
    bool isStorageCompatible()const; // _ZNK12LevelSummary19isStorageCompatibleEv
    bool isVersionCompatible()const; // _ZNK12LevelSummary19isVersionCompatibleEv
    void reinitializeWorldIconPath(Core::Path const&); // _ZN12LevelSummary25reinitializeWorldIconPathERKN4Core4PathE
    void operator==(LevelSummary const&)const; // _ZNK12LevelSummaryeqERKS_
    void operator!=(LevelSummary const&)const; // _ZNK12LevelSummaryneERKS_
};
