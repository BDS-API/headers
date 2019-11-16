#pragma once

class SnapshotWritableFile : leveldb::WritableFile {

    virtual ~SnapshotWritableFile();
    virtual ~SnapshotWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);
}
