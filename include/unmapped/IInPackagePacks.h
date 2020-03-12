#pragma once

#include "../core/Path.h"


class IInPackagePacks {

public:
    class MetaData;

    ~IInPackagePacks();
    IInPackagePacks();
    class MetaData {

    public:
        MetaData(IInPackagePacks::MetaData const&);
        ~MetaData();
//      MetaData(Core::Path const&, bool, PackCategory); //TODO: incomplete function definition
    };
};
