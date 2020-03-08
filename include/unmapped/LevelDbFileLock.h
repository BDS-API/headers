#pragma once



class LevelDbFileLock : leveldb::FileLock {

public:
    LevelDbFileLock::~LevelDbFileLock()

    LevelDbFileLock(void);
};
