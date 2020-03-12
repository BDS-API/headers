#pragma once

#include "InMemoryFile.h"
#include <memory>


class InMemorySequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition
    ~InMemorySequentialFile();
    virtual void Skip(unsigned long);
    InMemorySequentialFile(std::shared_ptr<InMemoryFile>);
};
