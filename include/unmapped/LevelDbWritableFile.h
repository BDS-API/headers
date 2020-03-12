#pragma once

#include "../core/File.h"
#include <string>


class LevelDbWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual void Close();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Sync();
    virtual void Flush();
    ~LevelDbWritableFile();
    void SyncDirIfManifest();
    LevelDbWritableFile(std::string, Core::File &&);
};
