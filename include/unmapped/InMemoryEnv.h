#pragma once

#include "../core/Path"


class InMemoryEnv : FlushableEnv {

public:
    virtual InMemoryEnv::~InMemoryEnv()
    virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::string const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **);
    virtual void FileExists(std::string const&);
    virtual void GetChildren(std::string const&, std::vector<std::string, std::allocator<std::string>> *);
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);
    virtual void flushToPermanentStorage();

    InMemoryEnv(leveldb::Env *, Core::Path const&);
    void _flushWithTransaction();
};
