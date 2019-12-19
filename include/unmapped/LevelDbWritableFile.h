#pragma once

class LevelDbWritableFile : leveldb::WritableFile {

public:
    virtual LevelDbWritableFile::~LevelDbWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);

    LevelDbWritableFile(std::string, Core::File &&);
    void SyncDirIfManifest(void);
};
