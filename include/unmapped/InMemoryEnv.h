#pragma once

#include <string>
#include <vector>
#include "FlushableEnv.h"


class InMemoryEnv : FlushableEnv {

public:
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
    virtual void FileExists(std::string const&);
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
    ~InMemoryEnv();
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void RenameFile(std::string const&, std::string const&);
    virtual void DeleteFile(std::string const&);
    virtual void GetChildren(std::string const&, std::vector<std::string> *);
    virtual void flushToPermanentStorage();
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    void _flushWithTransaction();
//  InMemoryEnv(leveldb::Env *, Core::Path const&); //TODO: incomplete function definition
};
