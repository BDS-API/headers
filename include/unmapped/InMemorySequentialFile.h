#pragma once

#include <memory>


class InMemorySequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    virtual void Skip(unsigned long);
    ~InMemorySequentialFile();
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition
    InMemorySequentialFile(std::shared_ptr<InMemoryFile>);
};
