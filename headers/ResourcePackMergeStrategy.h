#pragma once

class ResourcePackMergeStrategy {

    virtual void ~ResourcePackMergeStrategy();
    virtual void ~ResourcePackMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);
}
