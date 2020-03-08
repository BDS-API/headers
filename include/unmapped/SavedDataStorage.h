#pragma once

#include "../bedrock/level/storage/LevelStorage"


class SavedDataStorage {

public:
    virtual SavedDataStorage::~SavedDataStorage()

    SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::string const&);
    void set(std::string const&, SavedData &);
    void save();
    void _save(SavedData const&);
};
