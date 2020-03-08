#pragma once



using namespace SnapshotEnv;

class DeleteFileEntry {

public:

    DeleteFileEntry(Core::PathBuffer<std::string>, bool);
    void execute(leveldb::Env *);
    bool deletesPath(Core::PathBuffer<std::string> const&);
    DeleteFileEntry(SnapshotEnv::DeleteFileEntry const&);
};
