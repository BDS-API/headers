#pragma once

class ResourcePackMergeStrategy {

    virtual ~ResourcePackMergeStrategy();
    virtual ~ResourcePackMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);
}
