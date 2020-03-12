#pragma once

#include <shared_mutex>


class SnapshotWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual void Sync();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Close();
    ~SnapshotWritableFile();
    virtual void Flush();
//  SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &); //TODO: incomplete function definition
};
