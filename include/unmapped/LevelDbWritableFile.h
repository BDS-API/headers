#pragma once

#include <string>


class LevelDbWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbWritableFile();
    virtual void Close();
    virtual void Sync();
    virtual void Flush();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    LevelDbWritableFile(std::string, Core::File &&);
    void SyncDirIfManifest();
};
