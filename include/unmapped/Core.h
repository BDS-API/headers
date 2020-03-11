#pragma once

#include "../core/Path.h"
#include "../core/StringSpan.h"
#include "../core/FileSystemImpl.h"
#include <initializer_list>
#include "../core/Result.h"
#include <functional>


class Core {

public:
    static long sRootStorageArea;


    void oneOfCStr(char const*, std::initializer_list<char const*>);
    void transferDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::function<Core::Result (Core::Path const&, Core::Path const&)> const&);
    void starts_with(Core::StringSpan, Core::StringSpan);
    void ends_with(Core::StringSpan, Core::StringSpan);
    void find(Core::StringSpan, Core::StringSpan);
};
