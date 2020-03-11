#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "../../actor/Player.h"
#include "../../../unmapped/PlayerStorageIds.h"
#include <string>


class LevelStorage {

public:
    static std::string LOCAL_PLAYER_TAG;
    static std::string LEGACY_CONSOLE_PLAYER_PREFIX;

    virtual ~LevelStorage();
    virtual void createWriteBatch();
//  virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    virtual void freeCaches();
    virtual void corruptLevel();

    std::string loadAllPlayerIDs(bool)const;
    void save(Actor &);
    void saveData(std::string const&, CompoundTag const&);
    void loadServerPlayerData(Player const&, bool);
    void loadLocalPlayerData();
    void loadPlayerData(PlayerStorageIds const&, bool);
    void loadLostPlayerData(Player const&, bool);
//  void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getServerId(PlayerStorageIds const&);
    std::string getServerId(Player const&, bool);
    LevelStorage();
};
