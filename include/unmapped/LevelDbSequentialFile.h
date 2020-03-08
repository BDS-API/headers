#pragma once

#include "../core/File"


class LevelDbSequentialFile : leveldb::SequentialFile {

public:
    virtual LevelDbSequentialFile::~LevelDbSequentialFile()
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);

    LevelDbSequentialFile(Core::File &&);
};
