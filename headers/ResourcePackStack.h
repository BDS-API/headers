#pragma once

class ResourcePackStack {

    virtual void ~ResourcePackStack();
    virtual void ~ResourcePackStack();
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
}
