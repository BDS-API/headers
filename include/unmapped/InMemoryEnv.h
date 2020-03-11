#pragma once

#include "./FlushableEnv.h"
#include "../core/Path.h"
#include <memory>
#include <vector>
#include <string>


class InMemoryEnv : FlushableEnv {

public:
    virtual ~InMemoryEnv();
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void FileExists(std::string const&);
    virtual void GetChildren(std::string const&, std::vector<std::string, std::allocator<std::string>> *);
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);
    virtual void flushToPermanentStorage();

//  InMemoryEnv(leveldb::Env *, Core::Path const&); //TODO: incomplete function definition
    void _flushWithTransaction();
};
