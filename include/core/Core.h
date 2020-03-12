#pragma once

#include <initializer_list>
#include "Result.h"
#include "StringSpan.h"
#include <functional>


namespace Core {

    static long sRootStorageArea;

    void ends_with(Core::StringSpan, Core::StringSpan);
    void starts_with(Core::StringSpan, Core::StringSpan);
    void transferDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::function<Core::Result (Core::Path const&, Core::Path const&)> const&);
    void oneOfCStr(char const*, std::initializer_list<char const*>);
    void find(Core::StringSpan, Core::StringSpan);
};
