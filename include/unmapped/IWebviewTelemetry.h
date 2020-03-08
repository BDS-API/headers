#pragma once

#include "../bedrock/eventing/IMinecraftEventing"


class IWebviewTelemetry : WebviewObserver {

public:
    IWebviewTelemetry::~IWebviewTelemetry()
    virtual void onDownloadBegin(WebviewDownloadInfo const&);
    virtual void onDownloadComplete(WebviewDownloadInfo const&);
    virtual void onDownloadCanceled(WebviewDownloadInfo const&);

    IWebviewTelemetry(IMinecraftEventing const&);
};
