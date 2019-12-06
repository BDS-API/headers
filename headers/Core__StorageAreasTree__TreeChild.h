#pragma once

class Core::StorageAreasTree::TreeChild {

public:

    void TreeChild(HashedString, std::unique_ptr<Core::StorageAreasTree::TreeNode, std::default_delete<Core::StorageAreasTree::TreeNode>>);
    void TreeChild(Core::StorageAreasTree::TreeChild&&);
};
