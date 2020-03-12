#pragma once

#include <string>
#include "Path.h"
#include "ZipSettings.h"
#include <functional>
#include "ZipProgress.h"
#include <vector>
#include "UnzipSettings.h"


namespace Core {

    namespace ZipUtils {

        void zip(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::ZipSettings const&);
//      void zip(std::vector<Core::PathBuffer<std::string>> const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, std::function<std::string (Core::Path)>, Core::ZipUtils::ZipSettings const&); //TODO: incomplete function definition
        void unzipInTransaction(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::UnzipSettings const&);
        void getTranslatedUnzipResult(int);
//      void getFilenames(Core::Path const&, std::vector<Core::PathBuffer<std::string>> &, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition
        void getTranslatedZipResult(int);
//      void unzipToFlatFile(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, Core::FileBufferingMode, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition
        void _zipEncodedPathToUTF8(Core::Path const&);
        void exists(Core::Path const&, Core::Path const&);
        std::string readAssetFileZipped(Core::Path const&, Core::Path const&);
    };
}
