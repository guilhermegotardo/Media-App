#pragma once

class WebServer {
public:
    virtual ~WebServer() = default;
    virtual void WebStartServer(int port) = 0;
    virtual void WebStopServer() = 0;
};