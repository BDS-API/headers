#pragma once

class LevelDbWritableFile : leveldb::WritableFile {

    virtual ~LevelDbWritableFile();
    virtual ~LevelDbWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);
}
