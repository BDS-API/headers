#pragma once

using namespace IInPackagePacks;

class MetaData {

public:

    MetaData(IInPackagePacks::MetaData const&);
    MetaData(Core::Path const&, bool, PackCategory);
};
