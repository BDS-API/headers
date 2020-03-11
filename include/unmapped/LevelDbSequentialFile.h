#pragma once

#include "../core/File.h"


class LevelDbSequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    virtual ~LevelDbSequentialFile();
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition
    virtual void Skip(unsigned long);

    LevelDbSequentialFile(Core::File &&);
};
