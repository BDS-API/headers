#pragma once

class SavedDataStorage {

public:
    virtual SavedDataStorage::~SavedDataStorage();

    SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::string const&);
    void set(std::string const&, SavedData &);
    void save(void);
    void _save(SavedData const&);
};
