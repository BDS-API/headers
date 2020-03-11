#pragma once

#include "../core/File.h"
#include <string>


class LevelDbWritableFile /*leveldb::WritableFile*/ { //TODO: incomplete class definition

public:
    virtual ~LevelDbWritableFile();
//  virtual void Append(leveldb::Slice const&); //TODO: incomplete function definition
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

    LevelDbWritableFile(std::string, Core::File &&);
    void SyncDirIfManifest();
};
