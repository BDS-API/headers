#pragma once

class LevelDbFileLock : leveldb::FileLock {

public:
    virtual ~LevelDbFileLock();

    void LevelDbFileLock(void);
};
