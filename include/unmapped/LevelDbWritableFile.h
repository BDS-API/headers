#pragma once

#include <string>


class LevelDbWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbWritableFile(); // _ZN19LevelDbWritableFileD2Ev
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition // _ZN19LevelDbWritableFile6AppendERKN7leveldb5SliceE
    virtual void Close(); // _ZN19LevelDbWritableFile5CloseEv
    virtual void Flush(); // _ZN19LevelDbWritableFile5FlushEv
    virtual void Sync(); // _ZN19LevelDbWritableFile4SyncEv
    LevelDbWritableFile(std::string, Core::File &&); // _ZN19LevelDbWritableFileC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEON4Core4FileE
    void SyncDirIfManifest(); // _ZN19LevelDbWritableFile17SyncDirIfManifestEv
};
