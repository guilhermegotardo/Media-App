#include <iostream>
#include "WebServerImpX1.h"

int main() {
    WebServerImpX1 web;
    web.WebStartServer(8080);

    std::this_thread::sleep_for(std::chrono::minutes(10));
    return 0;
}