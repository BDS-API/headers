#pragma once

class ResourcePackStack {

    virtual ~ResourcePackStack();
    virtual ~ResourcePackStack();
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
}
