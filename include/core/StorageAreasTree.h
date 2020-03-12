#pragma once

#include "Path.h"
#include "FileStorageArea.h"
#include "../unmapped/HashedString.h"
#include <functional>
#include <memory>


namespace Core {

    class StorageAreasTree {

    public:
        class TreeChild;
        class TreeNode;

        StorageAreasTree();
        void insertStorageArea(Core::FileStorageArea &);
        void removeStorageArea(Core::FileStorageArea &);
        void getStorageArea(Core::Path const&)const;
        ~StorageAreasTree();
        void forEachStorageArea(std::function<void (Core::FileStorageArea &)> &&);
        class TreeChild {

        public:
            ~TreeChild();
            TreeChild(Core::StorageAreasTree::TreeChild &&);
            TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode>);
        };
        class TreeNode {

        public:
            TreeNode();
            ~TreeNode();
        };
    };
}
