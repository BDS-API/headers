#pragma once

#include <memory>
#include <functional>
#include "../unmapped/HashedString.h"


namespace Core {

    class StorageAreasTree {

    public:
        class TreeChild;
        class TreeNode;

        StorageAreasTree(); // _ZN4Core16StorageAreasTreeC2Ev
        ~StorageAreasTree(); // _ZN4Core16StorageAreasTreeD2Ev
        void insertStorageArea(Core::FileStorageArea &); // _ZN4Core16StorageAreasTree17insertStorageAreaERNS_15FileStorageAreaE
        void getStorageArea(Core::Path const&)const; // _ZNK4Core16StorageAreasTree14getStorageAreaERKNS_4PathE
        void removeStorageArea(Core::FileStorageArea &); // _ZN4Core16StorageAreasTree17removeStorageAreaERNS_15FileStorageAreaE
        void forEachStorageArea(std::function<void (Core::FileStorageArea &)> &&); // _ZN4Core16StorageAreasTree18forEachStorageAreaEOSt8functionIFvRNS_15FileStorageAreaEEE
        class TreeChild {

        public:
            ~TreeChild(); // _ZN4Core16StorageAreasTree9TreeChildD2Ev
            TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode>); // _ZN4Core16StorageAreasTree9TreeChildC2E12HashedStringSt10unique_ptrINS0_8TreeNodeESt14default_deleteIS4_EE
            TreeChild(Core::StorageAreasTree::TreeChild &&); // _ZN4Core16StorageAreasTree9TreeChildC2EOS1_
        };
        class TreeNode {

        public:
            TreeNode(); // _ZN4Core16StorageAreasTree8TreeNodeC2Ev
            ~TreeNode(); // _ZN4Core16StorageAreasTree8TreeNodeD2Ev
        };
    };
}
