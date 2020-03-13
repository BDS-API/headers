#pragma once

#include <shared_mutex>


class SnapshotWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~SnapshotWritableFile(); // _ZN20SnapshotWritableFileD2Ev
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition // _ZN20SnapshotWritableFile6AppendERKN7leveldb5SliceE
    virtual void Close(); // _ZN20SnapshotWritableFile5CloseEv
    virtual void Flush(); // _ZN20SnapshotWritableFile5FlushEv
    virtual void Sync(); // _ZN20SnapshotWritableFile4SyncEv
//  SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &); //TODO: incomplete function definition // _ZN20SnapshotWritableFileC2EOPN7leveldb12WritableFileERSt18shared_timed_mutex
};
