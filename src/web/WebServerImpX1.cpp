#include "WebServerImpX1.h"
#include "httplib.h"
#include <iostream>

void WebServerImpX1::WebStartServer(int port) {
    IsRunning = true;
    ServerThread = std::thread([this, port]() {
        httplib::Server svr;

        svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
            res.set_content("<h1>Media App Web Version</h1>", "text/html");
        });

        std::cout << "Web server running at http://localhost:" << port << std::endl;
        svr.listen("0.0.0.0", port);
    });
}

void WebServerImpX1::WebStopServer() {
    IsRunning = false;
    if (ServerThread.joinable()) {
        ServerThread.join();
    }
}
