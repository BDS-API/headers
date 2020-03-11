#pragma once

#include <memory>
#include "./InMemoryFile.h"


class InMemorySequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    virtual ~InMemorySequentialFile();
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition
    virtual void Skip(unsigned long);

    InMemorySequentialFile(std::shared_ptr<InMemoryFile>);
};
