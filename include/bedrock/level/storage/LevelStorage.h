#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/PlayerStorageIds"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"


class LevelStorage {

public:
    static long LOCAL_PLAYER_TAG[abi:cxx11];
    static long LEGACY_CONSOLE_PLAYER_PREFIX[abi:cxx11];

    LevelStorage::~LevelStorage()
    virtual void createWriteBatch();
    virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const;
    virtual void freeCaches();
    virtual void corruptLevel();

    void save(Actor &);
    void saveData(std::string const&, CompoundTag const&);
    void loadServerPlayerData(Player const&, bool);
    void loadLocalPlayerData();
    void loadPlayerData(PlayerStorageIds const&, bool);
    void loadLostPlayerData(Player const&, bool);
    void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>);
    LevelStorage(void);
};
