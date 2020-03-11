#pragma once

#include "../core/File.h"


class LevelDbRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    virtual ~LevelDbRandomAccessFile();
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition

    LevelDbRandomAccessFile(Core::File &&);
};
