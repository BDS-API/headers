#pragma once

class LevelDbSequentialFile : leveldb::SequentialFile {

    virtual void LevelDbSequentialFile::~LevelDbSequentialFile();
    virtual void LevelDbSequentialFile::~LevelDbSequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);
}
