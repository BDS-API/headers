#pragma once

#include <memory>
#include "./UnzipSettings.h"
#include "./ZipProgress.h"
#include <vector>
#include "./ZipSettings.h"
#include <functional>
#include "./Path.h"
#include <string>


namespace Core {

class ZipUtils {

public:

    void getTranslatedZipResult(int);
    void getTranslatedUnzipResult(int);
    void zip(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::ZipSettings const&);
//  void zip(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, std::function<std::string (Core::Path)>, Core::ZipUtils::ZipSettings const&); //TODO: incomplete function definition
    void unzipInTransaction(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::UnzipSettings const&);
//  void unzipToFlatFile(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, Core::FileBufferingMode, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition
    void _zipEncodedPathToUTF8(Core::Path const&);
//  void getFilenames(Core::Path const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition
    void exists(Core::Path const&, Core::Path const&);
    std::string readAssetFileZipped(Core::Path const&, Core::Path const&);
};

}