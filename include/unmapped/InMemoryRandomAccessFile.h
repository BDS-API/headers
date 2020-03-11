#pragma once

#include <memory>
#include "./InMemoryFile.h"


class InMemoryRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    virtual ~InMemoryRandomAccessFile();
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition

    InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>);
};
