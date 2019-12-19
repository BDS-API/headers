#pragma once

class IWebviewTelemetry : WebviewObserver {

public:
    virtual IWebviewTelemetry::~IWebviewTelemetry();
    virtual void onDownloadBegin(WebviewDownloadInfo const&);
    virtual void onDownloadComplete(WebviewDownloadInfo const&);
    virtual void onDownloadCanceled(WebviewDownloadInfo const&);

    IWebviewTelemetry(IMinecraftEventing const&);
};
