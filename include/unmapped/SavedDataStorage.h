#pragma once

#include <string>


class SavedDataStorage {

public:
    ~SavedDataStorage();
    SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::string const&);
    void save();
    void _save(SavedData const&);
    void set(std::string const&, SavedData &);
};
