#pragma once

#include "../core/Path.h"
#include <string>


class SnapshotEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    virtual ~SnapshotEnv();
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);

//  SnapshotEnv(leveldb::Env *); //TODO: incomplete function definition
//  void _isQueuedForRemoval(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
//  void _newWrappedWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    void createSnapshot(Core::Path const&);
    void releaseSnapshot();
};
