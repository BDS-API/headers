#pragma once

#include "../bedrock/level/Level"


class TagSystem {

public:

    void addTag(TagsComponent &, std::string const&, TagRegistry &);
    void removeTag(TagsComponent &, std::string const&, TagRegistry &);
    void initLevelTagCache(TagsComponent &, Level &);
    void deregisterTagsFromLevelCache(TagsComponent &, Level &);
    void synchLevelTagCache(Level &, TagRegistry &);
    bool hasTag(TagsComponent const&, std::string const&, TagRegistry const&);
    bool hasTag(TagsComponent const&, IDType<TagIDType> const&, TagRegistry const&);
    void removeTrackedTag(TagsComponent &, std::string const&, Level &);
    void addTrackedTag(TagsComponent &, std::string const&, Level &);
};
