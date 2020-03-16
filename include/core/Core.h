#pragma once

#include <functional>
#include "Result.h"
#include "StringSpan.h"
#include <initializer_list>


namespace Core {

    static long sRootStorageArea;

//    void operator&=(long &, long); //TODO: incomplete function definition // _ZN4CoreaNERNS_23DirectoryIterationFlagsES0_
    void oneOfCStr(char const*, std::initializer_list<char const*>); // _ZN4Core9oneOfCStrEPKcSt16initializer_listIS1_E
    void transferDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, std::function<Core::Result (Core::Path const&, Core::Path const&)> const&); // _ZN4Core17transferDirectoryEPNS_14FileSystemImplERKNS_4PathES1_S4_RKSt8functionIFNS_6ResultES4_S4_EE
    void starts_with(Core::StringSpan, Core::StringSpan); // _ZN4Core11starts_withENS_10StringSpanES0_
    void ends_with(Core::StringSpan, Core::StringSpan); // _ZN4Core9ends_withENS_10StringSpanES0_
    void find(Core::StringSpan, Core::StringSpan); // _ZN4Core4findENS_10StringSpanES0_
};
