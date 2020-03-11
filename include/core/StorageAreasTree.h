#pragma once

#include <functional>
#include "./FileStorageArea.h"
#include "./Path.h"


namespace Core {

class StorageAreasTree {

public:

    StorageAreasTree();
    ~StorageAreasTree();
    void insertStorageArea(Core::FileStorageArea &);
    void getStorageArea(Core::Path const&)const;
    void removeStorageArea(Core::FileStorageArea &);
//  void forEachStorageArea(std::function<void (Core::FileStorageArea &)> &&); //TODO: incomplete function definition
};

}