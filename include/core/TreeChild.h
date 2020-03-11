#pragma once

#include <memory>
#include "../unmapped/HashedString.h"
#include "./TreeChild.h"
#include "./TreeNode.h"


namespace Core::StorageAreasTree {

class TreeChild {

public:

    ~TreeChild();
    TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode, std::default_delete<Core::StorageAreasTree::TreeNode>>);
    TreeChild(Core::StorageAreasTree::TreeChild &&);
};

}