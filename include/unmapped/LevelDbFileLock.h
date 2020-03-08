#pragma once



class LevelDbFileLock : leveldb::FileLock {

public:
    virtual LevelDbFileLock::~LevelDbFileLock()

    LevelDbFileLock(void);
};
