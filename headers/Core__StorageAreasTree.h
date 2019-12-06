#pragma once

class Core::StorageAreasTree {

public:

    void StorageAreasTree(void);
    void insertStorageArea(Core::FileStorageArea &);
    void getStorageArea(Core::Path const&)const;
    void removeStorageArea(Core::FileStorageArea &);
    void forEachStorageArea(std::function<void ()(Core::FileStorageArea &)> &&);
};
