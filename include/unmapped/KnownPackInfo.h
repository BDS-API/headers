#pragma once

#include "./KnownPackInfo.h"


namespace ResourcePackRepository {

class KnownPackInfo {

public:

    void operator==(ResourcePackRepository::KnownPackInfo const&)const;
    void operator!=(ResourcePackRepository::KnownPackInfo const&)const;
    KnownPackInfo();
    ~KnownPackInfo();
    KnownPackInfo(ResourcePackRepository::KnownPackInfo const&);
};

}