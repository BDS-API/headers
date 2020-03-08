#pragma once

#include "../core/File"


class LevelDbWritableFile : leveldb::WritableFile {

public:
    virtual LevelDbWritableFile::~LevelDbWritableFile()
    virtual void Append(leveldb::Slice const&);
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

    LevelDbWritableFile(std::string, Core::File &&);
    void SyncDirIfManifest();
};
