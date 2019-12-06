#pragma once

class SnapshotWritableFile : leveldb::WritableFile {

public:
    virtual ~SnapshotWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);

    void SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &);
};
