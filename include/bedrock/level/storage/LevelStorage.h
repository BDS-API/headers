#pragma once

#include <string>
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/PlayerStorageIds.h"
#include "../../actor/Player.h"


class LevelStorage {

public:
    class Batch;

    static std::string LOCAL_PLAYER_TAG;
    static std::string LEGACY_CONSOLE_PLAYER_PREFIX;

    virtual void corruptLevel();
    virtual void createWriteBatch();
    virtual void freeCaches();
//  virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    ~LevelStorage();
    std::string getServerId(Player const&, bool);
    std::string getServerId(PlayerStorageIds const&);
    void loadLostPlayerData(Player const&, bool);
    void loadLocalPlayerData();
    void save(Actor &);
//  void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string loadAllPlayerIDs(bool)const;
    LevelStorage();
    void loadServerPlayerData(Player const&, bool);
    void loadPlayerData(PlayerStorageIds const&, bool);
    void saveData(std::string const&, CompoundTag const&);
    class Batch {

    public:
        ~Batch();
        Batch();
    };
};
