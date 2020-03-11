#pragma once

#include <memory>
#include "./InMemoryFile.h"


class InMemoryWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual ~InMemoryWritableFile();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

    InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
