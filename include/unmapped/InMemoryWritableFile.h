#pragma once

#include <memory>


class InMemoryWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~InMemoryWritableFile(); // _ZN20InMemoryWritableFileD2Ev
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition // _ZN20InMemoryWritableFile6AppendERKN7leveldb5SliceE
    virtual void Close(); // _ZN20InMemoryWritableFile5CloseEv
    virtual void Flush(); // _ZN20InMemoryWritableFile5FlushEv
    virtual void Sync(); // _ZN20InMemoryWritableFile4SyncEv
    InMemoryWritableFile(std::shared_ptr<InMemoryFile>); // _ZN20InMemoryWritableFileC2ESt10shared_ptrI12InMemoryFileE
};
