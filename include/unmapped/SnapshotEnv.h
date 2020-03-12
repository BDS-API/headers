#pragma once

#include <string>


class SnapshotEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    class DeleteFileEntry;

//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    virtual void RenameFile(std::string const&, std::string const&);
    ~SnapshotEnv();
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition
    virtual void DeleteFile(std::string const&);
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition
    void releaseSnapshot();
//  void _isQueuedForRemoval(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void createSnapshot(Core::Path const&);
//  SnapshotEnv(leveldb::Env *); //TODO: incomplete function definition
//  void _newWrappedWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition
    class DeleteFileEntry {

    public:
//      bool deletesPath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
        ~DeleteFileEntry();
        DeleteFileEntry(SnapshotEnv::DeleteFileEntry const&);
//      DeleteFileEntry(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition
//      void execute(leveldb::Env *); //TODO: incomplete function definition
    };
};
