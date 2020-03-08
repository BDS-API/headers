#pragma once

#include "../core/SingleThreadedLock"


class WebviewObserver : Core::Observer<WebviewObserver, Core::SingleThreadedLock> {

public:
    virtual WebviewObserver::~WebviewObserver()
    virtual void onLoadingBegin();
    virtual void onLoadingEnd();
    virtual void onError(WebviewError const&);
    virtual void onDownloadBegin(WebviewDownloadInfo const&);
    virtual void onDownloadUpdate(WebviewDownloadInfo const&);
    virtual void onDownloadComplete(WebviewDownloadInfo const&);
    virtual void onDownloadCanceled(WebviewDownloadInfo const&);
    virtual void onMessageRecieved(std::string const&);

    WebviewObserver(void);
};
