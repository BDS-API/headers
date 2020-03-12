#pragma once

#include <string>


class LevelStorage {

public:
    class Batch;

    static std::string LOCAL_PLAYER_TAG;
    static std::string LEGACY_CONSOLE_PLAYER_PREFIX;

    virtual void createWriteBatch();
    virtual void freeCaches();
    virtual void corruptLevel();
    ~LevelStorage();
//  virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition
    void save(Actor &);
    void loadLostPlayerData(Player const&, bool);
//  void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void loadLocalPlayerData();
    void saveData(std::string const&, CompoundTag const&);
    std::string getServerId(Player const&, bool);
    void loadServerPlayerData(Player const&, bool);
    void loadPlayerData(PlayerStorageIds const&, bool);
    std::string getServerId(PlayerStorageIds const&);
    LevelStorage();
    std::string loadAllPlayerIDs(bool)const;
    class Batch {

    public:
        ~Batch();
        Batch();
    };
};
