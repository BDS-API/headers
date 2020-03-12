#pragma once

#include "InMemoryFile.h"
#include <memory>


class InMemoryRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition
    ~InMemoryRandomAccessFile();
    InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>);
};
