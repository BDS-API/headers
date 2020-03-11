#pragma once

#include "./DeleteFileEntry.h"
#include <string>


namespace SnapshotEnv {

class DeleteFileEntry {

public:

//  DeleteFileEntry(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition
    ~DeleteFileEntry();
//  void execute(leveldb::Env *); //TODO: incomplete function definition
//  bool deletesPath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    DeleteFileEntry(SnapshotEnv::DeleteFileEntry const&);
};

}