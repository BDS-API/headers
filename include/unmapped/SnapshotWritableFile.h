#pragma once

#include <shared_mutex>


class SnapshotWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual ~SnapshotWritableFile();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

//  SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &); //TODO: incomplete function definition
};
