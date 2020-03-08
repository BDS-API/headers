#pragma once



using namespace Core;

class StorageAreasTree {

public:

    StorageAreasTree(void);
    void insertStorageArea(Core::FileStorageArea &);
    void getStorageArea(Core::Path const&)const;
    void removeStorageArea(Core::FileStorageArea &);
    void forEachStorageArea(std::function<void ()(Core::FileStorageArea &)> &&);
};
