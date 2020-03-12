#pragma once

#include "InMemoryFile.h"
#include <memory>


class InMemoryWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~InMemoryWritableFile();
    virtual void Flush();
    virtual void Sync();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Close();
    InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
