#pragma once

class IPlaybackEngine {
public:
    virtual ~IPlaybackEngine() = default;

    virtual void IPBInitialize() = 0;
    virtual void IPBDecodeAndPlay() = 0;
};