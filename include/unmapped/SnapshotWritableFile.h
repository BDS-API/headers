#pragma once

#include <shared_mutex>


class SnapshotWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~SnapshotWritableFile();
    virtual void Flush();
    virtual void Close();
    virtual void Sync();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
//  SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &); //TODO: incomplete function definition
};
