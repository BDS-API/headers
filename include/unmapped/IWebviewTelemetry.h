#pragma once

#include "WebviewObserver.h"


class IWebviewTelemetry : WebviewObserver {

public:
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition
    ~IWebviewTelemetry();
    IWebviewTelemetry(IMinecraftEventing const&);
};
