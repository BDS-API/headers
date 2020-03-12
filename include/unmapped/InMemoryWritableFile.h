#pragma once

#include <memory>


class InMemoryWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual void Sync();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    ~InMemoryWritableFile();
    virtual void Flush();
    virtual void Close();
    InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
