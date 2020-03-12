#pragma once

#include <memory>
#include "../unmapped/HashedString.h"
#include <functional>


namespace Core {

    class StorageAreasTree {

    public:
        class TreeChild;
        class TreeNode;

        void getStorageArea(Core::Path const&)const;
        StorageAreasTree();
        void removeStorageArea(Core::FileStorageArea &);
        void insertStorageArea(Core::FileStorageArea &);
        ~StorageAreasTree();
        void forEachStorageArea(std::function<void (Core::FileStorageArea &)> &&);
        class TreeChild {

        public:
            ~TreeChild();
            TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode>);
            TreeChild(Core::StorageAreasTree::TreeChild &&);
        };
        class TreeNode {

        public:
            ~TreeNode();
            TreeNode();
        };
    };
}
