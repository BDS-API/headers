#pragma once

#include "WebviewObserver.h"


class IWebviewTelemetry : public WebviewObserver {

public:
    virtual ~IWebviewTelemetry(); // _ZN17IWebviewTelemetryD2Ev
    virtual void __fake_function0(); // fake
    virtual void onDownloadBegin__incomplete0(long const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry15onDownloadBeginERK19WebviewDownloadInfo
    virtual void onDownloadComplete__incomplete0(long const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry18onDownloadCompleteERK19WebviewDownloadInfo
    virtual void onDownloadCanceled__incomplete0(long const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry18onDownloadCanceledERK19WebviewDownloadInfo
    IWebviewTelemetry(IMinecraftEventing const&); // _ZN17IWebviewTelemetryC2ERK18IMinecraftEventing
};
