#pragma once

#include "WebServer.h"
#include <memory>
#include <thread>
#include <atomic>

class WebServerImpl : public WebServer {
public:
    void WebStartServer(int port) override;
    void WebStopServer() override;

private:
    std::thread ServerThread;
    std::atomic<bool> IsRunning{false};
};
