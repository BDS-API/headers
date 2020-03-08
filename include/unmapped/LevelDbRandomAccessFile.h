#pragma once

#include "../core/File"


class LevelDbRandomAccessFile : leveldb::RandomAccessFile {

public:
    LevelDbRandomAccessFile::~LevelDbRandomAccessFile()
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;

    LevelDbRandomAccessFile(Core::File &&);
};
