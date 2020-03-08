#pragma once



class SnapshotWritableFile : leveldb::WritableFile {

public:
    virtual SnapshotWritableFile::~SnapshotWritableFile()
    virtual void Append(leveldb::Slice const&);
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

    SnapshotWritableFile(leveldb::WritableFile *&&, std::shared_timed_mutex &);
};
