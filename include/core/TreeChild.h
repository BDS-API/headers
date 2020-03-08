#pragma once

#include "../unmapped/HashedString"


using namespace Core::StorageAreasTree;

class TreeChild {

public:

    TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode, std::default_delete<Core::StorageAreasTree::TreeNode>>);
    TreeChild(Core::StorageAreasTree::TreeChild&&);
};
