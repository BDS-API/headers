#pragma once

#include <initializer_list>
#include "Result.h"
#include "Path.h"
#include <functional>
#include "FileSystemImpl.h"
#include "StringSpan.h"


namespace Core {

    static long sRootStorageArea;

    void find(Core::StringSpan, Core::StringSpan);
    void oneOfCStr(char const*, std::initializer_list<char const*>);
    void ends_with(Core::StringSpan, Core::StringSpan);
    void starts_with(Core::StringSpan, Core::StringSpan);
    void transferDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::function<Core::Result (Core::Path const&, Core::Path const&)> const&);
};
