#pragma once

#include <shared_mutex>


class SnapshotWritableFile /*public leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual ~SnapshotWritableFile(); // _ZN20SnapshotWritableFileD2Ev
    virtual void __fake_function0(); // fake
    virtual void Append__incomplete0(long const&); //TODO: incomplete function definition // _ZN20SnapshotWritableFile6AppendERKN7leveldb5SliceE
    virtual void Close(); // _ZN20SnapshotWritableFile5CloseEv
    virtual void Flush(); // _ZN20SnapshotWritableFile5FlushEv
    virtual void Sync(); // _ZN20SnapshotWritableFile4SyncEv
//    SnapshotWritableFile(long *&&, std::shared_timed_mutex &); //TODO: incomplete function definition // _ZN20SnapshotWritableFileC2EOPN7leveldb12WritableFileERSt18shared_timed_mutex
};
