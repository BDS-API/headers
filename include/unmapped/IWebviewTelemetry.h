#pragma once

#include "WebviewObserver.h"


class IWebviewTelemetry : WebviewObserver {

public:
    ~IWebviewTelemetry(); // _ZN17IWebviewTelemetryD2Ev
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry15onDownloadBeginERK19WebviewDownloadInfo
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry18onDownloadCompleteERK19WebviewDownloadInfo
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN17IWebviewTelemetry18onDownloadCanceledERK19WebviewDownloadInfo
    IWebviewTelemetry(IMinecraftEventing const&); // _ZN17IWebviewTelemetryC2ERK18IMinecraftEventing
};
