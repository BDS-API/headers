#pragma once

#include "../bedrock/pack/PackAccessStrategy.h"
#include "../core/Path.h"


class ResourceSignature {

public:
    ~ResourceSignature();
    void _loadSignaturesFile(Core::Path const&, PackAccessStrategy const&);
    void areKnownFilesValid(PackAccessStrategy const&);
    void areKnownFilesValidRequireSignatureExists(PackAccessStrategy const&);
    void _areKnownFilesValid(PackAccessStrategy const&, bool);
    ResourceSignature();
    void _checkSignedFiles(PackAccessStrategy const&)const;
};
