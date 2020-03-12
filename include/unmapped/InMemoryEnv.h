#pragma once

#include "../core/Path.h"
#include "FlushableEnv.h"
#include <vector>
#include <string>


class InMemoryEnv : FlushableEnv {

public:
    virtual void RenameFile(std::string const&, std::string const&);
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
    ~InMemoryEnv();
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void DeleteFile(std::string const&);
    virtual void FileExists(std::string const&);
    virtual void flushToPermanentStorage();
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void GetChildren(std::string const&, std::vector<std::string> *);
//  InMemoryEnv(leveldb::Env *, Core::Path const&); //TODO: incomplete function definition
    void _flushWithTransaction();
};
